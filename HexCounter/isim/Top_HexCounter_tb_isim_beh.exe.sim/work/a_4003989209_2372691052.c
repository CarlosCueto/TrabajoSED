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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/Top_HexCounter_tb.vhd";
extern char *IEEE_P_3620187407;



static void work_a_4003989209_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 4336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3232);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4003989209_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 3672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(108, ng0);

LAB15:    t2 = (t0 + 4240);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 1992U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4464);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);

LAB11:    goto LAB5;

LAB7:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t3 = t8;
    goto LAB9;

LAB10:    xsi_set_current_line(100, ng0);
    t5 = (t0 + 4400);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4464);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    t6 = (t0 + 4240);
    *((int *)t6) = 0;
    goto LAB2;

LAB14:    t5 = (t0 + 992U);
    t3 = xsi_signal_has_event(t5);
    if (t3 == 1)
        goto LAB13;
    else
        goto LAB15;

LAB16:    goto LAB14;

}

static void work_a_4003989209_2372691052_p_2(char *t0)
{
    char t9[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    int t20;
    unsigned char t21;
    int t23;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 4528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(152, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t7 = (60 * 1000LL);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7176U);
    t4 = (t0 + 7250);
    t6 = (t9 + 0U);
    t10 = (t6 + 0U);
    *((int *)t10) = 0;
    t10 = (t6 + 4U);
    *((int *)t10) = 7;
    t10 = (t6 + 8U);
    *((int *)t10) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t6 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t9);
    if (t13 == 1)
        goto LAB14;

LAB15:    t8 = (unsigned char)0;

LAB16:    if (t8 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(164, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, t7);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t19 = (t0 + 7266);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB13;

LAB14:    t10 = (t0 + 1832U);
    t14 = *((char **)t10);
    t10 = (t0 + 7192U);
    t15 = (t0 + 7258);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 7;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (7 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t12;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t10, t15, t17);
    t8 = t21;
    goto LAB16;

LAB17:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t7 = (110 * 1000LL);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, t7);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(172, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3728);
    xsi_process_wait(t2, t7);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 4656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7283);
    *((int *)t2) = 0;
    t3 = (t0 + 7287);
    *((int *)t3) = 15;
    t11 = 0;
    t20 = 15;

LAB29:    if (t11 <= t20)
        goto LAB30;

LAB32:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7176U);
    t4 = (t0 + 7291);
    t6 = (t9 + 0U);
    t10 = (t6 + 0U);
    *((int *)t10) = 0;
    t10 = (t6 + 4U);
    *((int *)t10) = 7;
    t10 = (t6 + 8U);
    *((int *)t10) = 1;
    t11 = (7 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t6 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t9);
    if (t13 == 1)
        goto LAB40;

LAB41:    t8 = (unsigned char)0;

LAB42:    if (t8 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(187, ng0);
    if ((unsigned char)0 == 0)
        goto LAB43;

LAB44:    goto LAB2;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB30:    xsi_set_current_line(179, ng0);

LAB35:    t4 = (t0 + 4256);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB31:    t2 = (t0 + 7283);
    t11 = *((int *)t2);
    t3 = (t0 + 7287);
    t20 = *((int *)t3);
    if (t11 == t20)
        goto LAB32;

LAB37:    t23 = (t11 + 1);
    t11 = t23;
    t4 = (t0 + 7283);
    *((int *)t4) = t11;
    goto LAB29;

LAB33:    t5 = (t0 + 4256);
    *((int *)t5) = 0;
    goto LAB31;

LAB34:    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    if (t8 == 1)
        goto LAB33;
    else
        goto LAB35;

LAB36:    goto LAB34;

LAB38:    t19 = (t0 + 7307);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB39;

LAB40:    t10 = (t0 + 1832U);
    t14 = *((char **)t10);
    t10 = (t0 + 7192U);
    t15 = (t0 + 7299);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 7;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (7 - 0);
    t12 = (t20 * 1);
    t12 = (t12 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t12;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t10, t15, t17);
    t8 = t21;
    goto LAB42;

LAB43:    t2 = (t0 + 7324);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB44;

}


extern void work_a_4003989209_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4003989209_2372691052_p_0,(void *)work_a_4003989209_2372691052_p_1,(void *)work_a_4003989209_2372691052_p_2};
	xsi_register_didat("work_a_4003989209_2372691052", "isim/Top_HexCounter_tb_isim_beh.exe.sim/work/a_4003989209_2372691052.didat");
	xsi_register_executes(pe);
}
