library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity TrafficLight is
    Port ( 	E:		IN		STD_LOGIC;
				N: 	IN		STD_LOGIC;
				Rst: 	IN		STD_LOGIC;
				Clk: 	IN		STD_LOGIC;
				R: 	OUT  	STD_LOGIC;
				Y: 	OUT  	STD_LOGIC;
				G: 	OUT  	STD_LOGIC);
end TrafficLight;
architecture Behavioral of TrafficLight is
	signal State : STD_LOGIC_VECTOR(2 DOWNTO 0) := "000";
	begin
	Main: process(Clk, Rst)
		begin
		if Rst = '1' then
			State <= "000";
			R <= '0';
			Y <= '0';
			G <= '0';
		elsif Rising_Edge(CLK) then
			case State is
				when "000" =>
					State <= "001";
					R <= '0';
					Y <= '0';
					G <= '1';
				when "001" =>
					R <= '0';
					Y <= '0';
					G <= '1';
					if E = '1' then
						State <= "010";
					else
						State <= "011";
					end if;
				when "010" =>
					State <= "011";
					R <= '0';
					Y <= '0';
					G <= '1';
				when "011" =>
					State <= "100";
					R <= '0';
					Y <= '1';
					G <= '0';
				when "100" =>
					State <= "101";
					R <= '1';
					Y <= '0';
					G <= '0';
				when "101" =>
					R <= '1';
					Y <= '0';
					G <= '0';
					if N = '1' then
						State <= "110";
					else
						State <= "111";
					end if;
				when "110" =>
					State <= "111";
					R <= '1';
					Y <= '0';
					G <= '0';
				when "111" =>
					State <= "000";
					R <= '1';
					Y <= '1';
					G <= '0';
				when others =>
			end case;
		end if;
	end process Main;
end Behavioral;