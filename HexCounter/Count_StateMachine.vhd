----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:29:17 01/14/2014 
-- Design Name: 
-- Module Name:    COUNT_STATEMACHINE - BEHAVIORAL 
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

entity COUNT_STATEMACHINE is
	Generic (
			FREC_IN : positive := 50e6;
			FREC_OUT : positive := 1
	 );
    Port ( 
			  CLR_N : in STD_LOGIC;
			  START_CNT : in  STD_LOGIC;
           FINISHED : out  STD_LOGIC;
           CLK : in  STD_LOGIC);
end COUNT_STATEMACHINE;

architecture BEHAVIORAL of COUNT_STATEMACHINE is
	subtype NEEDED_SIZE is integer range 0 to FREC_IN / (FREC_OUT);

	constant N : NEEDED_SIZE := FREC_IN / (FREC_OUT);
	signal count : NEEDED_SIZE := 0;

begin
	
	
	process(CLR_N, CLK)
	begin
		if CLR_N = '0' then
			count <= 0;
			FINISHED <= '0';
		elsif CLK'event and CLK = '1' then
				if START_CNT = '1' then
					count <= 0;
					FINISHED <= '0';
				elsif count < N-1 then
					count <= count + 1;
					FINISHED <= '0';
				else
					count <= 0;
					FINISHED <= '1';
				end if;

		end if;
		
	end process;

end BEHAVIORAL;

