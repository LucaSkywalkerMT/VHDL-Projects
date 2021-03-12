library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity IntMult_tl is
	port (mult_result: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
			mult_ready: OUT STD_LOGIC);
end IntMult_tl;

architecture IntMult_tl_arch of IntMult_tl is

	component IntMult
		port (Clk_in: IN STD_LOGIC;
				async_rst: IN STD_LOGIC;
				mult_start_in: IN STD_LOGIC;
				multiplicand_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				multiplier_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				mult_result_out: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
				mult_ready_out: OUT STD_LOGIC);
	end component;
	
	component IntMult_tb
		port (Clk_out : OUT STD_LOGIC;
				rst_out: OUT STD_LOGIC;
				mult_start_out: OUT STD_LOGIC;
				multiplicand_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				multiplier_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
	end component;
	
	signal Clk : STD_LOGIC;
	signal rst : STD_LOGIC;
	signal mult_start : STD_LOGIC;
	signal multiplicand : STD_LOGIC_VECTOR(3 DOWNTO 0);
	signal multiplier : STD_LOGIC_VECTOR(3 DOWNTO 0);
	
		begin
														
		IntMult_1 : IntMult port map (		Clk_in => Clk,
														async_rst => rst,
														mult_start_in => mult_start,
														multiplicand_in => multiplicand,
														multiplier_in => multiplier,
														mult_result_out => mult_result,
														mult_ready_out => mult_ready);
														
		IntMult_tb1 : IntMult_tb port map (	Clk_out => Clk,
														rst_out => rst,
														mult_start_out => mult_start,
														multiplicand_out => multiplicand,
														multiplier_out => multiplier);
end IntMult_tl_arch;