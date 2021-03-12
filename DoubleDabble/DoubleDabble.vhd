library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
entity DoubleDabble is
    Port (Clk_in: IN STD_LOGIC;
         Data_in: IN STD_LOGIC_VECTOR(7 DOWNTO 0);
			H_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
			T_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
			U_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
end DoubleDabble;
 
architecture Behavioral of DoubleDabble is
    begin
    Main: process(Clk_in)
    variable count : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	 variable IP : STD_LOGIC_VECTOR (19 DOWNTO 0);
        begin
        if Rising_Edge(Clk_in) then
				if count = "0000" then
					IP(7 DOWNTO 0) := Data_in;
					IP(19 DOWNTO 8) := "000000000000";
					H_out(3 DOWNTO 0) <= "0000";
					T_out(3 DOWNTO 0) <= "0000";
					U_out(3 DOWNTO 0) <= "0000";
					count := count + '1';
				elsif count < "1000" then
					IP := IP (18 DOWNTO 0) & '0';
					count := count + '1';
						if unsigned(IP(19 DOWNTO 16)) >= 5 then
							IP(19 DOWNTO 16) := IP(19 DOWNTO 16) + "0011";
						end if;
						if unsigned(IP(15 DOWNTO 12)) >= 5 then
							IP(15 DOWNTO 12) := IP(15 DOWNTO 12) + "0011";
						end if;
						if unsigned(IP(11 DOWNTO 8)) >= 5 then
							IP(11 DOWNTO 8) := IP(11 DOWNTO 8) + "0011";
						end if;
						H_out(3 DOWNTO 0) <= IP(19 DOWNTO 16);
						T_out(3 DOWNTO 0) <= IP(15 DOWNTO 12);
						U_out(3 DOWNTO 0) <= IP(11 DOWNTO 8);
				elsif count = "1000" then
					IP := IP (18 DOWNTO 0) & '0';
					count := count + '1';
					H_out(3 DOWNTO 0) <= IP(19 DOWNTO 16);
					T_out(3 DOWNTO 0) <= IP(15 DOWNTO 12);
					U_out(3 DOWNTO 0) <= IP(11 DOWNTO 8);
				end if;
        end if;
    end process Main;
end Behavioral;