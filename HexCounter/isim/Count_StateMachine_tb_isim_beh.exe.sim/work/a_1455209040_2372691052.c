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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/Count_StateMachine_tb.vhd";



static void work_a_1455209040_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2592);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1455209040_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    int t17;

LAB0:    t1 = (t0 + 3032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (2 * 1000LL);
    t8 = (t0 + 3576);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    xsi_set_current_line(89, ng0);

LAB6:    t2 = (t0 + 3352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 3352);
    *((int *)t3) = 0;
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);

LAB10:    t2 = (t0 + 3368);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 3368);
    *((int *)t3) = 0;
    xsi_set_current_line(94, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5816);
    *((int *)t2) = 1;
    t3 = (t0 + 5820);
    *((int *)t3) = 50000000;
    t15 = 1;
    t16 = 50000000;

LAB16:    if (t15 <= t16)
        goto LAB17;

LAB19:    xsi_set_current_line(102, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t7);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(99, ng0);

LAB22:    t4 = (t0 + 3384);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:    t2 = (t0 + 5816);
    t15 = *((int *)t2);
    t3 = (t0 + 5820);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB19;

LAB24:    t17 = (t15 + 1);
    t15 = t17;
    t4 = (t0 + 5816);
    *((int *)t4) = t15;
    goto LAB16;

LAB20:    t5 = (t0 + 3384);
    *((int *)t5) = 0;
    goto LAB18;

LAB21:    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 0)
        goto LAB29;

LAB30:    xsi_set_current_line(108, ng0);

LAB33:    t2 = (t0 + 3400);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    t2 = (t0 + 5824);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB30;

LAB31:    t3 = (t0 + 3400);
    *((int *)t3) = 0;
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB37:    t2 = (t0 + 3416);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB32:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB31;
    else
        goto LAB33;

LAB34:    goto LAB32;

LAB35:    t3 = (t0 + 3416);
    *((int *)t3) = 0;
    xsi_set_current_line(113, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t7);

LAB41:    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB36:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB35;
    else
        goto LAB37;

LAB38:    goto LAB36;

LAB39:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5841);
    *((int *)t2) = 1;
    t3 = (t0 + 5845);
    *((int *)t3) = 50000000;
    t15 = 1;
    t16 = 50000000;

LAB43:    if (t15 <= t16)
        goto LAB44;

LAB46:    xsi_set_current_line(121, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 2840);
    xsi_process_wait(t2, t7);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB40:    goto LAB39;

LAB42:    goto LAB40;

LAB44:    xsi_set_current_line(118, ng0);

LAB49:    t4 = (t0 + 3432);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB45:    t2 = (t0 + 5841);
    t15 = *((int *)t2);
    t3 = (t0 + 5845);
    t16 = *((int *)t3);
    if (t15 == t16)
        goto LAB46;

LAB51:    t17 = (t15 + 1);
    t15 = t17;
    t4 = (t0 + 5841);
    *((int *)t4) = t15;
    goto LAB43;

LAB47:    t5 = (t0 + 3432);
    *((int *)t5) = 0;
    goto LAB45;

LAB48:    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB47;
    else
        goto LAB49;

LAB50:    goto LAB48;

LAB52:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t13 = *((unsigned char *)t3);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(127, ng0);
    if ((unsigned char)0 == 0)
        goto LAB58;

LAB59:    goto LAB2;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t2 = (t0 + 5849);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB57;

LAB58:    t2 = (t0 + 5866);
    xsi_report(t2, 18U, (unsigned char)3);
    goto LAB59;

}


extern void work_a_1455209040_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1455209040_2372691052_p_0,(void *)work_a_1455209040_2372691052_p_1};
	xsi_register_didat("work_a_1455209040_2372691052", "isim/Count_StateMachine_tb_isim_beh.exe.sim/work/a_1455209040_2372691052.didat");
	xsi_register_executes(pe);
}
