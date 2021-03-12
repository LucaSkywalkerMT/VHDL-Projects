library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
ENTITY IntMult_tb IS
	port 	(	Clk_out : OUT STD_LOGIC;
				rst_out: OUT STD_LOGIC;
				mult_start_out: OUT STD_LOGIC;
				multiplicand_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				multiplier_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
END IntMult_tb;
 
ARCHITECTURE behavior OF IntMult_tb IS 

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
		multiplicand_out <= "1101";
		multiplier_out <= "1011";
		rst_out <= '1';
		wait for 5 ns;
		rst_out <= '0';
		mult_start_out <= '1';
		wait for 10ns;
		mult_start_out <= '0';
		wait;
   end process;
END;