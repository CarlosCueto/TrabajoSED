----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:24:58 01/12/2014 
-- Design Name: 
-- Module Name:    HexCounter - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity HEXCOUNTER is
    Port ( CLK : in  std_logic;
           CLR_N : in  std_logic;
           CI : in  std_logic;
			  LOAD : in std_logic;
           COUNT_OUT : out  std_logic_vector(3 downto 0);
			  COUNT_IN : in std_logic_vector(3 downto 0);
           CO : out  std_logic
	 );
end HEXCOUNTER;

architecture BEHAVIORAL of HEXCOUNTER is
	signal COUNT_i : std_logic_vector(COUNT_OUT'range);
begin

	process(CLK,CLR_N)
	begin
		if CLR_N = '0' then
			COUNT_i <= (OTHERS => '0');
		elsif CLK'event and CLK = '1' then
			if LOAD = '1' then
				COUNT_i <= COUNT_IN;
		
			elsif CI = '1' then
				COUNT_i <= COUNT_i + 1;
			end if;
		end if;
	end process;
	
	CO <= '1' when CI = '1' and COUNT_i = "1111" else
			'0';
	
	COUNT_OUT <= COUNT_i;

end BEHAVIORAL;

