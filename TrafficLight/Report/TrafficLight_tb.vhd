library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

ENTITY TrafficLight_tb IS
END TrafficLight_tb;
 
ARCHITECTURE behavior OF TrafficLight_tb IS 
	COMPONENT TrafficLight PORT(	E:		IN		STD_LOGIC;
											N: 	IN		STD_LOGIC;
											Rst: 	IN		STD_LOGIC;
											Clk: 	IN		STD_LOGIC;
											R: 	OUT  	STD_LOGIC;
											Y: 	OUT  	STD_LOGIC;
											G: 	OUT  	STD_LOGIC);
	END COMPONENT;
	signal E : std_logic := '1';
	signal N : std_logic := '1';
	signal Clk : std_logic := '0';
	signal Rst : std_logic := '0';

	constant Clk_period : time := 10 ns;
	BEGIN
   uut: TrafficLight PORT MAP (
          E => E,
          N => N,
          Rst => Rst,
          Clk => Clk);
			 
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   stim_proc: process
   begin		
      RST <= '1';
		WAIT FOR 8 NS;
		RST <= '0';
		WAIT;
   end process;

END;
