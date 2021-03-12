library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
entity Counter is
    Port (	Clk_in: IN STD_LOGIC;
				async_rst: IN STD_LOGIC;
				pData_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				pData_en_in: IN STD_LOGIC;
				BCD_mode_in: IN STD_LOGIC;
				CNTR_en_in: IN STD_LOGIC;
				CNTR_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				Carry_out: OUT STD_LOGIC);
end Counter;
 
architecture Behavioral of Counter is
    begin
    Main: process(Clk_in, async_rst)
    variable count : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
	 variable countMax : STD_LOGIC_VECTOR(3 DOWNTO 0) := "0000";
        begin
			if async_rst = '1' then
				count := "0000";
				countMax := "0000";
				CNTR_out <= "0000";
				Carry_out <= '0';
			elsif Rising_Edge(Clk_in) then
				if bcd_mode_in = '1' then
					countMax := "1001";
				else
					countMax := "1111";
				end if;
				if CNTR_en_in = '1' then
					if count = countMax then
						Carry_out <= '1';
					else							
						count := count + 1;
						Carry_out <= '0';
					end if;
					CNTR_out <= count;
				end if;
				if pData_en_in = '1' then
					count := pData_in;
					if count >= countMax then
						Carry_out <= '1';
					else
						Carry_out <= '0';
					end if;
					CNTR_out <= pData_in;
				end if;
			end if;
		end process Main;
end Behavioral;