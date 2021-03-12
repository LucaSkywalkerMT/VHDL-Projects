library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity Counter3_tl is
	port (Output: OUT STD_LOGIC);
end Counter3_tl;

architecture Counter3_tl_arch of Counter3_tl is
	component Counter3
		port (Input: IN STD_LOGIC);
	end component;
	signal INP : STD_LOGIC;
	signal OUTP : STD_LOGIC;
		begin
		Counter3_1 : Counter3 port map (	Input => INP,
											Output => OUTP);
end Counter3_tl_arch;