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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/Prescaler.vhd";



static void work_a_2990904040_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = xsi_signal_has_event(t1);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3712);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3504);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3584);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 2208U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 1);
    t4 = (t9 < t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3584);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB11:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t13 = (t12 + 1);
    t2 = (t0 + 3584);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 3648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

}


extern void work_a_2990904040_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2990904040_3212880686_p_0};
	xsi_register_didat("work_a_2990904040_3212880686", "isim/Prescaler_tb_isim_beh.exe.sim/work/a_2990904040_3212880686.didat");
	xsi_register_executes(pe);
}
