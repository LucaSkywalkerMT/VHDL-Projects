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
static const char *ng0 = "D:/UNI/2020.21/HDL/Projects/DoubleDabble/DoubleDabble.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3499444699_sub_3730328570_3536714472(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0664666322_3212880686_p_0(char *t0)
{
    char t7[16];
    char t17[16];
    char t18[16];
    char t27[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t3 = (t0 + 5716U);
    t5 = (t0 + 5789);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t3, t5, t7);
    if (t12 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 5716U);
    t4 = (t0 + 5817);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 3;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 5716U);
    t4 = (t0 + 5833);
    t6 = (t7 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 3;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t10 = (3 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t11;
    t2 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t7);
    if (t2 != 0)
        goto LAB25;

LAB26:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t9 = (t0 + 1192U);
    t13 = *((char **)t9);
    t9 = (t0 + 2088U);
    t14 = *((char **)t9);
    t11 = (19 - 7);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t9 = (t14 + t16);
    memcpy(t9, t13, 8U);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 5793);
    t4 = (t0 + 2088U);
    t5 = *((char **)t4);
    t11 = (19 - 19);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t4 = (t5 + t16);
    memcpy(t4, t1, 12U);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 5805);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB8;

LAB9:    t4 = (t0 + 3472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 5809);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB10;

LAB11:    t4 = (t0 + 3536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 5813);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB12;

LAB13:    t4 = (t0 + 3600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 5716U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t7, t3, t1, (unsigned char)3);
    t5 = (t0 + 1968U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t15 = (1U * t11);
    memcpy(t5, t4, t15);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB13;

LAB14:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 2088U);
    t9 = *((char **)t8);
    t11 = (19 - 18);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t8 = (t9 + t16);
    t14 = ((IEEE_P_2592010699) + 4024);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 18;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 18);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t13 = xsi_base_array_concat(t13, t17, t14, (char)97, t8, t18, (char)99, (unsigned char)2, (char)101);
    t20 = (t0 + 2088U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    t22 = (19U + 1U);
    memcpy(t20, t13, t22);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 5716U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t7, t3, t1, (unsigned char)3);
    t5 = (t0 + 1968U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t15 = (1U * t11);
    memcpy(t5, t4, t15);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 19);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t7 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 19;
    t5 = (t4 + 4U);
    *((int *)t5) = 16;
    t5 = (t4 + 8U);
    *((int *)t5) = -1;
    t10 = (16 - 19);
    t22 = (t10 * -1);
    t22 = (t22 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t22;
    t2 = ieee_p_3499444699_sub_3730328570_3536714472(IEEE_P_3499444699, t1, t7, 5);
    if (t2 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 15);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t7 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 15;
    t5 = (t4 + 4U);
    *((int *)t5) = 12;
    t5 = (t4 + 8U);
    *((int *)t5) = -1;
    t10 = (12 - 15);
    t22 = (t10 * -1);
    t22 = (t22 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t22;
    t2 = ieee_p_3499444699_sub_3730328570_3536714472(IEEE_P_3499444699, t1, t7, 5);
    if (t2 != 0)
        goto LAB19;

LAB21:
LAB20:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 11);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t7 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 11;
    t5 = (t4 + 4U);
    *((int *)t5) = 8;
    t5 = (t4 + 8U);
    *((int *)t5) = -1;
    t10 = (8 - 11);
    t22 = (t10 * -1);
    t22 = (t22 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t22;
    t2 = ieee_p_3499444699_sub_3730328570_3536714472(IEEE_P_3499444699, t1, t7, 5);
    if (t2 != 0)
        goto LAB22;

LAB24:
LAB23:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 19);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 15);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 11);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB6;

LAB16:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 2088U);
    t6 = *((char **)t5);
    t22 = (19 - 19);
    t24 = (t22 * 1U);
    t25 = (0 + t24);
    t5 = (t6 + t25);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 19;
    t9 = (t8 + 4U);
    *((int *)t9) = 16;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t21 = (16 - 19);
    t26 = (t21 * -1);
    t26 = (t26 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t26;
    t9 = (t0 + 5821);
    t14 = (t27 + 0U);
    t19 = (t14 + 0U);
    *((int *)t19) = 0;
    t19 = (t14 + 4U);
    *((int *)t19) = 3;
    t19 = (t14 + 8U);
    *((int *)t19) = 1;
    t28 = (3 - 0);
    t26 = (t28 * 1);
    t26 = (t26 + 1);
    t19 = (t14 + 12U);
    *((unsigned int *)t19) = t26;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t5, t18, t9, t27);
    t20 = (t0 + 2088U);
    t23 = *((char **)t20);
    t26 = (19 - 19);
    t29 = (t26 * 1U);
    t30 = (0 + t29);
    t20 = (t23 + t30);
    t31 = (t17 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    memcpy(t20, t19, t33);
    goto LAB17;

LAB19:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 2088U);
    t6 = *((char **)t5);
    t22 = (19 - 15);
    t24 = (t22 * 1U);
    t25 = (0 + t24);
    t5 = (t6 + t25);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 15;
    t9 = (t8 + 4U);
    *((int *)t9) = 12;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t21 = (12 - 15);
    t26 = (t21 * -1);
    t26 = (t26 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t26;
    t9 = (t0 + 5825);
    t14 = (t27 + 0U);
    t19 = (t14 + 0U);
    *((int *)t19) = 0;
    t19 = (t14 + 4U);
    *((int *)t19) = 3;
    t19 = (t14 + 8U);
    *((int *)t19) = 1;
    t28 = (3 - 0);
    t26 = (t28 * 1);
    t26 = (t26 + 1);
    t19 = (t14 + 12U);
    *((unsigned int *)t19) = t26;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t5, t18, t9, t27);
    t20 = (t0 + 2088U);
    t23 = *((char **)t20);
    t26 = (19 - 15);
    t29 = (t26 * 1U);
    t30 = (0 + t29);
    t20 = (t23 + t30);
    t31 = (t17 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    memcpy(t20, t19, t33);
    goto LAB20;

LAB22:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 2088U);
    t6 = *((char **)t5);
    t22 = (19 - 11);
    t24 = (t22 * 1U);
    t25 = (0 + t24);
    t5 = (t6 + t25);
    t8 = (t18 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 11;
    t9 = (t8 + 4U);
    *((int *)t9) = 8;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t21 = (8 - 11);
    t26 = (t21 * -1);
    t26 = (t26 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t26;
    t9 = (t0 + 5829);
    t14 = (t27 + 0U);
    t19 = (t14 + 0U);
    *((int *)t19) = 0;
    t19 = (t14 + 4U);
    *((int *)t19) = 3;
    t19 = (t14 + 8U);
    *((int *)t19) = 1;
    t28 = (3 - 0);
    t26 = (t28 * 1);
    t26 = (t26 + 1);
    t19 = (t14 + 12U);
    *((unsigned int *)t19) = t26;
    t19 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t5, t18, t9, t27);
    t20 = (t0 + 2088U);
    t23 = *((char **)t20);
    t26 = (19 - 11);
    t29 = (t26 * 1U);
    t30 = (0 + t29);
    t20 = (t23 + t30);
    t31 = (t17 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    memcpy(t20, t19, t33);
    goto LAB23;

LAB25:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 2088U);
    t9 = *((char **)t8);
    t11 = (19 - 18);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t8 = (t9 + t16);
    t14 = ((IEEE_P_2592010699) + 4024);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 18;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 18);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t13 = xsi_base_array_concat(t13, t17, t14, (char)97, t8, t18, (char)99, (unsigned char)2, (char)101);
    t20 = (t0 + 2088U);
    t23 = *((char **)t20);
    t20 = (t23 + 0);
    t22 = (19U + 1U);
    memcpy(t20, t13, t22);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t1 = (t0 + 5716U);
    t4 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t7, t3, t1, (unsigned char)3);
    t5 = (t0 + 1968U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t8 = (t7 + 12U);
    t11 = *((unsigned int *)t8);
    t15 = (1U * t11);
    memcpy(t5, t4, t15);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 19);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 15);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2088U);
    t3 = *((char **)t1);
    t11 = (19 - 11);
    t15 = (t11 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 3600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_delta(t4, 0U, 4U, 0LL);
    goto LAB6;

}


extern void work_a_0664666322_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0664666322_3212880686_p_0};
	xsi_register_didat("work_a_0664666322_3212880686", "isim/DoubleDabble_tl_isim_beh.exe.sim/work/a_0664666322_3212880686.didat");
	xsi_register_executes(pe);
}
