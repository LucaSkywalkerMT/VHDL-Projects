library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;
 
entity DisplayDriver is
    Port (	Data_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				Output_out: OUT STD_LOGIC_VECTOR(6 DOWNTO 0));
end DisplayDriver;
 
architecture Behavioral of DisplayDriver is
    begin
    Main: process(Data_in)
    begin
		case Data_in is
		
			when "0000" => Output_out <= "1110111";--0
			when "0001" => Output_out <= "0010010";--1
			when "0010" => Output_out <= "1011101";--2
			when "0011" => Output_out <= "1011011";--3
			when "0100" => Output_out <= "0111010";--4
			when "0101" => Output_out <= "1101011";--5
			when "0110" => Output_out <= "1101111";--6
			when "0111" => Output_out <= "1010010";--7
			when "1000" => Output_out <= "1111111";--8
			when "1001" => Output_out <= "1111010";--9
			when "1010" => Output_out <= "1111110";--A
			when "1011" => Output_out <= "1111111";--B
			when "1100" => Output_out <= "1100101";--C
			when "1101" => Output_out <= "1110111";--D
			when "1110" => Output_out <= "1011101";--E
			when "1111" => Output_out <= "1110100";--F
			when others => Output_out <= "0000000";--catch
		
		end case;
    end process Main;
end Behavioral;