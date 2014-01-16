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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/Demux_tb.vhd";



static void work_a_4195809525_2372691052_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4989);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4993);
    t11 = 1;
    if (4U == 4U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t9 = (5 * 1000LL);
    t2 = (t0 + 2472);
    xsi_process_wait(t2, t9);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t18 = (t0 + 5001);
    xsi_report(t18, 19U, (unsigned char)3);
    goto LAB9;

LAB10:    t7 = (t0 + 1512U);
    t8 = *((char **)t7);
    t7 = (t0 + 4997);
    t14 = 1;
    if (4U == 4U)
        goto LAB19;

LAB20:    t14 = 0;

LAB21:    t10 = t14;
    goto LAB12;

LAB13:    t12 = 0;

LAB16:    if (t12 < 4U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    t15 = 0;

LAB22:    if (t15 < 4U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB20;

LAB24:    t15 = (t15 + 1);
    goto LAB22;

LAB25:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5020);
    t11 = 1;
    if (4U == 4U)
        goto LAB34;

LAB35:    t11 = 0;

LAB36:    if (t11 == 1)
        goto LAB31;

LAB32:    t10 = (unsigned char)0;

LAB33:    if (t10 == 0)
        goto LAB29;

LAB30:    xsi_set_current_line(92, ng0);
    if ((unsigned char)0 == 0)
        goto LAB46;

LAB47:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    t18 = (t0 + 5028);
    xsi_report(t18, 19U, (unsigned char)3);
    goto LAB30;

LAB31:    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 5024);
    t14 = 1;
    if (4U == 4U)
        goto LAB40;

LAB41:    t14 = 0;

LAB42:    t10 = t14;
    goto LAB33;

LAB34:    t12 = 0;

LAB37:    if (t12 < 4U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB35;

LAB39:    t12 = (t12 + 1);
    goto LAB37;

LAB40:    t15 = 0;

LAB43:    if (t15 < 4U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t16 = (t8 + t15);
    t17 = (t7 + t15);
    if (*((unsigned char *)t16) != *((unsigned char *)t17))
        goto LAB41;

LAB45:    t15 = (t15 + 1);
    goto LAB43;

LAB46:    t2 = (t0 + 5047);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB47;

}


extern void work_a_4195809525_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4195809525_2372691052_p_0};
	xsi_register_didat("work_a_4195809525_2372691052", "isim/Demux_tb_isim_beh.exe.sim/work/a_4195809525_2372691052.didat");
	xsi_register_executes(pe);
}
