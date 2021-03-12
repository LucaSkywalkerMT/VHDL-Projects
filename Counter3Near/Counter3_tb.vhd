library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_misc.all;
use IEEE.std_logic_unsigned.all;

ENTITY Counter3_tb IS
END Counter3_tb;
 
ARCHITECTURE behavior OF Counter3_tb IS 
	COMPONENT Counter3 PORT(	Input : IN  std_logic;
										Clk : IN  std_logic;
										Rst : IN  std_logic;
										Output : OUT  std_logic);
	END COMPONENT;
	signal Input : std_logic := '0';
	signal Clk : std_logic := '0';
	signal Rst : std_logic := '0';
	signal Output : std_logic;
	constant Clk_period : time := 10 ns;
	BEGIN
   uut: Counter3 PORT MAP (
          Input => Input,
          Clk => Clk,
          Rst => Rst,
          Output => Output);
			 
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
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '0';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '1';
		WAIT FOR 10 NS;
		Input <= '0';
      wait;
   end process;

END;
