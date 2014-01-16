----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:02:20 01/14/2014 
-- Design Name: 
-- Module Name:    Sychronizer - Behavioral 
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

entity Sychronizer is
    Port ( SIGNAL_IN : in  STD_LOGIC;
           SIGNAL_OUT : out  STD_LOGIC;
           CLK : in  STD_LOGIC);
end Sychronizer;

architecture Behavioral of Sychronizer is

	signal sreg : std_logic_vector(1 downto 0);

	attribute ASYNC_REG : string;

	attribute ASYNC_REG of sreg : signal is "TRUE";

begin

	process (CLK)
	begin
		if CLK'event and CLK='1' then  
			SIGNAL_OUT <= sreg(1);
			sreg <= sreg(0) & SIGNAL_IN;
		end if;
	end process;

end Behavioral;

