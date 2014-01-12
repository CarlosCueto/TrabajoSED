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
           LED : out  std_logic_vector (7 downto 0));
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
   
   with HEX SELect
   LED(7 downto 1)<= "1001111" when "0001",   --1
							"0010010" when "0010",   --2
							"0000110" when "0011",   --3
							"1001100" when "0100",   --4
							"0100100" when "0101",   --5
							"0100000" when "0110",   --6
							"0001111" when "0111",   --7
							"0000000" when "1000",   --8
							"0000100" when "1001",   --9
							"0001000" when "1010",   --A
							"1100000" when "1011",   --b
							"0110001" when "1100",   --C
							"1000010" when "1101",   --d
							"0110000" when "1110",   --E
							"0111000" when "1111",   --F
							"0000001" when others;   --0
	
	LED(0) <= '0';

end DATAFLOW;

