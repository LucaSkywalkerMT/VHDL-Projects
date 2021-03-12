library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity alu_tl is
	port ( Result : out std_logic_vector (8 downto 1));
end alu_tl;

architecture alu_tl_arch of alu_tl is
	component alu
		port (	Accumulator_in: in std_logic_vector (8 downto 1);
					Data_in: in std_logic_vector (8 downto 1);
					Opcode_in: in std_logic_vector (4 downto 1);
					Result_out: out std_logic_vector (8 downto 1));
	end component ;
	component alu_tb is
		port (	Accumulator_out: out std_logic_vector (8 downto 1);
					Data_out: out std_logic_vector (8 downto 1);
					Opcode_out: out std_logic_vector (4 downto 1));
	end component;
	signal Accumulator : std_logic_vector(8 downto 1);
	signal Data : std_logic_vector(8 downto 1);
	signal Opcode : std_logic_vector(4 downto 1);
	begin
		alu_1 : alu port map (	Accumulator_in => Accumulator,
										Data_in => Data,
										Opcode_in => Opcode,
										Result_out => Result);
		tb_1 : alu_tb port map (	Accumulator_out => Accumulator,
											Data_out => Data,
											Opcode_out => Opcode);
end alu_tl_arch;