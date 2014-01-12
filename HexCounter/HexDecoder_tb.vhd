--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:20:08 01/12/2014
-- Design Name:   
-- Module Name:   /home/maxwell/GitHub/TrabajoSED/HexCounter/HexDecoder_tb.vhd
-- Project Name:  HexCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: HEXDECODER
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
 
ENTITY HexDecoder_tb IS
END HexDecoder_tb;


 
ARCHITECTURE behavior OF HexDecoder_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
 
    COMPONENT HEXDECODER
    PORT(
         HEX : IN  std_logic_vector(3 downto 0);
         LED : OUT  std_logic_vector(7 downto 0);
         EN : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal HEX : std_logic_vector(3 downto 0) := (others => '0');
   signal EN : std_logic := '0';

 	--Outputs
   signal LED : std_logic_vector(7 downto 0);

	type TEST is record
		EN : std_logic;
		HEX : std_logic_vector (3 downto 0);
		LED : std_logic_vector (7 downto 0);
	end record;
	
	type TEST_VECTOR is array (positive range <>) of TEST;
	
	
	CONSTANT VTEST : TEST_VECTOR := (
		(EN=>'1', HEX=>"0000", LED=>"00000011"),
		(EN=>'1', HEX=>"0001", LED=>"10011111"),
		(EN=>'1', HEX=>"0010", LED=>"00100101"),
		(EN=>'1', HEX=>"0011", LED=>"00001101"),
		(EN=>'1', HEX=>"0100", LED=>"10011001"),
		(EN=>'1', HEX=>"0101", LED=>"01001001"),
		(EN=>'1', HEX=>"0110", LED=>"01000001"),
		(EN=>'1', HEX=>"0111", LED=>"00011111"),
		(EN=>'1', HEX=>"1000", LED=>"00000001"),
		(EN=>'1', HEX=>"1001", LED=>"00001001"),
		(EN=>'1', HEX=>"1010", LED=>"00010001"),
		(EN=>'1', HEX=>"1011", LED=>"11000001"),
		(EN=>'1', HEX=>"1100", LED=>"01100011"),
		(EN=>'1', HEX=>"1101", LED=>"10000101"),
		(EN=>'1', HEX=>"1110", LED=>"01100001"),
		(EN=>'1', HEX=>"1111", LED=>"01110001"),
		(EN=>'0', HEX=>"----", LED=>"11111101")
	
	
	);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: HEXDECODER PORT MAP (
          HEX => HEX,
          LED => LED,
          EN => EN
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
     
	  for i in 2 to 17 loop
			
			HEX <= VTEST(i).HEX;
			EN <= VTEST(i).EN;
			
			wait for 20 ns;
			
			assert LED = VTEST(i).LED
				report "Malfunction"
				severity failure;
				
		end loop;
		
		assert false
			report "OK. Test Finished"
			severity failure;
	  
   end process;

END;
