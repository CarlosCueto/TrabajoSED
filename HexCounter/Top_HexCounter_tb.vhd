--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:48:13 01/12/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/Top_HexCounter_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TOP_HEXCOUNTER
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_arith.ALL;
USE ieee.std_logic_unsigned.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Top_HexCounter_tb IS
END Top_HexCounter_tb;
 
ARCHITECTURE behavior OF Top_HexCounter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TOP_HEXCOUNTER
    PORT(
         CLK : IN  std_logic;
         START : IN  std_logic;
         PAUSE : IN  std_logic;
         RESET : IN  std_logic;
			LOAD : IN std_logic;
			DIG_IN : IN  std_logic_vector(3 downto 0);
         DIG_OUT : out  STD_LOGIC_VECTOR (7 downto 0);
         DISPLAY_SEL : out  STD_LOGIC_VECTOR (3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal START : std_logic := '0';
   signal PAUSE : std_logic := '0';
   signal RESET : std_logic := '0';
	signal LOAD : std_logic := '0';
	signal DIG_IN : std_logic_vector(3 downto 0);

 	--Outputs
   signal DIG_OUT : std_logic_vector(7 downto 0);
   signal DISPLAY_SEL : STD_LOGIC_VECTOR (3 downto 0);
	
	
	

   -- Clock period definitions
   constant CLK_period : time := 20 ns;
	
	signal CLK_COUNT : std_logic := '1';
	signal CLK_DOS : boolean := false;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TOP_HEXCOUNTER PORT MAP (
          CLK => CLK,
          START => START,
          PAUSE => PAUSE,
          RESET => RESET,
			 LOAD => LOAD,
			 DIG_IN => DIG_IN,
          DIG_OUT => DIG_OUT,
          DISPLAY_SEL => DISPLAY_SEL
 
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
 
	clk_counter: process
	begin
		if CLK'event and CLK = '1' then
			if CLK_COUNT = '0' then
				CLK_COUNT <= '1';
				CLK_DOS <= true;
			else
				CLK_COUNT <= '0';
				CLK_DOS <= false;
			end if;
		end if;
		
		wait until CLK'event;
	end process;
	


   -- Stimulus process
   stim_proc: process
   begin	
		START <= '0';
		RESET <= '1';
		wait for 2 ns;
		RESET <= '0';
		
		wait for 20 ns;
		--wait for 300 ms;
   
		assert DIG_OUT = "11111101" 
			report "Reset malfunction"
			severity failure;
			
		wait until CLK = '1';
		
		assert DIG_OUT = "11111101"
			report "Reset malfunction"
			severity failure;
			
		START <= '1';
		PAUSE <= '0';
	
		
		wait for 100 ns;
		--wait for 300 ms;
		--wait until tstart = '1';
		
		START <= '0';
		
		
		for i in 1 to 50e6 loop
			wait until CLK = '1';
		end loop;

		
		wait for 45 ms;
		
		assert DIG_OUT = "00100101" 
			report "First digit malfunction"
			severity failure;
			
		wait for 5 ms;
		
		assert DIG_OUT = "00000011"
			report "Second digit malfunction"
			severity failure;
		
------------------		
			
		START <= '0';
		RESET <= '1';
		wait for 2 ns;
		RESET <= '0';
		
		wait for 20 ns;
		
		START <= '0';
		PAUSE <= '0';
		LOAD <= '1';
		
		wait until CLK = '1';
		wait for 1 ms;
		
		LOAD <= '0';
		
		wait until CLK = '1';
		wait for 5 ms;
		
		assert DIG_OUT = "00000011"
			report "ST3 malfunction"
			severity failure;
			
		for i in 1 to 500000 loop
			wait until CLK = '1';
		end loop;
			
		assert DIG_OUT = "00000011"
			report "ST3 malfunction"
			severity failure;
		
		DIG_IN <= "1110";
		LOAD <= '1';
		
		wait until CLK = '1';
		wait for 1 ms;
		
		LOAD <= '0';
		
		wait until CLK = '1';
				
		assert DIG_OUT = "01100001"
			report "ST5 malfunction"
			severity failure;
			
		wait for 5 ms;
			
		assert DIG_OUT = "00000011"
			report "ST5 malfunction"
			severity failure;
			
		DIG_IN <= "1010";
		LOAD <= '1';
		
		wait until CLK = '1';
		wait for 1 ms;
		
		LOAD <= '0';
		
		wait until CLK = '1';
		wait for 5 ms;
		
		
		assert DIG_OUT = "01100001"
			report "Load1 malfunction"
			severity failure;
			
		wait for 5 ms;
			
		assert DIG_OUT = "00010001"
			report "Load2 malfunction"
			severity failure;
			
		LOAD <= '1';
		
		wait until CLK = '1';
		wait for 1 ms;
		
		LOAD <= '0';
		
		wait for 40 ns;
		
		assert DIG_OUT = "11111101"
			report "Back to ST0 malfunction"
			severity failure;
			
		for i in 1 to 500000 loop
			wait until CLK = '1';
		end loop;
			
		assert DIG_OUT = "11111101"
			report "Back to ST0 malfunction"
			severity failure;
				
		START <= '1';
		PAUSE <= '0';
		
		wait for 180 ns;
		
		START <= '0';
		
		for i in 1 to 50e6 loop
			wait until CLK = '1';
		end loop;

		wait for 45 ms;
		
		assert DIG_OUT = "00000011" 
			report "First digit malfunction"
			severity failure;
			
		wait for 5 ms;
		
		assert DIG_OUT = "11000001"
			report "Carry malfunction"
			severity failure;
			
		
					
		assert false
			report "OK. Test Finished"
			severity failure;

   end process;
	

END;
