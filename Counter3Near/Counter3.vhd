library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity Counter3 is
    Port ( 	Input: 	IN		STD_LOGIC;
			Clk: 	IN		STD_LOGIC;
			Rst: 	IN		STD_LOGIC;
			Output: OUT  	STD_LOGIC);
end Counter3;

architecture Behavioral of Counter3 is
	begin
	Main: process(Clk, Rst)
	variable count : STD_LOGIC_VECTOR(1 DOWNTO 0);
	variable last : STD_LOGIC;
		begin
		if Rst = '1' then
				count := "00";
				last := '0';
				Output <= '0';
		elsif Rising_Edge(CLK) then
			if count = "11" then
				Output <= '0';
				count := "00";
			elsif input = '0' then
				if last = '0' then
					count := "00";
					Output <= '0'; 
				end if;
			elsif input = '1' then
				if count = "10" then
					Output <= '1';
					count := count + 1;
				else
					count := count + 1;
					Output <= '0';
				end if;
			end if;
		last := input;
		end if;
	end process Main;
end Behavioral;