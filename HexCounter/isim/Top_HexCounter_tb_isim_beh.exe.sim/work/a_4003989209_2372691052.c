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

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
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

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(114, ng0);

LAB15:    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t5 = (t0 + 2312U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4784);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4848);
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

LAB10:    xsi_set_current_line(106, ng0);
    t5 = (t0 + 4784);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4848);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

LAB13:    t6 = (t0 + 4560);
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

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);
    t7 = (60 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8138);
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

LAB13:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(135, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t19 = (t0 + 8154);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB13;

LAB14:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8146);
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

LAB17:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 8171);
    *((int *)t2) = 0;
    t3 = (t0 + 8175);
    *((int *)t3) = 15;
    t11 = 0;
    t20 = 15;

LAB21:    if (t11 <= t20)
        goto LAB22;

LAB24:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8179);
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
        goto LAB32;

LAB33:    t8 = (unsigned char)0;

LAB34:    if (t8 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(149, ng0);

LAB37:    t2 = (t0 + 4592);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB22:    xsi_set_current_line(141, ng0);

LAB27:    t4 = (t0 + 4576);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB23:    t2 = (t0 + 8171);
    t11 = *((int *)t2);
    t3 = (t0 + 8175);
    t20 = *((int *)t3);
    if (t11 == t20)
        goto LAB24;

LAB29:    t23 = (t11 + 1);
    t11 = t23;
    t4 = (t0 + 8171);
    *((int *)t4) = t11;
    goto LAB21;

LAB25:    t5 = (t0 + 4576);
    *((int *)t5) = 0;
    goto LAB23;

LAB26:    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    if (t8 == 1)
        goto LAB25;
    else
        goto LAB27;

LAB28:    goto LAB26;

LAB30:    t19 = (t0 + 8195);
    xsi_report(t19, 23U, (unsigned char)3);
    goto LAB31;

LAB32:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8187);
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
    goto LAB34;

LAB35:    t3 = (t0 + 4592);
    *((int *)t3) = 0;
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8218);
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
        goto LAB41;

LAB42:    t8 = (unsigned char)0;

LAB43:    if (t8 == 0)
        goto LAB39;

LAB40:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(158, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB36:    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    if (t8 == 1)
        goto LAB35;
    else
        goto LAB37;

LAB38:    goto LAB36;

LAB39:    t19 = (t0 + 8234);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB40;

LAB41:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8226);
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
    goto LAB43;

LAB44:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(161, ng0);
    t7 = (60 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8251);
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
        goto LAB54;

LAB55:    t8 = (unsigned char)0;

LAB56:    if (t8 == 0)
        goto LAB52;

LAB53:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    t19 = (t0 + 8267);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB53;

LAB54:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8259);
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
    goto LAB56;

LAB57:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(174, ng0);
    t7 = (110 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

LAB61:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

LAB65:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 8284);
    *((int *)t2) = 0;
    t3 = (t0 + 8288);
    *((int *)t3) = 15;
    t11 = 0;
    t20 = 15;

LAB69:    if (t11 <= t20)
        goto LAB70;

LAB72:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8292);
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
        goto LAB80;

LAB81:    t8 = (unsigned char)0;

LAB82:    if (t8 == 0)
        goto LAB78;

LAB79:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(200, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB85:    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB70:    xsi_set_current_line(185, ng0);

LAB75:    t4 = (t0 + 4608);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB71:    t2 = (t0 + 8284);
    t11 = *((int *)t2);
    t3 = (t0 + 8288);
    t20 = *((int *)t3);
    if (t11 == t20)
        goto LAB72;

LAB77:    t23 = (t11 + 1);
    t11 = t23;
    t4 = (t0 + 8284);
    *((int *)t4) = t11;
    goto LAB69;

LAB73:    t5 = (t0 + 4608);
    *((int *)t5) = 0;
    goto LAB71;

LAB74:    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    if (t8 == 1)
        goto LAB73;
    else
        goto LAB75;

LAB76:    goto LAB74;

LAB78:    t19 = (t0 + 8308);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB79;

LAB80:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8300);
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
    goto LAB82;

LAB83:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 4912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(203, ng0);
    t7 = (60 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB89:    *((char **)t1) = &&LAB90;
    goto LAB1;

LAB84:    goto LAB83;

LAB86:    goto LAB84;

LAB87:    xsi_set_current_line(205, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8325);
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
        goto LAB93;

LAB94:    t8 = (unsigned char)0;

LAB95:    if (t8 == 0)
        goto LAB91;

LAB92:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(213, ng0);
    t7 = (90 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB88:    goto LAB87;

LAB90:    goto LAB88;

LAB91:    t19 = (t0 + 8341);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB92;

LAB93:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8333);
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
    goto LAB95;

LAB96:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(217, ng0);
    t7 = (90 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(219, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8358);
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
        goto LAB106;

LAB107:    t8 = (unsigned char)0;

LAB108:    if (t8 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 8389);
    t4 = (t0 + 5168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(226, ng0);
    t7 = (90 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB111:    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t19 = (t0 + 8374);
    xsi_report(t19, 15U, (unsigned char)3);
    goto LAB105;

LAB106:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8366);
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
    goto LAB108;

LAB109:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t7 = (90 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB115:    *((char **)t1) = &&LAB116;
    goto LAB1;

LAB110:    goto LAB109;

LAB112:    goto LAB110;

LAB113:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8393);
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
        goto LAB119;

LAB120:    t8 = (unsigned char)0;

LAB121:    if (t8 == 0)
        goto LAB117;

LAB118:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 8424);
    t4 = (t0 + 5168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(239, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB124:    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB114:    goto LAB113;

LAB116:    goto LAB114;

LAB117:    t19 = (t0 + 8409);
    xsi_report(t19, 15U, (unsigned char)3);
    goto LAB118;

LAB119:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8401);
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
    goto LAB121;

LAB122:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(243, ng0);
    t7 = (90 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB128:    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB123:    goto LAB122;

LAB125:    goto LAB123;

LAB126:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8428);
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
        goto LAB132;

LAB133:    t8 = (unsigned char)0;

LAB134:    if (t8 == 0)
        goto LAB130;

LAB131:    xsi_set_current_line(250, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(252, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB137:    *((char **)t1) = &&LAB138;
    goto LAB1;

LAB127:    goto LAB126;

LAB129:    goto LAB127;

LAB130:    t19 = (t0 + 8444);
    xsi_report(t19, 16U, (unsigned char)3);
    goto LAB131;

LAB132:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8436);
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
    goto LAB134;

LAB135:    xsi_set_current_line(254, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8460);
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
        goto LAB141;

LAB142:    t8 = (unsigned char)0;

LAB143:    if (t8 == 0)
        goto LAB139;

LAB140:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 5040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(265, ng0);
    t7 = (120 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB146:    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB136:    goto LAB135;

LAB138:    goto LAB136;

LAB139:    t19 = (t0 + 8476);
    xsi_report(t19, 23U, (unsigned char)3);
    goto LAB140;

LAB141:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8468);
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
    goto LAB143;

LAB144:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 8499);
    *((int *)t2) = 0;
    t3 = (t0 + 8503);
    *((int *)t3) = 10;
    t11 = 0;
    t20 = 10;

LAB148:    if (t11 <= t20)
        goto LAB149;

LAB151:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8507);
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
        goto LAB159;

LAB160:    t8 = (unsigned char)0;

LAB161:    if (t8 == 0)
        goto LAB157;

LAB158:    xsi_set_current_line(279, ng0);

LAB164:    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB165;
    goto LAB1;

LAB145:    goto LAB144;

LAB147:    goto LAB145;

LAB149:    xsi_set_current_line(271, ng0);

LAB154:    t4 = (t0 + 4624);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB155;
    goto LAB1;

LAB150:    t2 = (t0 + 8499);
    t11 = *((int *)t2);
    t3 = (t0 + 8503);
    t20 = *((int *)t3);
    if (t11 == t20)
        goto LAB151;

LAB156:    t23 = (t11 + 1);
    t11 = t23;
    t4 = (t0 + 8499);
    *((int *)t4) = t11;
    goto LAB148;

LAB152:    t5 = (t0 + 4624);
    *((int *)t5) = 0;
    goto LAB150;

LAB153:    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    if (t8 == 1)
        goto LAB152;
    else
        goto LAB154;

LAB155:    goto LAB153;

LAB157:    t19 = (t0 + 8523);
    xsi_report(t19, 23U, (unsigned char)3);
    goto LAB158;

LAB159:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8515);
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
    goto LAB161;

LAB162:    t3 = (t0 + 4640);
    *((int *)t3) = 0;
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8056U);
    t4 = (t0 + 8546);
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
        goto LAB168;

LAB169:    t8 = (unsigned char)0;

LAB170:    if (t8 == 0)
        goto LAB166;

LAB167:    xsi_set_current_line(285, ng0);
    if ((unsigned char)0 == 0)
        goto LAB171;

LAB172:    goto LAB2;

LAB163:    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    if (t8 == 1)
        goto LAB162;
    else
        goto LAB164;

LAB165:    goto LAB163;

LAB166:    t19 = (t0 + 8562);
    xsi_report(t19, 17U, (unsigned char)3);
    goto LAB167;

LAB168:    t10 = (t0 + 2152U);
    t14 = *((char **)t10);
    t10 = (t0 + 8072U);
    t15 = (t0 + 8554);
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
    goto LAB170;

LAB171:    t2 = (t0 + 8579);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB172;

}


extern void work_a_4003989209_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4003989209_2372691052_p_0,(void *)work_a_4003989209_2372691052_p_1,(void *)work_a_4003989209_2372691052_p_2};
	xsi_register_didat("work_a_4003989209_2372691052", "isim/Top_HexCounter_tb_isim_beh.exe.sim/work/a_4003989209_2372691052.didat");
	xsi_register_executes(pe);
}
