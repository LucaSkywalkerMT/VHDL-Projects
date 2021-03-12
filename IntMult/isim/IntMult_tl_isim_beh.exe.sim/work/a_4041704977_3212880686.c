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
static const char *ng0 = "C:/Users/Luca/Documents/Personal Work/UNI/2020.21/HDL/Projects/IntMult/IntMult.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_4041704977_3212880686_p_0(char *t0)
{
    char t10[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(26, ng0);
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
LAB3:    t1 = (t0 + 4072);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 7238);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    memcpy(t6, t1, 3U);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 7241);
    t5 = (t0 + 2408U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 7249);
    t5 = (t0 + 2528U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 4U);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 7253);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t8 = (t4 == (unsigned char)3);
    if (t8 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = (t0 + 7284);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 2;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB10;

LAB11:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = (t0 + 7287);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 2;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = (t0 + 7290);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 2;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = (t0 + 7293);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 2;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = (t0 + 7296);
    t7 = (t10 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 2;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t12 = (2 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB30;

LAB31:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 7261);
    t7 = (t0 + 2288U);
    t9 = *((char **)t7);
    t7 = (t9 + 0);
    memcpy(t7, t2, 3U);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 7264);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 3;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t6 = (t0 + 7076U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t1, t11, t7, t6);
    t14 = (t0 + 2408U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    t16 = (t10 + 12U);
    t13 = *((unsigned int *)t16);
    t17 = (1U * t13);
    memcpy(t14, t9, t17);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2528U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    memcpy(t1, t2, 4U);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 7268);
    t5 = (t0 + 2648U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 7276);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 4216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(41, ng0);
    t9 = (t0 + 4216);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t12 = (0 - 3);
    t13 = (t12 * -1);
    t17 = (1U * t13);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t13 = (7 - 6);
    t17 = (t13 * 1U);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 6;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 6);
    t20 = (t12 * -1);
    t20 = (t20 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t20;
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t10, t1, t11, (unsigned char)2);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t20 = (7 - 7);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t7 = (t9 + t22);
    t14 = (t10 + 12U);
    t23 = *((unsigned int *)t14);
    t24 = (1U * t23);
    memcpy(t7, t6, t24);
    goto LAB8;

LAB12:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t0 + 7172U);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t7 = (t0 + 7124U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t6, t5, t9, t7);
    t15 = (t0 + 2768U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t18 = (t10 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (1U * t20);
    memcpy(t15, t14, t21);
    goto LAB13;

LAB15:    xsi_set_current_line(49, ng0);
    t9 = (t0 + 4216);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t12 = (1 - 3);
    t13 = (t12 * -1);
    t17 = (1U * t13);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t13 = (7 - 6);
    t17 = (t13 * 1U);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 6;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 6);
    t20 = (t12 * -1);
    t20 = (t20 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t20;
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t10, t1, t11, (unsigned char)2);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t20 = (7 - 7);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t7 = (t9 + t22);
    t14 = (t10 + 12U);
    t23 = *((unsigned int *)t14);
    t24 = (1U * t23);
    memcpy(t7, t6, t24);
    goto LAB8;

LAB17:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t0 + 7172U);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t7 = (t0 + 7124U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t6, t5, t9, t7);
    t15 = (t0 + 2768U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t18 = (t10 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (1U * t20);
    memcpy(t15, t14, t21);
    goto LAB18;

LAB20:    xsi_set_current_line(57, ng0);
    t9 = (t0 + 4216);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t12 = (2 - 3);
    t13 = (t12 * -1);
    t17 = (1U * t13);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:
LAB23:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t13 = (7 - 6);
    t17 = (t13 * 1U);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 6;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 6);
    t20 = (t12 * -1);
    t20 = (t20 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t20;
    t6 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t10, t1, t11, (unsigned char)2);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t20 = (7 - 7);
    t21 = (t20 * 1U);
    t22 = (0 + t21);
    t7 = (t9 + t22);
    t14 = (t10 + 12U);
    t23 = *((unsigned int *)t14);
    t24 = (1U * t23);
    memcpy(t7, t6, t24);
    goto LAB8;

LAB22:    xsi_set_current_line(59, ng0);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t0 + 7172U);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t7 = (t0 + 7124U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t6, t5, t9, t7);
    t15 = (t0 + 2768U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t18 = (t10 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (1U * t20);
    memcpy(t15, t14, t21);
    goto LAB23;

LAB25:    xsi_set_current_line(65, ng0);
    t9 = (t0 + 4216);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t12 = (3 - 3);
    t13 = (t12 * -1);
    t17 = (1U * t13);
    t19 = (0 + t17);
    t1 = (t2 + t19);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB29:
LAB28:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    goto LAB8;

LAB27:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 2768U);
    t6 = *((char **)t5);
    t5 = (t0 + 7172U);
    t7 = (t0 + 2408U);
    t9 = *((char **)t7);
    t7 = (t0 + 7124U);
    t14 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t6, t5, t9, t7);
    t15 = (t0 + 2768U);
    t16 = *((char **)t15);
    t15 = (t16 + 0);
    t18 = (t10 + 12U);
    t20 = *((unsigned int *)t18);
    t21 = (1U * t20);
    memcpy(t15, t14, t21);
    goto LAB28;

LAB30:    xsi_set_current_line(72, ng0);
    t9 = (t0 + 2768U);
    t14 = *((char **)t9);
    t9 = (t0 + 7172U);
    t15 = (t0 + 2408U);
    t16 = *((char **)t15);
    t15 = (t0 + 7124U);
    t18 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t14, t9, t16, t15);
    t25 = (t0 + 2768U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t11 + 12U);
    t13 = *((unsigned int *)t27);
    t17 = (1U * t13);
    memcpy(t25, t18, t17);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 7172U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t10, t2, t1);
    t6 = (t0 + 2768U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4216);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7108U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t10, t2, t1, 1);
    t6 = (t0 + 2288U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t9 = (t10 + 12U);
    t13 = *((unsigned int *)t9);
    t17 = (1U * t13);
    memcpy(t6, t5, t17);
    goto LAB8;

}


extern void work_a_4041704977_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4041704977_3212880686_p_0};
	xsi_register_didat("work_a_4041704977_3212880686", "isim/IntMult_tl_isim_beh.exe.sim/work/a_4041704977_3212880686.didat");
	xsi_register_executes(pe);
}
