library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
entity ALU is
	port ( 	Accumulator_in: in STD_LOGIC_VECTOR (7 downto 0);
				Data_in : in STD_LOGIC_VECTOR (7 downto 0);
				Opcode_in : in STD_LOGIC_VECTOR (3 downto 0);
				Result_out : out STD_LOGIC_VECTOR (7 downto 0));
end ALU;
architecture ALU_arch of ALU is
	begin
	Main: process(Accumulator_in,Opcode_in, Data_in)
	variable mult : STD_LOGIC_VECTOR(15 DOWNTO  0);
		begin
		case Opcode_in is
			when "0000" => Result_out <= Data_in;
			-- result = Data_in
			when "0001"=> Result_out <= Accumulator_in;
			-- result = accumulator_in
			when "0010"=> Result_out <= Data_in + Accumulator_in;
			-- result = accumulator_in + Data_in
			when "0011"=> Result_out <= Accumulator_in - Data_in;
			-- result = accumulator_in - Data_in
			when "0100"=> Result_out <= Accumulator_in and Data_in;
			-- result = accumulator_in and Data_in
			when "0101"=> Result_out <= Accumulator_in or Data_in;
			-- result = accumulator_in or Data_in
			when "0110"=> Result_out <= Accumulator_in xor Data_in;
			-- result = accumulator_in xor Data_in
			when "0111"=> Result_out <= not(accumulator_in);
			-- result = not(accumulator_in)
			when "1000"=> Result_out <= not(Data_in);
			-- result = not(Data_in);
			when "1001"=> Result_out <= "00000000";
			-- result = 0
			when "1010"=> 
				mult := Accumulator_in * Data_in;
				Result_out <= mult(7 downto 0);
			-- result = 8 LSBs of ( accumulator_in * Data_in)
			when "1011"=> 
				mult := Accumulator_in * Data_in;
				Result_out <= mult(15 downto 8);
			-- result = 8 MSBs of ( accumulator_in * Data_in)
			when "1100"=> Result_out <= accumulator_in nand Data_in;
			-- result = accumulator_in nand Data_in
			when "1101"=> Result_out <= accumulator_in nor Data_in;
			-- result = accumulator_in nor Data_in
			when "1110"=> Result_out <= accumulator_in xnor Data_in;
			--result=accumulator_in xnor Data_in
			when "1111"=> Result_out <= Accumulator_in+"00000001";
			--result=Accumulator_in+1
			when others => Result_out <="XXXXXXXX";
		end case;
	end process Main;
end ALU_arch;