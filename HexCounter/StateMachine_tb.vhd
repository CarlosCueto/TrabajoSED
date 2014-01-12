--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:26:37 01/12/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/StateMachine_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: STATEMACHINE
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
 
ENTITY StateMachine_tb IS
END StateMachine_tb;
 
ARCHITECTURE behavior OF StateMachine_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT STATEMACHINE
    PORT(
         CLK : IN  std_logic;
         CLR_N : IN  std_logic;
         START : IN  std_logic;
         PAUSE : IN  std_logic;
         COUNT_END : IN  std_logic;
         COUNT_EN : OUT  std_logic;
         DECODER_EN : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CLR_N : std_logic := '0';
   signal START : std_logic := '0';
   signal PAUSE : std_logic := '0';
   signal COUNT_END : std_logic := '0';

 	--Outputs
   signal COUNT_EN : std_logic;
   signal DECODER_EN : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
	
	type TEST is record
		CLR_N : std_logic;
		START : std_logic;
		PAUSE : std_logic;
		COUNT_END : std_logic;
		COUNT_EN : std_logic;
		DECODER_EN : std_logic;
	end record;
	
	type TEST_VECTOR is array (positive range <>) of TEST;
	
	constant VTEST : TEST_VECTOR := (
			(CLR_N =>'1', START=>'1', PAUSE=>'0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'1', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'1'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'1', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'1', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0'),
			(CLR_N =>'0', START=>'1', PAUSE=>'1', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0')
		);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: STATEMACHINE PORT MAP (
          CLK => CLK,
          CLR_N => CLR_N,
          START => START,
          PAUSE => PAUSE,
          COUNT_END => COUNT_END,
          COUNT_EN => COUNT_EN,
          DECODER_EN => DECODER_EN
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
	
		CLR_N <= '0', '1' after 0.2*CLK_period;

		PAUSE <= '0';
		START <= '0';
		COUNT_END <= '0';
     
	   wait until CLR_N = '1';
	  
	   assert COUNT_EN = '0'
			report "Count_en doesn't get cleared"
			severity failure;
			
	   assert DECODER_EN = '0'
			report "Decoder_en doesn't get cleared"
			severity failure;
			
		
		for i in VTEST'range loop
		
			CLR_N <= VTEST(i).CLR_N;
			START <= VTEST(i).START;
			PAUSE <= VTEST(i).PAUSE;
			COUNT_END <= VTEST(i).COUNT_END;
			
			wait until CLK = '1';
			wait for 5 ns;
			
			CLR_N <= '1';
			START <= '0';
			PAUSE <= '0';
			COUNT_END <= '0';
			
			assert DECODER_EN = VTEST(i).DECODER_EN
				report "Decoder_en malfunction"
				severity failure;
				
			assert COUNT_EN = VTEST(i).COUNT_EN
				report "Decoder_en malfunction"
				severity failure;
		
		end loop;
		

		
		assert false
			report "OK. Test finished"
			severity failure;
	
		
   end process;

END;
