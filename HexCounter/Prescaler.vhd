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
			FREC_OUT : positive := 25e6
	 );
    Port ( 
			  CLK_IN, CLR_N : in  std_logic;
           CLK_OUT : out  std_logic
	 );
end PRESCALER;

architecture BEHAVIORAL of PRESCALER is

	subtype NEEDED_SIZE is integer range 0 to FREC_IN / FREC_OUT;

	constant N : NEEDED_SIZE := FREC_IN / FREC_OUT;
	signal count : NEEDED_SIZE;
	
	signal CLK_OUT_i : std_logic;
	
begin

	process(CLR_N, CLK_IN)
	begin
		if CLR_N = '0' then
			count <= 0;
			CLK_OUT_i <= '0';
		elsif CLK_IN'event then
			if count < N-1 then
				count <= count + 1;
			else
				count <= 0;
				
				if CLK_OUT_i = '0' then
					CLK_OUT_i <= '1';
				else
					CLK_OUT_i <= '0';
				end if;
				
			end if;
		end if;
		
		CLK_OUT <= CLK_OUT_i;
			
	end process;
	
	

end BEHAVIORAL;

