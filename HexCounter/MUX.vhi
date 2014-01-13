
-- VHDL Instantiation Created from source file MUX.vhd -- 16:19:57 01/13/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT MUX
	PORT(
		SIGNAL1 : IN std_logic_vector(7 downto 0);
		SIGNAL2 : IN std_logic_vector(7 downto 0);
		SEL : IN std_logic;          
		SIGNAL_OUT : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_MUX: MUX PORT MAP(
		SIGNAL1 => ,
		SIGNAL2 => ,
		SEL => ,
		SIGNAL_OUT => 
	);


