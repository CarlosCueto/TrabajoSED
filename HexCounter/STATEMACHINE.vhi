
-- VHDL Instantiation Created from source file STATEMACHINE.vhd -- 07:10:26 01/12/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT STATEMACHINE
	PORT(
		CLK : IN std_logic;
		CLR_N : IN std_logic;
		START : IN std_logic;
		PAUSE : IN std_logic;
		COUNT_END : IN std_logic;          
		COUNT_EN : OUT std_logic;
		DECODER_EN : OUT std_logic
		);
	END COMPONENT;

	Inst_STATEMACHINE: STATEMACHINE PORT MAP(
		CLK => ,
		CLR_N => ,
		START => ,
		PAUSE => ,
		COUNT_END => ,
		COUNT_EN => ,
		DECODER_EN => 
	);


