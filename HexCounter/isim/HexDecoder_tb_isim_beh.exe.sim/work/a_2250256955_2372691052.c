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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/HexDecoder_tb.vhd";



static void work_a_2250256955_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    int64 t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 2624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 2;
    t3 = (t0 + 5724);
    *((int *)t3) = 17;
    t4 = 2;
    t5 = 17;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(120, ng0);
    if ((unsigned char)0 == 0)
        goto LAB21;

LAB22:    goto LAB2;

LAB5:    xsi_set_current_line(109, ng0);
    t6 = (t0 + 1648U);
    t7 = *((char **)t6);
    t6 = (t0 + 5720);
    t8 = *((int *)t6);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 17, 1, *((int *)t6));
    t11 = (16U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 1U);
    t14 = (t7 + t13);
    t15 = (t0 + 3008);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t14, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1648U);
    t3 = *((char **)t2);
    t2 = (t0 + 5720);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 17, 1, *((int *)t2));
    t11 = (16U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 0U);
    t6 = (t3 + t13);
    t20 = *((unsigned char *)t6);
    t7 = (t0 + 3072);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t20;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(112, ng0);
    t21 = (20 * 1000LL);
    t2 = (t0 + 2432);
    xsi_process_wait(t2, t21);

LAB10:    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB6:    t2 = (t0 + 5720);
    t4 = *((int *)t2);
    t3 = (t0 + 5724);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB20:    t8 = (t4 + 1);
    t4 = t8;
    t6 = (t0 + 5720);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 1648U);
    t6 = *((char **)t2);
    t2 = (t0 + 5720);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t10 = (t9 * 1);
    xsi_vhdl_check_range_of_index(1, 17, 1, *((int *)t2));
    t11 = (16U * t10);
    t12 = (0 + t11);
    t13 = (t12 + 5U);
    t7 = (t6 + t13);
    t20 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t20 = 0;

LAB16:    if (t20 == 0)
        goto LAB12;

LAB13:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t16 = (t0 + 5728);
    xsi_report(t16, 11U, (unsigned char)3);
    goto LAB13;

LAB14:    t22 = 0;

LAB17:    if (t22 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t3 + t22);
    t15 = (t7 + t22);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t22 = (t22 + 1);
    goto LAB17;

LAB21:    t2 = (t0 + 5739);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB22;

}


extern void work_a_2250256955_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2250256955_2372691052_p_0};
	xsi_register_didat("work_a_2250256955_2372691052", "isim/HexDecoder_tb_isim_beh.exe.sim/work/a_2250256955_2372691052.didat");
	xsi_register_executes(pe);
}
