library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

entity TrafficLight_tl is
	port (R: OUT STD_LOGIC;
			Y: OUT STD_LOGIC;
			G: OUT STD_LOGIC);
end TrafficLight_tl;

architecture TrafficLight_tl_arch of TrafficLight_tl is
	component TrafficLight
		port (E: IN STD_LOGIC;
				N: IN STD_LOGIC);
	end component;
	signal Rs : STD_LOGIC;
	signal Ys : STD_LOGIC;
	signal Gs :  STD_LOGIC;
	signal Es : STD_LOGIC;
	signal Nsi : STD_LOGIC;
	begin
	TrafficLight_1 : TrafficLight port map (	E => Es,
															N => Nsi);
end TrafficLight_tl_arch;