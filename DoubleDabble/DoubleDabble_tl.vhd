library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity DoubleDabble_tl is
	port (OutH: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
			OutT: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
			OutU: OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
end DoubleDabble_tl;

architecture DoubleDabble_tl_arch of DoubleDabble_tl is
	component DoubleDabble
		port (Data_in: IN STD_LOGIC_VECTOR(7 DOWNTO 0);
				Clk_in: IN STD_LOGIC;
				H_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				T_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				U_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0));
	end component;
	
	component DoubleDabble_tb
		port (Data_out: OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
				Clk_out : OUT STD_LOGIC);
	end component;
	signal Data : STD_LOGIC_VECTOR(7 DOWNTO 0);
	signal Clk : STD_LOGIC;
		begin
		DoubleDabble_1 : DoubleDabble port map (Data_in => Data,
															H_out => OutH,
															T_out => OutT,
															U_out => OutU,
															Clk_in => Clk);
		tb_1 : DoubleDabble_tb port map (Data_out => Data,
													Clk_out => Clk);
end DoubleDabble_tl_arch;