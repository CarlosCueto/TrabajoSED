----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:15:56 01/12/2014 
-- Design Name: 
-- Module Name:    Prescaler - Behavioral 
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

entity PRESCALER is
	 Generic (
			FREC_IN : positive := 50e6;
			PERIOD_OUT : positive := 2000
	 );
    Port ( 
			  CLK_IN, CLR_N : in  std_logic;
           CLK_OUT : out  std_logic
	 );
end PRESCALER;

architecture BEHAVIORAL of PRESCALER is

	subtype NEEDED_SIZE is integer range 0 to FREC_IN * PERIOD_OUT;

	constant N : NEEDED_SIZE := FREC_IN * PERIOD_OUT;
	signal count : NEEDED_SIZE;
	
begin

	process(CLK_IN)
	begin
		if CLR_N = '0' then
			count <= 0;
		elsif CLK_IN'event and CLK_IN = '1' then
			if count < N then
				count <= count + 1;
			else
				count <= 0;
			end if;
		end if;
			
	end process;
	
	CLK_OUT <= '1' when count < N/2 else
					'0';

end BEHAVIORAL;

