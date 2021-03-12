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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/UNI/2020.21/HDL/Projects/SevenCounter/Counter.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4000226436_3212880686_p_0(char *t0)
{
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 6297);
    t6 = (t0 + 2448U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 4U);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 6301);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 4U);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 6305);
    t5 = (t0 + 3952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 4016);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t10 = (t4 == (unsigned char)3);
    if (t10 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 6313);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 4U);

LAB8:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB3;

LAB7:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6309);
    t7 = (t0 + 2568U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    memcpy(t7, t2, 4U);
    goto LAB8;

LAB10:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 2448U);
    t5 = *((char **)t1);
    t1 = (t0 + 6240U);
    t6 = (t0 + 2568U);
    t7 = *((char **)t6);
    t6 = (t0 + 6256U);
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t7, t6);
    if (t10 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 6240U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t2, t1, 1);
    t6 = (t0 + 2448U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t14 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    memcpy(t6, t5, t16);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 4016);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB14:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 3952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(37, ng0);
    t8 = (t0 + 4016);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB14;

LAB16:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 2448U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    memcpy(t1, t5, 4U);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2448U);
    t2 = *((char **)t1);
    t1 = (t0 + 6240U);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    t5 = (t0 + 6256U);
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4016);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB20:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(47, ng0);
    t7 = (t0 + 4016);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB20;

}


extern void work_a_4000226436_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4000226436_3212880686_p_0};
	xsi_register_didat("work_a_4000226436_3212880686", "isim/SevenCounter_tl_isim_beh.exe.sim/work/a_4000226436_3212880686.didat");
	xsi_register_executes(pe);
}
