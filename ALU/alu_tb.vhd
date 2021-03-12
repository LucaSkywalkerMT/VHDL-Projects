library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity alu_tb is
	port (	Accumulator_out: out std_logic_vector (8 downto 1);
				Data_out : out std_logic_vector (8 downto 1);
				Opcode_out : out std_logic_vector (4 downto 1));
end alu_tb;

architecture alu_tb_arch of alu_tb is
	begin
	
	operation_1: PROCESS
		begin
			wait for 0ns; Opcode_out <= "0000";
			wait for 10 ns; Opcode_out <= "0001";
			wait for 10 ns; Opcode_out <= "0010";
			wait for 10 ns; Opcode_out <= "0011";
			wait for 10 ns; Opcode_out <= "0100";
			wait for 10 ns; Opcode_out <= "0101";
			wait for 10 ns; Opcode_out <= "0110";
			wait for 10 ns; Opcode_out <= "0111";
			wait for 10 ns; Opcode_out <= "1000";
			wait for 10 ns; Opcode_out <= "1001";
			wait for 10 ns; Opcode_out <= "1010";
			wait for 10 ns; Opcode_out <= "1011";
			wait for 10 ns; Opcode_out <= "1100";
			wait for 10 ns; Opcode_out <= "1101";
			wait for 10 ns; Opcode_out <= "1110";
			wait for 10 ns; Opcode_out <= "1111";
			wait;
	end PROCESS operation_1;
	
	operation_2: PROCESS
		begin
		wait for 0ns; Data_out <= "00000001";
		wait;
	end PROCESS operation_2;
	
	operation_3: PROCESS
		begin
		wait for 0ns; Accumulator_out <= "00001010";
		wait;
	end PROCESS operation_3;
end alu_tb_arch;
