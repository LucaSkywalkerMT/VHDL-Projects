library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
ENTITY DoubleDabble_tb IS
	port (Data_out: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
			Clk_out: OUT STD_LOGIC);
END DoubleDabble_tb;
 
ARCHITECTURE behavior OF DoubleDabble_tb IS 

constant Clk_period : time := 10 ns;
 BEGIN
             
   Clk_process :process
   begin
        Clk_out <= '0';
        wait for Clk_period/2;
        Clk_out <= '1';
        wait for Clk_period/2;
   end process;
 
   stim_proc: process
   begin        
		Data_out <= "11010111";
   wait;
   end process;
END;