library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity SevenCounter_tl is
	port (Carry: OUT STD_LOGIC;
			Output: OUT STD_LOGIC_VECTOR(6 DOWNTO 0));
end SevenCounter_tl;

architecture SevenCounter_tl_arch of SevenCounter_tl is

	component DisplayDriver
		port (Data_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				Output_out: OUT STD_LOGIC_VECTOR(6 DOWNTO 0));
	end component;
	
	component Counter
		port (Clk_in: IN STD_LOGIC;
				async_rst: IN STD_LOGIC;
				pData_in: IN STD_LOGIC_VECTOR(3 DOWNTO 0);
				pData_en_in: IN STD_LOGIC;
				BCD_mode_in: IN STD_LOGIC;
				CNTR_en_in: IN STD_LOGIC;
				CNTR_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				Carry_out: OUT STD_LOGIC);
	end component;
	
	component SevenCounter_tb
		port (Clk_out : OUT STD_LOGIC;
				rst_out: OUT STD_LOGIC;
				pData_out: OUT STD_LOGIC_VECTOR(3 DOWNTO 0);
				pData_en_out: OUT STD_LOGIC;
				BCD_mode_out: OUT STD_LOGIC;
				CNTR_en_out: OUT STD_LOGIC);
	end component;
	
	signal Data : STD_LOGIC_VECTOR(3 DOWNTO 0);
	signal Clk : STD_LOGIC;
	signal rst : STD_LOGIC;
	signal pData : STD_LOGIC_VECTOR(3 DOWNTO 0);
	signal pData_en : STD_LOGIC;
	signal BCD_mode : STD_LOGIC;
	signal CNTR_en : STD_LOGIC;
	
		begin
		Driver_1 : DisplayDriver port map (	Data_in => Data,
														Output_out => Output);
														
		counter_1 : counter port map (		Clk_in => Clk,
														async_rst => rst,
														pData_in => pData,
														pData_en_in => pData_en,
														BCD_mode_in => BCD_mode,
														CNTR_en_in => CNTR_en,
														CNTR_out => Data,
														Carry_out => Carry);
														
		tb_1 : SevenCounter_tb port map (	Clk_out => Clk,
														rst_out => rst,
														pData_out => pData,
														pData_en_out => pData_en,
														BCD_mode_out => BCD_mode,
														CNTR_en_out => CNTR_en);
end SevenCounter_tl_arch;