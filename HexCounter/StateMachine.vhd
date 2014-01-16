----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:27:57 01/12/2014 
-- Design Name: 
-- Module Name:    StateMachine - Behavioral 
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

entity STATEMACHINE is

	PORT (
		CLK, CLR_N, START, PAUSE, COUNT_END, LOAD, FINISHED_CNT : in std_logic;
		COUNT_EN, DECODER_EN, DEMUX_SEL, LOAD1, LOAD2, START_CNT : out std_logic
	);

end STATEMACHINE;

architecture BEHAVIORAL of STATEMACHINE is

	type STATE is (STATE0,STATE1,STATE1_2,STATE2, STATE3, STATE4, STATE5, STATE6, STATE7);
	
	signal EST_ACTUAL, EST_SIGUIENTE : STATE;

begin
	
	ESTADO_SIGUIENTE:
	process(EST_ACTUAL, START, PAUSE, COUNT_END, LOAD, FINISHED_CNT)
	begin
	
--		case EST_ACTUAL is
--			when STATE0 =>
--				if LOAD = '1' then
--					EST_SIGUIENTE <= STATE3;
--				elsif START = '1' and PAUSE = '0' and COUNT_END = '0' then
--					EST_SIGUIENTE <= STATE1;
--				else
--					EST_SIGUIENTE <= STATE0;
--				end if;
--				
--			when STATE1 =>
--				if FINISHED_CNT = '0' and COUNT_END = '0' and PAUSE = '0' then
--					EST_SIGUIENTE <= STATE1_2;
--				elsif COUNT_END = '1' then
--					EST_SIGUIENTE <= STATE0;
--				elsif PAUSE = '1' then
--					EST_SIGUIENTE <= STATE2;
--				else
--					EST_SIGUIENTE <= STATE1;
--				end if;
--				
--			when STATE1_2 =>
--				if PAUSE = '1' then
--					EST_SIGUIENTE <= STATE2;
--				elsif FINISHED_CNT = '1' then
--					EST_SIGUIENTE <= STATE1;
--				else
--					EST_SIGUIENTE <= STATE1_2;
--				end if;
--				
--			when STATE2 =>
--				if COUNT_END = '1' then
--					EST_SIGUIENTE <= STATE0;
--				elsif START = '1' then
--					EST_SIGUIENTE <= STATE1;
--				else
--					EST_SIGUIENTE <= STATE2;
--				end if;
--				
--			when STATE6 =>
--				EST_SIGUIENTE <= STATE7;
--			
--			when STATE4 =>
--				EST_SIGUIENTE <= STATE5;
--			
--			when STATE5 =>
--				if LOAD = '1' then
--					EST_SIGUIENTE <= STATE6;
--				else
--					EST_SIGUIENTE <= STATE5;
--				end if;
--			
--			when STATE3 =>
--				if LOAD = '1' then
--					EST_SIGUIENTE <= STATE4;
--				else
--					EST_SIGUIENTE <= STATE3;
--				end if;
--			
--			when STATE7 =>
--				if LOAD = '1' then
--					EST_SIGUIENTE <= STATE0;
--				else
--					EST_SIGUIENTE <= STATE7;
--				end if;
			
			


			
				
			if EST_ACTUAL = STATE1 then
				if FINISHED_CNT = '0' and COUNT_END = '0' and PAUSE = '0' then
					EST_SIGUIENTE <= STATE1_2;
				elsif COUNT_END = '1' then
					EST_SIGUIENTE <= STATE0;
				elsif PAUSE = '1' then
					EST_SIGUIENTE <= STATE2;
				else
					EST_SIGUIENTE <= STATE1;
				end if;
				
			elsif EST_ACTUAL = STATE1_2 then
				if PAUSE = '1' then
					EST_SIGUIENTE <= STATE2;
				elsif FINISHED_CNT = '1' then
					EST_SIGUIENTE <= STATE1;
				else
					EST_SIGUIENTE <= STATE1_2;
				end if;
				
			elsif EST_ACTUAL = STATE2 then
				if COUNT_END = '1' then
					EST_SIGUIENTE <= STATE0;
				elsif START = '1' then
					EST_SIGUIENTE <= STATE1;
				else
					EST_SIGUIENTE <= STATE2;
				end if;
				
			elsif EST_ACTUAL = STATE7 then
				if LOAD = '1' then
					EST_SIGUIENTE <= STATE0;
				else
					EST_SIGUIENTE <= STATE7;
				end if;
			
			elsif EST_ACTUAL = STATE6 then
				if LOAD = '0' then
					EST_SIGUIENTE <= STATE7;
				end if;
									
			elsif EST_ACTUAL = STATE5 then
				if LOAD = '1' then
					EST_SIGUIENTE <= STATE6;
				else
					EST_SIGUIENTE <= STATE5;
				end if;
				
			elsif EST_ACTUAL = STATE4 then
				if LOAD = '0' then
					EST_SIGUIENTE <= STATE5;
				end if;
			
			elsif EST_ACTUAL = STATE3 then
				if LOAD = '1' then
					EST_SIGUIENTE <= STATE4;
				else
					EST_SIGUIENTE <= STATE3;
				end if;
				
			elsif EST_ACTUAL = STATE0 then
				if LOAD = '1' then
					EST_SIGUIENTE <= STATE3;
				elsif START = '1' and PAUSE = '0' and COUNT_END = '0' then
					EST_SIGUIENTE <= STATE1;
				else
					EST_SIGUIENTE <= STATE0;
				end if;
				
			end if;
		
			
		
	end process ESTADO_SIGUIENTE;
	
	REGISTRATE:
	process(CLK, CLR_N)
	begin
		if CLR_N = '0' then
			EST_ACTUAL <= STATE0;

		elsif clk'event and clk = '1' then
			EST_ACTUAL <= EST_SIGUIENTE;
		end if;
	end process REGISTRATE;
	
	SALIDA:
	process(EST_ACTUAL)
	begin
		case EST_ACTUAL is
			when STATE0 =>
				COUNT_EN <= '0';
				DECODER_EN <= '0';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
				
			when STATE1 =>
				COUNT_EN <= '1';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '1';
				
			when STATE1_2 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
			
			when STATE2 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
				
			when STATE3 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
				
			when STATE4 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '1';
				LOAD2 <= '0';
				START_CNT <= '0';
				
			when STATE5 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '1';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
				
			when STATE6 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '1';
				LOAD1 <= '0';
				LOAD2 <= '1';
				START_CNT <= '0';
				
			when STATE7 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
				DEMUX_SEL <= '0';
				LOAD1 <= '0';
				LOAD2 <= '0';
				START_CNT <= '0';
				

		end case;
	end process SALIDA;
	

end BEHAVIORAL;

