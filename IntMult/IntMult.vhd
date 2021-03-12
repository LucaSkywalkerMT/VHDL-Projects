library IEEE;
use IEEE.std_logic_1164.all;
--use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
entity IntMult is
    Port (	Clk_in: IN STD_LOGIC;
				async_rst: IN STD_LOGIC;
				mult_start_in: IN STD_LOGIC;
				multiplicand_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				multiplier_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				mult_result_out: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
				mult_ready_out: OUT STD_LOGIC);
end IntMult;
 
architecture Behavioral of IntMult is
    begin
    Main: process(Clk_in, async_rst)
    variable count : STD_LOGIC_VECTOR (2 DOWNTO 0);
	 variable Q : STD_LOGIC_VECTOR(7 DOWNTO 0);
	 variable M : STD_LOGIC_VECTOR(3 DOWNTO 0);
	 variable C : STD_LOGIC_VECTOR(7 DOWNTO 0);
	 variable A : STD_LOGIC_VECTOR(7 DOWNTO 0);
        begin
			if async_rst = '1' then
			count := "000";
			Q := "00000000";
			M := "0000";
			A := "00000000";
			elsif Rising_Edge(Clk_in) then
				if mult_start_in = '1' then
					count := "000";
					Q := "0000" + multiplier_in;
					M := multiplicand_in;
					C := "00000000";
					A := "00000000";
					mult_result_out <= A;
					mult_ready_out <= '0';
				elsif count = "000" then
					mult_ready_out <= '0';
					if M(0) = '1' then
						A := A + Q;
					end if;
					mult_result_out <= A;
					count := count + 1;
					Q(7 DOWNTO 1) := Q(6 DOWNTO 0) + '0';
				elsif count = "001" then
					mult_ready_out <= '0';
					if M(1) = '1' then
						A := A + Q;
					end if;
					mult_result_out <= A;
					count := count + 1;
					Q(7 DOWNTO 1) := Q(6 DOWNTO 0) + '0';
				elsif count = "010" then
					mult_ready_out <= '0';
					if M(2) = '1' then
						A := A + Q;
					end if;
					mult_result_out <= A;
					count := count + 1;
					Q(7 DOWNTO 1) := Q(6 DOWNTO 0) + '0';
				elsif count = "011" then
					mult_ready_out <= '0';
					if M(3) = '1' then
						A := A + Q;
					end if;
					mult_result_out <= A;
					count := count + 1;
				elsif count = "100" then
					A := A + Q;
					A := not A;
					mult_ready_out <= '1';
					mult_result_out <= A;
					count := count + 1;
				end if;
			end if;
		end process Main;
end Behavioral;