
-- VHDL Instantiation Created from source file DEMUX.vhd -- 13:45:50 01/13/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT DEMUX
	PORT(
		SIGNAL_IN : IN std_logic_vector(3 downto 0);
		SEL : IN std_logic;          
		SIGNAL1 : OUT std_logic_vector(3 downto 0);
		SIGNAL2 : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	Inst_DEMUX: DEMUX PORT MAP(
		SIGNAL_IN => ,
		SEL => ,
		SIGNAL1 => ,
		SIGNAL2 => 
	);


