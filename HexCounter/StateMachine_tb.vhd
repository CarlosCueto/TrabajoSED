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
			LOAD : IN  std_logic;
         COUNT_END : IN  std_logic;
			FINISHED_CNT : IN std_LOGIC;
         COUNT_EN : OUT  std_logic;
			DEMUX_SEL : OUT  std_logic;
			LOAD1 : OUT  std_logic;
			LOAD2 : OUT  std_logic;
			START_CNT : OUT  std_logic;
         DECODER_EN : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal CLR_N : std_logic := '0';
   signal START : std_logic := '0';
   signal PAUSE : std_logic := '0';
   signal COUNT_END : std_logic := '0';
	signal LOAD : std_logic := '0';
	signal FINISHED_CNT : std_logic := '0';
	

 	--Outputs
   signal COUNT_EN : std_logic;
   signal DECODER_EN : std_logic;
	signal LOAD1 : std_logic;
	signal LOAD2 : std_logic;
	signal DEMUX_SEL : std_logic;
	signal START_CNT : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
	
	type TEST is record
		CLR_N : std_logic;
		START : std_logic;
		PAUSE : std_logic;
		LOAD : std_logic;
		COUNT_END : std_logic;
		FINISHED_CNT : std_logic;
		COUNT_EN : std_logic;
		START_CNT : std_logic;
		DECODER_EN : std_logic;
	end record;
	
	type TEST2 is record
		LOAD : std_logic;
		DEMUX_SEL : std_logic;
		LOAD1 : std_logic;
		LOAD2 : std_logic;
		COUNT_EN : std_logic;
		DECODER_EN : std_logic;
	end record;
	
	type TEST_VECTOR is array (positive range <>) of TEST;
	
	type TEST_VECTOR2 is array (positive range <>) of TEST2;
	
	constant VTEST : TEST_VECTOR := (
			(CLR_N =>'1', START=>'1', PAUSE=>'0', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1', FINISHED_CNT => '0', START_CNT =>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'1', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'1', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1', FINISHED_CNT => '0', START_CNT =>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'0', LOAD => '0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'1', DECODER_EN=>'1', FINISHED_CNT => '0', START_CNT =>'1'),
			(CLR_N =>'1', START=>'0', PAUSE=>'1', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'1', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'1', START=>'0', PAUSE=>'0', LOAD => '0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'1', LOAD => '0', COUNT_END=>'0', COUNT_EN=>'0', DECODER_EN=>'0', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'1', START=>'1', PAUSE=>'0', LOAD => '0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0', FINISHED_CNT => '0', START_CNT =>'0'),
			(CLR_N =>'0', START=>'1', PAUSE=>'1', LOAD => '0', COUNT_END=>'1', COUNT_EN=>'0', DECODER_EN=>'0', FINISHED_CNT => '0', START_CNT =>'0')
		);
		
	constant VTEST2 : TEST_VECTOR2 := (
			(LOAD => '1', DEMUX_SEL =>'0', LOAD1 => '0', LOAD2 => '0', COUNT_EN => '0', DECODER_EN => '0'),
			(LOAD => '1', DEMUX_SEL =>'0', LOAD1 => '1', LOAD2 => '0', COUNT_EN => '0', DECODER_EN => '0'),
			(LOAD => '-', DEMUX_SEL =>'1', LOAD1 => '0', LOAD2 => '0', COUNT_EN => '0', DECODER_EN => '0'),
			(LOAD => '1', DEMUX_SEL =>'1', LOAD1 => '0', LOAD2 => '1', COUNT_EN => '0', DECODER_EN => '0'),
			(LOAD => '-', DEMUX_SEL =>'0', LOAD1 => '0', LOAD2 => '0', COUNT_EN => '0', DECODER_EN => '1'),
			(LOAD => '1', DEMUX_SEL =>'0', LOAD1 => '0', LOAD2 => '0', COUNT_EN => '0', DECODER_EN => '0')
			);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: STATEMACHINE PORT MAP (
          CLK => CLK,
          CLR_N => CLR_N,
          START => START,
          PAUSE => PAUSE,
			 LOAD => LOAD,
          COUNT_END => COUNT_END,
			 FINISHED_CNT => FINISHED_CNT,
          COUNT_EN => COUNT_EN,
			 DEMUX_SEL => DEMUX_SEL,
			 LOAD1 => LOAD1,
			 LOAD2 => LOAD2,
			 START_CNT => START_CNT,
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
			LOAD <= VTEST(i).LOAD;
			COUNT_END <= VTEST(i).COUNT_END;
			FINISHED_CNT <= VTEST(i).FINISHED_CNT;
			
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
				report "Count_en malfunction"
				severity failure;
				
			assert START_CNT = VTEST(i).START_CNT
				report "Count_en malfunction"
				severity failure;
				
			wait until CLK = '1';
			wait until CLK = '1';
			wait until CLK = '1';
			wait until CLK = '1';
			wait until CLK = '1';
			wait until CLK = '1';
			wait for 5 ns;
			
			if VTEST(i).START = '1' and  VTEST(i).PAUSE = '0' then
				FINISHED_CNT <= '1'; 
			end if;
			
			wait until CLK = '1';
			wait for 5 ns;
			
			FINISHED_CNT <= '0';
			
		
		end loop;
		
		CLR_N <= '0', '1' after 0.2*CLK_period;
		
		for i in VTEST2'range loop
		
			LOAD <= VTEST2(i).LOAD;
			
			wait until CLK = '1';
			wait for 5 ns;
			
			LOAD <= '0';
			
			assert DEMUX_SEL = VTEST2(i).DEMUX_SEL
				report "Demux_sel malfunction"
				severity failure;
			
			assert LOAD1 = VTEST2(i).LOAD1
				report "Load1 malfunction"
				severity failure;
			
			assert LOAD2 = VTEST2(i).LOAD2
				report "Load2 malfunction"
				severity failure;
			
			assert DECODER_EN = VTEST2(i).DECODER_EN
				report "Decoder_en malfunction"
				severity failure;
				
			assert COUNT_EN = VTEST2(i).COUNT_EN
				report "Decoder_en malfunction"
				severity failure;
		
			wait until CLK = '1';
			wait for 5 ns;
			
		end loop;

		
		assert false
			report "OK. Test finished"
			severity failure;
	
		
   end process;

END;
