----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:56:19 01/12/2014 
-- Design Name: 
-- Module Name:    Debouncer - Behavioral 
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

entity DEBOUNCER is
	PORT(
		CLK, SIGNAL_IN, CLR_N : out std_logic;
		SIGNAL_OUT : out std_logic
	);
	
end DEBOUNCER;

architecture BEHAVIORAL of DEBOUNCER is
	signal Q1, Q2, Q3 : std_logic;
begin

	process(CLK)
	begin
		if (CLK'event and CLK = '1') then
			if (CLR_N = '0') then
				Q1 <= '0';
				Q2 <= '0';
				Q3 <= '0'; 
			else
				Q1 <= SIGNAL_IN;
				Q2 <= Q1;
				Q3 <= Q2;
			end if;
		end if;
	end process;
 
	SIGNAL_OUT <= Q1 and Q2 and (not Q3);

end Behavioral;

