--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:30:26 01/12/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/HexCounter_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HEXCOUNTER
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
 
ENTITY HexCounter_tb IS
END HexCounter_tb;
 
ARCHITECTURE behavior OF HexCounter_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT HEXCOUNTER
    PORT(
         CLK : IN  std_logic;
         CLR_N : IN  std_logic;
         CI : IN  std_logic;
			LOAD : IN  std_logic;
			COUNT_IN : IN  std_logic_vector(3 downto 0);
         COUNT_OUT : OUT  std_logic_vector(3 downto 0);
         CO : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CLR_N : std_logic := '0';
   signal CI : std_logic := '0';
	signal LOAD : std_logic := '0';
	signal COUNT_IN : std_logic_vector(3 downto 0) := "0000";

 	--Outputs
   signal COUNT_OUT : std_logic_vector(3 downto 0);
   signal CO : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
	

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: HEXCOUNTER PORT MAP (
          CLK => CLK,
          CLR_N => CLR_N,
          CI => CI,
			 LOAD => LOAD,
			 COUNT_IN => COUNT_IN,
          COUNT_OUT => COUNT_OUT,
          CO => CO
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 
	

   -- Stimulus process
   stim_proc: process
		variable COUNT : std_logic_vector (3 downto 0);
   begin		
	
		CLR_N <= '0';
		
		wait for 5 ns;
		
		assert CO = '0'
			report "CO wasn't cleared"
			severity failure;
		
		assert COUNT_OUT = "0000"
			report "COUNT_OUT wasn't cleared"
			severity failure;
			
			
		CI <= '1';
		
		wait until CLK = '1';
		
		assert CO = '0' and COUNT_OUT = "0000"
			report "Clear non-predominant"
			severity failure;
			
		CLR_N <= '1';
		
		COUNT := (OTHERS => '0');
		
		for i in 0 to 14 loop
		
			wait until CLK = '1';
			wait for 5 ns;
			
			COUNT := COUNT + 1;
			
			
			assert COUNT = COUNT_OUT
				report "Count malfunction"
				severity failure;
				
			exit when i = 14;
				
			assert CO = '0'
				report "Carry malfunction"
				severity failure;
			
		end loop;
		
		assert CO = '1'
				report "Carry malfunction when count ended"
				severity failure;
				
				
		
		for i in 0 to 5 loop
		
			wait until CLK = '1';
			wait for 5 ns;

			
		end loop;
		
		CI <= '0';
		
		for i in 0 to 9 loop
		
			wait until CLK = '1';
			wait for 5 ns;
			
		end loop;
		
		assert "0101" = COUNT_OUT
				report "Count malfunction"
				severity failure;

				
		assert CO = '0'
			report "Carry malfunction"
			severity failure;
				
				
		assert false
			report "OK. Simulation finished"
			severity failure;
     
   end process;

END;
