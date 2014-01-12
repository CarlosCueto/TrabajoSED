----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    07:07:25 01/12/2014 
-- Design Name: 
-- Module Name:    Top_HexCounter - STRUCTURAL 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity TOP_HEXCOUNTER is
    Port ( CLK : in  STD_LOGIC;
           START : in  STD_LOGIC;
           PAUSE : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           DIG1 : out  STD_LOGIC_VECTOR (7 downto 0);
           DIG2 : out  STD_LOGIC_VECTOR (7 downto 0));
end TOP_HEXCOUNTER;

architecture STRUCTURAL of TOP_HEXCOUNTER is
	
	component DEBOUNCER
	port(          
		CLK : IN std_logic;
		SIGNAL_IN : IN std_logic;
		CLR_N : IN std_logic;
		SIGNAL_OUT : OUT std_logic
		);
	end component;
	
	component PRESCALER
	port(
		CLK_IN : IN std_logic;
		CLR_N : IN std_logic;          
		CLK_OUT : OUT std_logic
		);
	end component;

	component STATEMACHINE
	port(
		CLK : IN std_logic;
		CLR_N : IN std_logic;
		START : IN std_logic;
		PAUSE : IN std_logic;
		COUNT_END : IN std_logic;          
		COUNT_EN : OUT std_logic;
		DECODER_EN : OUT std_logic
		);
	end component;

	component HEXCOUNTER
	port(
		CLK : IN std_logic;
		CLR_N : IN std_logic;
		CI : IN std_logic;          
		COUNT_OUT : OUT std_logic_vector(3 downto 0);
		CO : OUT std_logic
		);
	end component;
	
	component HEXDECODER
	port(
		HEX : IN std_logic_vector(3 downto 0);
		EN : IN std_logic;          
		LED : OUT std_logic_vector(7 downto 0)
		);
	end component;
	
	signal SCALED_CLK : std_logic;
	signal DEBOUNCED_START, DEBOUNCED_PAUSE : std_logic;
	signal COUNT_EN, DECODER_EN, COUNT_END : std_logic;
	signal FRST_DIG_CARRY : std_logic;
	signal FRST_HEX, SCND_HEX : std_logic_vector(3 downto 0);
	
begin

	CLK_PRESCALER: PRESCALER port map(
		CLK_IN => CLK,
		CLR_N => RESET,
		CLK_OUT => SCALED_CLK 
	);
	
	START_DEBOUNCER: DEBOUNCER port map(
		CLK => SCALED_CLK,
		SIGNAL_IN => START,
		CLR_N => RESET,
		SIGNAL_OUT => DEBOUNCED_START
	);
	
	PAUSE_DEBOUNCER: DEBOUNCER port map(
		CLK => SCALED_CLK,
		SIGNAL_IN => PAUSE,
		CLR_N => RESET,
		SIGNAL_OUT => DEBOUNCED_PAUSE
	);
	
	Inst_STATEMACHINE: STATEMACHINE port map(
		CLK => SCALED_CLK,
		CLR_N => RESET,
		START => DEBOUNCED_START,
		PAUSE => DEBOUNCED_PAUSE,
		COUNT_END => COUNT_END,
		COUNT_EN => COUNT_EN,
		DECODER_EN => DECODER_EN
	);
	
	FRST_DIG: HEXCOUNTER port map(
		CLK => SCALED_CLK,
		CLR_N => RESET,
		CI => COUNT_EN,
		COUNT_OUT => FRST_HEX,
		CO => FRST_DIG_CARRY
	);
	
	SCND_DIG: HEXCOUNTER port map(
		CLK => SCALED_CLK,
		CLR_N => RESET,
		CI => FRST_DIG_CARRY,
		COUNT_OUT => SCND_HEX,
		CO => COUNT_END
	);

	FRST_DIG_DECODER: HEXDECODER port map(
		HEX => FRST_HEX,
		LED => DIG1,
		EN => DECODER_EN
	);
	
	SCND_DIG_DECODER: HEXDECODER port map(
		HEX => SCND_HEX,
		LED => DIG2,
		EN => DECODER_EN
	);

end STRUCTURAL;

