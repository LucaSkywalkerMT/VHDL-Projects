/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_3620187407;
char *STD_STANDARD;
char *SYNOPSYS_P_3308480207;
char *IEEE_P_2592010699;
char *IEEE_P_3499444699;
char *IEEE_P_0017514958;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    synopsys_p_3308480207_init();
    ieee_p_0017514958_init();
    ieee_p_3620187407_init();
    work_a_4041704977_3212880686_init();
    work_a_4204076832_2372691052_init();
    work_a_3889012467_2329004005_init();


    xsi_register_tops("work_a_3889012467_2329004005");

    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    SYNOPSYS_P_3308480207 = xsi_get_engine_memory("synopsys_p_3308480207");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0017514958 = xsi_get_engine_memory("ieee_p_0017514958");

    return xsi_run_simulation(argc, argv);

}