--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:26:57 01/12/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/Prescaler_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: PRESCALER
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Prescaler_tb IS
END Prescaler_tb;
 
ARCHITECTURE behavior OF Prescaler_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT PRESCALER
    PORT(
         CLK_IN : IN  std_logic;
         CLR_N : IN  std_logic;
         CLK_OUT : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_IN : std_logic := '0';
   signal CLR_N : std_logic := '0';

 	--Outputs
   signal CLK_OUT : std_logic;

   -- Clock period definitions
   constant CLK_IN_period : time := 20 ns;
	constant CLK_OUT_period : time := 40 ns;
   
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: PRESCALER PORT MAP (
          CLK_IN => CLK_IN,
          CLR_N => CLR_N,
          CLK_OUT => CLK_OUT
        );

   -- Clock process definitions
   CLK_IN_process :process
   begin
		CLK_IN <= '0';
		wait for CLK_IN_period/2;
		CLK_IN <= '1';
		wait for CLK_IN_period/2;
   end process;
 
   CLR_N <= '0', '1' AFTER 0.2*CLK_IN_period;

   -- Stimulus process
   stim_proc: process
		variable rise_time, fall_time : time;
		
   begin		
      wait until CLR_N = '1';
		
		wait for 5 ns;
		
		assert CLK_OUT = '0'
			report "Clock stuck at 1"
			severity failure;
		
		wait until CLK_IN = '1';
		
		wait until CLK_OUT = '1';
		
		rise_time := now;
		
		assert CLK_OUT = '1'
			report "Clock stuck at 0"
			severity failure;
		
		wait until CLK_IN = '0';
		
		assert CLK_OUT = '1'
			report "Clock_out follows clock_in"
			severity failure;
		
		wait until CLK_OUT = '0';

		
		assert (now - rise_time) = CLK_OUT_period * 0.5
			report "Incorrect out first semiperiod"
			severity failure;
		
		fall_time := now;
		
			
		wait until CLK_OUT = '1';
		
		assert (now - fall_time) = CLK_OUT_period * 0.5
			report "Incorrect out second semiperiod"
			severity failure;
			
		assert false
			report "OK. Test finished"
			severity failure;

   end process;

END;
