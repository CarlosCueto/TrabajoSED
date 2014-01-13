--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:40:34 01/13/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/Demux_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DEMUX
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
 
ENTITY Demux_tb IS
END Demux_tb;
 
ARCHITECTURE behavior OF Demux_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DEMUX
    PORT(
         SIGNAL_IN : IN  std_logic_vector(3 downto 0);
         SEL : IN  std_logic;
         SIGNAL1 : OUT  std_logic_vector(3 downto 0);
         SIGNAL2 : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal SIGNAL_IN : std_logic_vector(3 downto 0) := (others => '0');
   signal SEL : std_logic := '0';

 	--Outputs
   signal SIGNAL1 : std_logic_vector(3 downto 0);
   signal SIGNAL2 : std_logic_vector(3 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DEMUX PORT MAP (
          SIGNAL_IN => SIGNAL_IN,
          SEL => SEL,
          SIGNAL1 => SIGNAL1,
          SIGNAL2 => SIGNAL2
        );


   -- Stimulus process
   stim_proc: process
   begin		
     SIGNAL_IN <= "0101";
	  SEL <= '0';
	  
	  wait for 5 ns;
	  
	  assert SIGNAL1 = "0101" and SIGNAL2 = "0000"
			report "Signal1 malfunction"
			severity failure;
			
	  SEL <= '1';
	  
	  wait for 5 ns;
	  
	  assert SIGNAL2 = "0101" and SIGNAL1 = "0000"
			report "Signal2 malfunction"
			severity failure;
			
	  assert false
			report "OK. Test Finished"
			severity failure;
			
			
   end process;

END;
