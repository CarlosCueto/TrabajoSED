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
			  LOAD : in STD_LOGIC;
			  DIG_IN : in STD_LOGIC_VECTOR (3 downto 0);
           DIG_OUT : out  STD_LOGIC_VECTOR (7 downto 0);
           DISPLAY_SEL : out  STD_LOGIC_VECTOR (3 downto 0)
	  );
end TOP_HEXCOUNTER;

architecture STRUCTURAL of TOP_HEXCOUNTER is

	component Sychronizer
	port(
		SIGNAL_IN : IN std_logic;
		CLK : IN std_logic;          
		SIGNAL_OUT : OUT std_logic
		);
	end component;
	
	component DEBOUNCER
	port(          
		CLK : IN std_logic;
		SIGNAL_IN : IN std_logic;
		CLR_N : IN std_logic;
		SIGNAL_OUT : OUT std_logic
		);
	end component;
	
	component PRESCALER
	Generic (
			FREC_IN : positive := 50e6;
			FREC_OUT : positive := 1
	 );
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
		LOAD : IN std_logic;
		COUNT_END : IN std_logic;     
		FINISHED_CNT : IN std_logic;  		
		COUNT_EN : OUT std_logic;
		DEMUX_SEL : OUT std_logic;
		LOAD1 : OUT std_logic;
		LOAD2 : OUT std_logic;
		START_CNT : OUT std_logic; 
		DECODER_EN : OUT std_logic
		);
	end component;
	
	component COUNT_STATEMACHINE
	port(
		CLR_N : IN std_logic;
		START_CNT : IN std_logic;
		CLK : IN std_logic;          
		FINISHED : OUT std_logic
		);
	end component;
	
	component DEMUX
	port(
		SIGNAL_IN : IN std_logic_vector(3 downto 0);
		SEL : IN std_logic;          
		SIGNAL1 : OUT std_logic_vector(3 downto 0);
		SIGNAL2 : OUT std_logic_vector(3 downto 0)
		);
	end component;

	component HEXCOUNTER
	port(
		CLK : IN std_logic;
		CLR_N : IN std_logic;
		CI : IN std_logic;
		LOAD : IN std_logic;
		COUNT_IN : IN std_logic_vector(3 downto 0);
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
	
	component MUX
	port(
		SIGNAL1 : IN std_logic_vector(7 downto 0);
		SIGNAL2 : IN std_logic_vector(7 downto 0);
		SEL : IN std_logic;          
		SIGNAL_OUT : OUT std_logic_vector(7 downto 0)
		);
	end component;
	
	--Señales auxiliares
	signal SCALED_CLK : std_logic;
	signal SYNC_START, SYNC_PAUSE, SYNC_LOAD : std_logic;
	signal DEBOUNCED_START, DEBOUNCED_PAUSE, DEBOUNCED_LOAD : std_logic;
	signal COUNT_EN, DECODER_EN, COUNT_END, DEMUX_SEL, LOAD1, LOAD2 : std_logic;
	signal FINISHED_CNT, START_CNT : std_logic;
	signal COUNT1_IN, COUNT2_IN : std_logic_vector(3 downto 0);
	signal FRST_DIG_CARRY : std_logic;
	signal FRST_HEX, SCND_HEX : std_logic_vector(3 downto 0);
	signal DIG1, DIG2 : std_logic_vector(7 downto 0);
	signal DISPLAY_CLK : std_logic;
	
begin


	
--Acondicionamiento entrada START	
	
	--Sincronizador para la entrada START
	
	START_Sychronizer: Sychronizer port map(
		SIGNAL_IN => START,
		SIGNAL_OUT => SYNC_START,
		CLK => CLK
	);
	
	--Antirrebote para la entrada START
	
	START_DEBOUNCER: DEBOUNCER port map(
		CLK => CLK,
		SIGNAL_IN => SYNC_START,
		CLR_N => not RESET,
		SIGNAL_OUT => DEBOUNCED_START
	);
	
--Acondicionamiento entrada PAUSE	
	
	--Sincronizador para la entrada PAUSE
	
	PAUSE_Sychronizer: Sychronizer port map(
		SIGNAL_IN => PAUSE,
		SIGNAL_OUT => SYNC_PAUSE,
		CLK => CLK
	);
	
	--Antirrebote para la entrada PAUSE
	
	PAUSE_DEBOUNCER: DEBOUNCER port map(
		CLK => CLK,
		SIGNAL_IN => SYNC_PAUSE,
		CLR_N => not RESET,
		SIGNAL_OUT => DEBOUNCED_PAUSE
	);
	
--Acondicionamiento entrada LOAD	
	
	--Sincronizador para la entrada LOAD
	
	LOAD_Sychronizer: Sychronizer port map(
		SIGNAL_IN => LOAD,
		SIGNAL_OUT => SYNC_LOAD,
		CLK => CLK
	);
	
	--Antirrebote para la entrada LOAD
	
	LOAD_DEBOUNCER: DEBOUNCER port map(
		CLK => CLK,
		SIGNAL_IN => SYNC_LOAD,
		CLR_N => not RESET,
		SIGNAL_OUT => DEBOUNCED_LOAD
	);
	
--Máquina de estados
	
	Inst_STATEMACHINE: STATEMACHINE port map(
		CLK => CLK,
		CLR_N => not RESET,
		START => DEBOUNCED_START,
		PAUSE => DEBOUNCED_PAUSE,
		LOAD => DEBOUNCED_LOAD,
		COUNT_END => COUNT_END,
		FINISHED_CNT => FINISHED_CNT,
		COUNT_EN => COUNT_EN,
		DEMUX_SEL => DEMUX_SEL,
		LOAD1 => LOAD1,
		LOAD2 => LOAD2,
		START_CNT => START_CNT,
		DECODER_EN => DECODER_EN
	);
	
	--Contador de la máquina de estados
	
	Inst_COUNT_STATEMACHINE: COUNT_STATEMACHINE port map(
		CLR_N => not RESET,
		START_CNT => START_CNT,
		FINISHED => FINISHED_CNT,
		CLK => CLK
	);
	
--Demultiplexor para carga síncrona
	
	LOAD_DEMUX: DEMUX port map(
		SIGNAL_IN => DIG_IN,
		SEL => DEMUX_SEL,
		SIGNAL1 => COUNT1_IN,
		SIGNAL2 => COUNT2_IN
	);

--Primer dígito

	--Contador del primer dígito
	
	FRST_DIG: HEXCOUNTER port map(
		CLK => CLK,
		CLR_N => not RESET,
		CI => COUNT_EN,
		LOAD => LOAD1,
		COUNT_IN => COUNT1_IN,
		COUNT_OUT => FRST_HEX,
		CO => FRST_DIG_CARRY
	);
	
	--Decodificador del primer dígito

	FRST_DIG_DECODER: HEXDECODER port map(
		HEX => FRST_HEX,
		LED => DIG1,
		EN => DECODER_EN
	);
	
--Segundo dígito

	--Contador del segundo dígito
	
	SCND_DIG: HEXCOUNTER port map(
		CLK => CLK,
		CLR_N => not RESET,
		CI => FRST_DIG_CARRY,
		LOAD => LOAD2,
		COUNT_IN => COUNT2_IN,
		COUNT_OUT => SCND_HEX,
		CO => COUNT_END
	);
	
	--Decodificador del segundo dígito
	
	SCND_DIG_DECODER: HEXDECODER port map(
		HEX => SCND_HEX,
		LED => DIG2,
		EN => DECODER_EN
	);
	
--Displays

	--Prescaler de 100 Hz para los displays
	
	DISPLAY_PRESCALER: PRESCALER 
	generic map (
		FREC_OUT => 100 )
	port map(
		CLK_IN => CLK,
		CLR_N => not RESET,
		CLK_OUT => DISPLAY_CLK 
	);

	--Salida de selección de los displays
	
	DISPLAY_SEL(3) <= '1';
	DISPLAY_SEL(2) <= '1';
	DISPLAY_SEL(1) <= DISPLAY_CLK;
	DISPLAY_SEL(0) <= not DISPLAY_CLK;
	
	--Selección del dígito de entrada a los displays
		
	DISPLAY_MUX: MUX PORT MAP(
		SIGNAL1 => DIG2,
		SIGNAL2 => DIG1,
		SEL => DISPLAY_CLK,
		SIGNAL_OUT => DIG_OUT
	);

end STRUCTURAL;

