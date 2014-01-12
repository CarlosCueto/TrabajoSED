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
		CLK, CLR_N, START, PAUSE, COUNT_END : in std_logic;
		COUNT_EN, DECODER_EN : out std_logic
	);

end STATEMACHINE;

architecture BEHAVIORAL of STATEMACHINE is

	type STATE is (STATE0,STATE1,STATE2);
	
	signal EST_ACTUAL, EST_SIGUIENTE : STATE;

begin
	
	ESTADO_SIGUIENTE:
	process(EST_ACTUAL, START, PAUSE, COUNT_END)
	begin
	
		case EST_ACTUAL is
			when STATE0 =>
				if START = '1' and PAUSE = '0' and COUNT_END = '0' then
					EST_SIGUIENTE <= STATE1;
				else
					EST_SIGUIENTE <= STATE0;
				end if;
				
			when STATE1 =>
				if COUNT_END = '1' then
					EST_SIGUIENTE <= STATE0;
				elsif PAUSE = '1' then
					EST_SIGUIENTE <= STATE2;
				else
					EST_SIGUIENTE <= STATE1;
				end if;
				
			when STATE2 =>
				if COUNT_END = '1' then
					EST_SIGUIENTE <= STATE0;
				elsif START = '1' then
					EST_SIGUIENTE <= STATE1;
				else
					EST_SIGUIENTE <= STATE2;
				end if;
			
			
		end case;
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
				
			when STATE1 =>
				COUNT_EN <= '1';
				DECODER_EN <= '1';
			
			when STATE2 =>
				COUNT_EN <= '0';
				DECODER_EN <= '1';
		end case;
	end process SALIDA;
	

end BEHAVIORAL;

