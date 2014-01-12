
-- VHDL Instantiation Created from source file HEXCOUNTER.vhd -- 07:11:10 01/12/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT HEXCOUNTER
	PORT(
		CLK : IN std_logic;
		CLR_N : IN std_logic;
		CI : IN std_logic;          
		COUNT_OUT : OUT std_logic_vector(3 downto 0);
		CO : OUT std_logic
		);
	END COMPONENT;

	Inst_HEXCOUNTER: HEXCOUNTER PORT MAP(
		CLK => ,
		CLR_N => ,
		CI => ,
		COUNT_OUT => ,
		CO => 
	);


