
-- VHDL Instantiation Created from source file HEXDECODER.vhd -- 07:11:55 01/12/2014
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT HEXDECODER
	PORT(
		HEX : IN std_logic_vector(3 downto 0);
		EN : IN std_logic;          
		LED : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_HEXDECODER: HEXDECODER PORT MAP(
		HEX => ,
		LED => ,
		EN => 
	);


