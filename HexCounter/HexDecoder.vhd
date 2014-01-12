----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:00:14 01/12/2014 
-- Design Name: 
-- Module Name:    HexDecoder - Behavioral 
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

entity HEXDECODER is
    Port ( HEX : in  std_logic_vector (3 downto 0);
           LED : out  std_logic_vector (7 downto 0);
			  EN : in std_logic
	 );
end HEXDECODER;

architecture DATAFLOW of HEXDECODER is

begin
--      a
--     ---  
--  f |   | b
--     ---   <- g
--  e |   | c
--     ---
--      d
   
   
   LED(7 downto 1)<= "1001111" when HEX = "0001" and EN = '1' else   --1
							"0010010" when HEX = "0010" and EN = '1' else   --2
							"0000110" when HEX = "0011" and EN = '1' else   --3
							"1001100" when HEX = "0100" and EN = '1' else   --4
							"0100100" when HEX = "0101" and EN = '1' else   --5
							"0100000" when HEX = "0110" and EN = '1' else   --6
							"0001111" when HEX = "0111" and EN = '1' else   --7
							"0000000" when HEX = "1000" and EN = '1' else   --8
							"0000100" when HEX = "1001" and EN = '1' else   --9
							"0001000" when HEX = "1010" and EN = '1' else   --A
							"1100000" when HEX = "1011" and EN = '1' else   --b
							"0110001" when HEX = "1100" and EN = '1' else   --C
							"1000010" when HEX = "1101" and EN = '1' else   --d
							"0110000" when HEX = "1110" and EN = '1' else   --E
							"0111000" when HEX = "1111" and EN = '1' else   --F
							"1111110" when EN = '0' else
							"0000001" ;   --0
	
	LED(0) <= '0';

end DATAFLOW;

