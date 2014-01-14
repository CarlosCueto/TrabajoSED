----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:07:50 01/13/2014 
-- Design Name: 
-- Module Name:    MUX - BEHAVIORAL 
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

entity MUX is
	 Generic (
			  WIDTH : in positive := 8
	 );
    Port ( SIGNAL1 : in  STD_LOGIC_VECTOR (WIDTH-1 downto 0);
           SIGNAL2 : in  STD_LOGIC_VECTOR (WIDTH-1 downto 0);
			  SEL : in STD_LOGIC;
           SIGNAL_OUT : out  STD_LOGIC_VECTOR (WIDTH-1 downto 0));
end MUX;

architecture BEHAVIORAL of MUX is

begin
	with SEL select
		SIGNAL_OUT <= SIGNAL1 when '0',
						  SIGNAL2 when '1',
						  (others => '0') when others;

end BEHAVIORAL;

