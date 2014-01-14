----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:38:28 01/13/2014 
-- Design Name: 
-- Module Name:    DEMUX - BEHAVIORAL 
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

entity DEMUX is
	 Generic (
			  WIDTH : in positive := 4
	 );
    Port ( SIGNAL_IN : in  STD_LOGIC_VECTOR (WIDTH-1 downto 0);
			  SEL : IN STD_LOGIC;	
           SIGNAL1 : out  STD_LOGIC_VECTOR (WIDTH-1 downto 0);
           SIGNAL2 : out  STD_LOGIC_VECTOR (WIDTH-1 downto 0));
end DEMUX;

architecture BEHAVIORAL of DEMUX is

begin
	 SIGNAL1 <= SIGNAL_IN when SEL = '0' else
					"0000";

	 SIGNAL2 <= SIGNAL_IN when SEL = '1' else
					"0000";

end BEHAVIORAL;

