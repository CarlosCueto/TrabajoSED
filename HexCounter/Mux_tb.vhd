--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:14:05 01/13/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/Mux_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MUX
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Mux_tb IS
END Mux_tb;
 
ARCHITECTURE behavior OF Mux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MUX
    PORT(
         SIGNAL1 : IN  std_logic_vector(7 downto 0);
         SIGNAL2 : IN  std_logic_vector(7 downto 0);
         SEL : IN  std_logic;
         SIGNAL_OUT : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal SIGNAL1 : std_logic_vector(7 downto 0) := (others => '0');
   signal SIGNAL2 : std_logic_vector(7 downto 0) := (others => '0');
   signal SEL : std_logic := '0';

 	--Outputs
   signal SIGNAL_OUT : std_logic_vector(7 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MUX PORT MAP (
          SIGNAL1 => SIGNAL1,
          SIGNAL2 => SIGNAL2,
          SEL => SEL,
          SIGNAL_OUT => SIGNAL_OUT
        );

  
 

   -- Stimulus process
   stim_proc: process
   begin		
      SIGNAL1 <= "01010000";
		SIGNAL2 <= "01010011";
		
		SEL <= '0';
		
		wait for 20 ns;
		
		assert SIGNAL_OUT = "01010000"
			report "Signal1 malfunction"
			severity failure;
		
		SEL <= '1';
		
		wait for 20 ns;
		
		assert SIGNAL_OUT = "01010011"
			report "Signal2 malfunction"
			severity failure;
			
		assert false
			report "Ok. Test Finished"
			severity failure;
			
   end process;

END;
