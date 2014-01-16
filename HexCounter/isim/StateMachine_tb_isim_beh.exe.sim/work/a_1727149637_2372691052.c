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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/StateMachine_tb.vhd";



static void work_a_1727149637_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4272);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1727149637_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int64 t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (t0 + 3248U);
    t8 = *((char **)t7);
    t9 = *((int64 *)t8);
    t10 = (0.20000000000000001 * t9);
    t7 = (t0 + 5336);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t10);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);

LAB6:    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 5032);
    *((int *)t3) = 0;
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 0)
        goto LAB10;

LAB11:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 9626);
    *((int *)t2) = 1;
    t3 = (t0 + 9630);
    *((int *)t3) = 10;
    t17 = 1;
    t18 = 10;

LAB12:    if (t17 <= t18)
        goto LAB13;

LAB15:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (t0 + 3248U);
    t8 = *((char **)t7);
    t9 = *((int64 *)t8);
    t10 = (0.20000000000000001 * t9);
    t7 = (t0 + 5336);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t10);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 9697);
    *((int *)t2) = 1;
    t3 = (t0 + 9701);
    *((int *)t3) = 6;
    t17 = 1;
    t18 = 6;

LAB73:    if (t17 <= t18)
        goto LAB74;

LAB76:    xsi_set_current_line(270, ng0);
    if ((unsigned char)0 == 0)
        goto LAB104;

LAB105:    goto LAB2;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 9568);
    xsi_report(t2, 28U, (unsigned char)3);
    goto LAB9;

LAB10:    t2 = (t0 + 9596);
    xsi_report(t2, 30U, (unsigned char)3);
    goto LAB11;

LAB13:    xsi_set_current_line(186, ng0);
    t4 = (t0 + 3368U);
    t5 = *((char **)t4);
    t4 = (t0 + 9626);
    t19 = *((int *)t4);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 0U);
    t6 = (t5 + t24);
    t15 = *((unsigned char *)t6);
    t7 = (t0 + 5336);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t15;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 1U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 2U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5400);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 3U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 4U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 5U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(193, ng0);

LAB18:    t2 = (t0 + 5048);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 9626);
    t17 = *((int *)t2);
    t3 = (t0 + 9630);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB15;

LAB72:    t19 = (t17 + 1);
    t17 = t19;
    t4 = (t0 + 9626);
    *((int *)t4) = t17;
    goto LAB12;

LAB16:    t3 = (t0 + 5048);
    *((int *)t3) = 0;
    xsi_set_current_line(194, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 5336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5464);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 5400);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3368U);
    t4 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 8U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3368U);
    t4 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 6U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3368U);
    t4 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 7U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(213, ng0);

LAB32:    t2 = (t0 + 5064);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t6 = (t0 + 9634);
    xsi_report(t6, 23U, (unsigned char)3);
    goto LAB25;

LAB26:    t6 = (t0 + 9657);
    xsi_report(t6, 20U, (unsigned char)3);
    goto LAB27;

LAB28:    t6 = (t0 + 9677);
    xsi_report(t6, 20U, (unsigned char)3);
    goto LAB29;

LAB30:    t3 = (t0 + 5064);
    *((int *)t3) = 0;
    xsi_set_current_line(214, ng0);

LAB36:    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB30;
    else
        goto LAB32;

LAB33:    goto LAB31;

LAB34:    t3 = (t0 + 5080);
    *((int *)t3) = 0;
    xsi_set_current_line(215, ng0);

LAB40:    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB35:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB34;
    else
        goto LAB36;

LAB37:    goto LAB35;

LAB38:    t3 = (t0 + 5096);
    *((int *)t3) = 0;
    xsi_set_current_line(216, ng0);

LAB44:    t2 = (t0 + 5112);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB38;
    else
        goto LAB40;

LAB41:    goto LAB39;

LAB42:    t3 = (t0 + 5112);
    *((int *)t3) = 0;
    xsi_set_current_line(217, ng0);

LAB48:    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB42;
    else
        goto LAB44;

LAB45:    goto LAB43;

LAB46:    t3 = (t0 + 5128);
    *((int *)t3) = 0;
    xsi_set_current_line(218, ng0);

LAB52:    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB46;
    else
        goto LAB48;

LAB49:    goto LAB47;

LAB50:    t3 = (t0 + 5144);
    *((int *)t3) = 0;
    xsi_set_current_line(219, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t9);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB50;
    else
        goto LAB52;

LAB53:    goto LAB51;

LAB54:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 3368U);
    t3 = *((char **)t2);
    t2 = (t0 + 9626);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (16U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 1U);
    t4 = (t3 + t24);
    t16 = *((unsigned char *)t4);
    t25 = (t16 == (unsigned char)3);
    if (t25 == 1)
        goto LAB61;

LAB62:    t15 = (unsigned char)0;

LAB63:    if (t15 != 0)
        goto LAB58;

LAB60:
LAB59:    xsi_set_current_line(225, ng0);

LAB66:    t2 = (t0 + 5160);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_set_current_line(222, ng0);
    t8 = (t0 + 5656);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB59;

LAB61:    t5 = (t0 + 3368U);
    t6 = *((char **)t5);
    t5 = (t0 + 9626);
    t26 = *((int *)t5);
    t27 = (t26 - 1);
    t28 = (t27 * 1);
    t29 = (16U * t28);
    t30 = (0 + t29);
    t31 = (t30 + 2U);
    t7 = (t6 + t31);
    t32 = *((unsigned char *)t7);
    t33 = (t32 == (unsigned char)2);
    t15 = t33;
    goto LAB63;

LAB64:    t3 = (t0 + 5160);
    *((int *)t3) = 0;
    xsi_set_current_line(226, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t9);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 5656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB74:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 3488U);
    t5 = *((char **)t4);
    t4 = (t0 + 9697);
    t19 = *((int *)t4);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 0U);
    t6 = (t5 + t24);
    t15 = *((unsigned char *)t6);
    t7 = (t0 + 5592);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t15;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(239, ng0);

LAB79:    t2 = (t0 + 5176);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB75:    t2 = (t0 + 9697);
    t17 = *((int *)t2);
    t3 = (t0 + 9701);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB76;

LAB103:    t19 = (t17 + 1);
    t17 = t19;
    t4 = (t0 + 9697);
    *((int *)t4) = t17;
    goto LAB73;

LAB77:    t3 = (t0 + 5176);
    *((int *)t3) = 0;
    xsi_set_current_line(240, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t9);

LAB83:    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB78:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB77;
    else
        goto LAB79;

LAB80:    goto LAB78;

LAB81:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 5592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t2 = (t0 + 9697);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 1U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB85;

LAB86:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t2 = (t0 + 9697);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 2U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB87;

LAB88:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t2 = (t0 + 9697);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 3U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB89;

LAB90:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t2 = (t0 + 9697);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 5U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB91;

LAB92:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 3488U);
    t4 = *((char **)t2);
    t2 = (t0 + 9697);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 4U);
    t5 = (t4 + t24);
    t16 = *((unsigned char *)t5);
    t25 = (t15 == t16);
    if (t25 == 0)
        goto LAB93;

LAB94:    xsi_set_current_line(264, ng0);

LAB97:    t2 = (t0 + 5192);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB98;
    goto LAB1;

LAB82:    goto LAB81;

LAB84:    goto LAB82;

LAB85:    t6 = (t0 + 9705);
    xsi_report(t6, 21U, (unsigned char)3);
    goto LAB86;

LAB87:    t6 = (t0 + 9726);
    xsi_report(t6, 17U, (unsigned char)3);
    goto LAB88;

LAB89:    t6 = (t0 + 9743);
    xsi_report(t6, 17U, (unsigned char)3);
    goto LAB90;

LAB91:    t6 = (t0 + 9760);
    xsi_report(t6, 23U, (unsigned char)3);
    goto LAB92;

LAB93:    t6 = (t0 + 9783);
    xsi_report(t6, 20U, (unsigned char)3);
    goto LAB94;

LAB95:    t3 = (t0 + 5192);
    *((int *)t3) = 0;
    xsi_set_current_line(265, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 4520);
    xsi_process_wait(t2, t9);

LAB101:    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB96:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB95;
    else
        goto LAB97;

LAB98:    goto LAB96;

LAB99:    goto LAB75;

LAB100:    goto LAB99;

LAB102:    goto LAB100;

LAB104:    t2 = (t0 + 9803);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB105;

}


extern void work_a_1727149637_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1727149637_2372691052_p_0,(void *)work_a_1727149637_2372691052_p_1};
	xsi_register_didat("work_a_1727149637_2372691052", "isim/StateMachine_tb_isim_beh.exe.sim/work/a_1727149637_2372691052.didat");
	xsi_register_executes(pe);
}
