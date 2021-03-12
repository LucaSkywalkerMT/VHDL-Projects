library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
ENTITY SevenCounter_tb IS
	port (	Clk_out : OUT STD_LOGIC;
				rst_out: OUT STD_LOGIC;
				pData_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				pData_en_out: OUT STD_LOGIC;
				BCD_mode_out: OUT STD_LOGIC;
				CNTR_en_out: OUT STD_LOGIC);
END SevenCounter_tb;
 
ARCHITECTURE behavior OF SevenCounter_tb IS 

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
		pData_en_out <= '0';
		CNTR_en_out <= '1';
		BCD_mode_out <= '1';
		pData_out <= "0011";
		rst_out <= '1';
		wait for 8 ns;
		rst_out <= '0';
		wait for 50 ns;
		CNTR_en_out <= '0';
		wait for 20 ns;
		CNTR_en_out <= '1';
		wait for 30 ns;
		pData_en_out <= '1';
		wait for 10 ns;
		pData_en_out <= '0';
		wait for 100 ns;
		BCD_mode_out <= '0';
		wait;
   end process;
END;