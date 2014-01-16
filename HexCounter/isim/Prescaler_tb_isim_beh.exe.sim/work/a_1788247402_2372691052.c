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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/Prescaler_tb.vhd";



static void work_a_1788247402_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3960);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2792);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1788247402_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    int64 t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 4024);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (t0 + 1648U);
    t7 = *((char **)t6);
    t8 = *((int64 *)t7);
    t9 = (0.20000000000000001 * t8);
    t6 = (t0 + 4024);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t6, 0U, 1, t9);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1788247402_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    int64 t7;
    int64 t8;
    int64 t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);

LAB6:    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 3800);
    *((int *)t3) = 0;
    xsi_set_current_line(89, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3288);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(95, ng0);

LAB16:    t2 = (t0 + 3816);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 6320);
    xsi_report(t2, 16U, (unsigned char)3);
    goto LAB13;

LAB14:    t3 = (t0 + 3816);
    *((int *)t3) = 0;
    xsi_set_current_line(97, ng0);

LAB20:    t2 = (t0 + 3832);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB15:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB14;
    else
        goto LAB16;

LAB17:    goto LAB15;

LAB18:    t3 = (t0 + 3832);
    *((int *)t3) = 0;
    xsi_set_current_line(99, ng0);
    t7 = xsi_get_sim_current_time();
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int64 *)t2) = t7;
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(105, ng0);

LAB26:    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB19:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB18;
    else
        goto LAB20;

LAB21:    goto LAB19;

LAB22:    t2 = (t0 + 6336);
    xsi_report(t2, 16U, (unsigned char)3);
    goto LAB23;

LAB24:    t3 = (t0 + 3848);
    *((int *)t3) = 0;
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(111, ng0);

LAB32:    t2 = (t0 + 3864);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t2 = (t0 + 6352);
    xsi_report(t2, 26U, (unsigned char)3);
    goto LAB29;

LAB30:    t3 = (t0 + 3864);
    *((int *)t3) = 0;
    xsi_set_current_line(114, ng0);
    t7 = xsi_get_sim_current_time();
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t8 = *((int64 *)t3);
    t9 = (t7 - t8);
    t2 = (t0 + 1768U);
    t4 = *((char **)t2);
    t10 = *((int64 *)t4);
    t11 = (t10 * 0.50000000000000000);
    t5 = (t9 == t11);
    if (t5 == 0)
        goto LAB34;

LAB35:    xsi_set_current_line(118, ng0);
    t7 = xsi_get_sim_current_time();
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int64 *)t2) = t7;
    xsi_set_current_line(121, ng0);

LAB38:    t2 = (t0 + 3880);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB31:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB30;
    else
        goto LAB32;

LAB33:    goto LAB31;

LAB34:    t2 = (t0 + 6378);
    xsi_report(t2, 30U, (unsigned char)3);
    goto LAB35;

LAB36:    t3 = (t0 + 3880);
    *((int *)t3) = 0;
    xsi_set_current_line(123, ng0);
    t7 = xsi_get_sim_current_time();
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t8 = *((int64 *)t3);
    t9 = (t7 - t8);
    t2 = (t0 + 1768U);
    t4 = *((char **)t2);
    t10 = *((int64 *)t4);
    t11 = (t10 * 0.50000000000000000);
    t5 = (t9 == t11);
    if (t5 == 0)
        goto LAB40;

LAB41:    xsi_set_current_line(127, ng0);
    if ((unsigned char)0 == 0)
        goto LAB42;

LAB43:    goto LAB2;

LAB37:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t2 = (t0 + 6408);
    xsi_report(t2, 31U, (unsigned char)3);
    goto LAB41;

LAB42:    t2 = (t0 + 6439);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB43;

}


extern void work_a_1788247402_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1788247402_2372691052_p_0,(void *)work_a_1788247402_2372691052_p_1,(void *)work_a_1788247402_2372691052_p_2};
	xsi_register_didat("work_a_1788247402_2372691052", "isim/Prescaler_tb_isim_beh.exe.sim/work/a_1788247402_2372691052.didat");
	xsi_register_executes(pe);
}
