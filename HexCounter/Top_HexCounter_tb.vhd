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
         DIG1 : OUT  std_logic_vector(7 downto 0);
         DIG2 : OUT  std_logic_vector(7 downto 0)

        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal START : std_logic := '0';
   signal PAUSE : std_logic := '0';
   signal RESET : std_logic := '0';

 	--Outputs
   signal DIG1 : std_logic_vector(7 downto 0);
   signal DIG2 : std_logic_vector(7 downto 0);

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
          DIG1 => DIG1,
          DIG2 => DIG2
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
	
	--RESET <= '0', '1' after 0.2*CLK_period;

   -- Stimulus process
   stim_proc: process
   begin		
--		RESET <= '0';
--		wait for 2 ns;
--		RESET <= '1';
--		
--		wait for 60 ns;
--   
--		assert DIG1 = "11111101" and DIG2 = "11111101"
--			report "Reset malfunction"
--			severity failure;
--			
--		START <= '1';
--		PAUSE <= '0';
--		
--		wait for 120 ns;
--		
--		START <= '0';
--		
--		for i in 0 to 15 loop
--		
--			wait until CLK_DOS;
--
--		end loop;
--		
--		assert DIG1 = "01110001" and DIG2 = "00000011"
--			report "First digit malfunction"
--			severity failure;
--			
--		wait until CLK_DOS;
--		
--		assert DIG1 = "00000011" and DIG2 = "10011111"
--			report "Carry malfunction"
--			severity failure;
			
----------------------------------------------------------		
		
		RESET <= '0';
		wait for 2 ns;
		RESET <= '1';
		
		wait for 60 ns;
		
		assert DIG1 = "11111101" and DIG2 = "11111101"
			report "Reset malfunction"
			severity failure;
		
		START <= '1';
		PAUSE <= '0';
		
		wait for 10 ns;
		
		PAUSE <= '1';
		
		wait for 110 ns;
		
		START <= '0';
		
		wait for 10 ns;
		
		PAUSE <= '0';
		
		
		for i in 0 to 15 loop
		
			wait until CLK_DOS;

		end loop;
		
		assert DIG1 = "10011111" and DIG2 = "00000011"
			report "Pause malfunction"
			severity failure;
				
		assert false
			report "OK. Test Finished"
			severity failure;

   end process;

END;
