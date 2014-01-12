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

LAB0:    t1 = (t0 + 3384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3192);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3192);
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

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (t0 + 2288U);
    t8 = *((char **)t7);
    t9 = *((int64 *)t8);
    t10 = (0.20000000000000001 * t9);
    t7 = (t0 + 4112);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t10);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);

LAB6:    t2 = (t0 + 3952);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 3952);
    *((int *)t3) = 0;
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 0)
        goto LAB10;

LAB11:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 7154);
    *((int *)t2) = 1;
    t3 = (t0 + 7158);
    *((int *)t3) = 10;
    t17 = 1;
    t18 = 10;

LAB12:    if (t17 <= t18)
        goto LAB13;

LAB15:    xsi_set_current_line(260, ng0);
    if ((unsigned char)0 == 0)
        goto LAB29;

LAB30:    goto LAB2;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 7096);
    xsi_report(t2, 28U, (unsigned char)3);
    goto LAB9;

LAB10:    t2 = (t0 + 7124);
    xsi_report(t2, 30U, (unsigned char)3);
    goto LAB11;

LAB13:    xsi_set_current_line(144, ng0);
    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t4 = (t0 + 7154);
    t19 = *((int *)t4);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 0U);
    t6 = (t5 + t24);
    t15 = *((unsigned char *)t6);
    t7 = (t0 + 4112);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t15;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 7154);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 1U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 4240);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 7154);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 2U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 4176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 7154);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t24 = (t23 + 3U);
    t4 = (t3 + t24);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 4304);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = t15;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(149, ng0);

LAB18:    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7154);
    t17 = *((int *)t2);
    t3 = (t0 + 7158);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB15;

LAB28:    t19 = (t17 + 1);
    t17 = t19;
    t4 = (t0 + 7154);
    *((int *)t4) = t17;
    goto LAB12;

LAB16:    t3 = (t0 + 3968);
    *((int *)t3) = 0;
    xsi_set_current_line(150, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 3440);
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

LAB20:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4240);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 4176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 4304);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t2 = (t0 + 7154);
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
        goto LAB24;

LAB25:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t15 = *((unsigned char *)t3);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t2 = (t0 + 7154);
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
        goto LAB26;

LAB27:    goto LAB14;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t6 = (t0 + 7162);
    xsi_report(t6, 22U, (unsigned char)3);
    goto LAB25;

LAB26:    t6 = (t0 + 7184);
    xsi_report(t6, 22U, (unsigned char)3);
    goto LAB27;

LAB29:    t2 = (t0 + 7206);
    xsi_report(t2, 2U, (unsigned char)3);
    goto LAB30;

}


extern void work_a_1727149637_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1727149637_2372691052_p_0,(void *)work_a_1727149637_2372691052_p_1};
	xsi_register_didat("work_a_1727149637_2372691052", "isim/StateMachine_tb_isim_beh.exe.sim/work/a_1727149637_2372691052.didat");
	xsi_register_executes(pe);
}
