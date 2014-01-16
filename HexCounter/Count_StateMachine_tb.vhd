--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:35:36 01/15/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/Count_StateMachine_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: COUNT_STATEMACHINE
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
 
ENTITY Count_StateMachine_tb IS
END Count_StateMachine_tb;
 
ARCHITECTURE behavior OF Count_StateMachine_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT COUNT_STATEMACHINE
    PORT(
			CLR_N : IN std_logic;
         START_CNT : IN  std_logic;
         FINISHED : OUT  std_logic;
         CLK : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
	signal CLR_N : std_logic := '0';
   signal START_CNT : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal FINISHED : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: COUNT_STATEMACHINE PORT MAP (
			 CLR_N => CLR_N,
          START_CNT => START_CNT,
          FINISHED => FINISHED,
          CLK => CLK
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
   begin		
		
	  CLR_N <= '0', '1' after 2 ns;
     
	  wait until CLR_N = '1';
	  
	  START_CNT <= '1';
	  
	  wait until clk = '1';
	  wait for 5 ns;
	  
	  START_CNT <= '0';
	  
	  for i in 1 to 50e6 loop
			wait until CLK = '1';
	  end loop;
	  
	  wait for 5 ns;
		  
	  assert FINISHED = '1'
			report "Count malfunction"
			severity failure;
	
	  wait until CLK = '1';
			
	  START_CNT <= '1';
	  
	  wait until clk = '1';
	  wait for 5 ns;
	  
	  START_CNT <= '0';
	  
	   for i in 1 to 50e6 loop
			wait until CLK = '1';
	  end loop;
	  
	  wait for 5 ns;
		  
	  assert FINISHED = '1'
			report "Count malfunction"
			severity failure;
			
	  assert false
			report "OK. Test finished."
			severity failure;
	  
   end process;

END;
