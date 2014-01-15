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

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3552);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
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

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 992U);
    t4 = xsi_signal_has_event(t2);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    xsi_set_current_line(117, ng0);

LAB15:    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);
    t5 = (t0 + 2312U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4896);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t12 = *((char **)t9);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 4960);
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

LAB10:    xsi_set_current_line(109, ng0);
    t5 = (t0 + 4896);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4960);
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
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    int t15;
    int t16;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8290);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(137, ng0);

LAB16:    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t9 = (t0 + 8298);
    xsi_report(t9, 17U, (unsigned char)3);
    goto LAB13;

LAB14:    t3 = (t0 + 4576);
    *((int *)t3) = 0;
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8315);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t7 = (100 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB15:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB14;
    else
        goto LAB16;

LAB17:    goto LAB15;

LAB18:    t9 = (t0 + 8323);
    xsi_report(t9, 17U, (unsigned char)3);
    goto LAB19;

LAB20:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 8340);
    *((int *)t2) = 1;
    t3 = (t0 + 8344);
    *((int *)t3) = 50000000;
    t10 = 1;
    t15 = 50000000;

LAB24:    if (t10 <= t15)
        goto LAB25;

LAB27:    xsi_set_current_line(159, ng0);
    t7 = (45 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB25:    xsi_set_current_line(155, ng0);

LAB30:    t4 = (t0 + 4592);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB26:    t2 = (t0 + 8340);
    t10 = *((int *)t2);
    t3 = (t0 + 8344);
    t15 = *((int *)t3);
    if (t10 == t15)
        goto LAB27;

LAB32:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 8340);
    *((int *)t4) = t10;
    goto LAB24;

LAB28:    t5 = (t0 + 4592);
    *((int *)t5) = 0;
    goto LAB26;

LAB29:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB33:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8348);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB37;

LAB38:    xsi_set_current_line(165, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB41:    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    t9 = (t0 + 8356);
    xsi_report(t9, 23U, (unsigned char)3);
    goto LAB38;

LAB39:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8379);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB43;

LAB44:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 5088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB47:    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB40:    goto LAB39;

LAB42:    goto LAB40;

LAB43:    t9 = (t0 + 8387);
    xsi_report(t9, 24U, (unsigned char)3);
    goto LAB44;

LAB45:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 5088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB46:    goto LAB45;

LAB48:    goto LAB46;

LAB49:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 5152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);

LAB55:    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    t3 = (t0 + 4608);
    *((int *)t3) = 0;
    xsi_set_current_line(185, ng0);
    t7 = (1 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB54:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB53;
    else
        goto LAB55;

LAB56:    goto LAB54;

LAB57:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);

LAB63:    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

LAB61:    t3 = (t0 + 4624);
    *((int *)t3) = 0;
    xsi_set_current_line(190, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB62:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB61;
    else
        goto LAB63;

LAB64:    goto LAB62;

LAB65:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8411);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB69;

LAB70:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8434);
    *((int *)t2) = 1;
    t3 = (t0 + 8438);
    *((int *)t3) = 500000;
    t10 = 1;
    t15 = 500000;

LAB71:    if (t10 <= t15)
        goto LAB72;

LAB74:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8442);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 8465);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(207, ng0);

LAB84:    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB85;
    goto LAB1;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB69:    t9 = (t0 + 8419);
    xsi_report(t9, 15U, (unsigned char)3);
    goto LAB70;

LAB72:    xsi_set_current_line(197, ng0);

LAB77:    t4 = (t0 + 4640);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB73:    t2 = (t0 + 8434);
    t10 = *((int *)t2);
    t3 = (t0 + 8438);
    t15 = *((int *)t3);
    if (t10 == t15)
        goto LAB74;

LAB79:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 8434);
    *((int *)t4) = t10;
    goto LAB71;

LAB75:    t5 = (t0 + 4640);
    *((int *)t5) = 0;
    goto LAB73;

LAB76:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB75;
    else
        goto LAB77;

LAB78:    goto LAB76;

LAB80:    t9 = (t0 + 8450);
    xsi_report(t9, 15U, (unsigned char)3);
    goto LAB81;

LAB82:    t3 = (t0 + 4656);
    *((int *)t3) = 0;
    xsi_set_current_line(208, ng0);
    t7 = (1 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB83:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB82;
    else
        goto LAB84;

LAB85:    goto LAB83;

LAB86:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(212, ng0);

LAB92:    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB93;
    goto LAB1;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    t3 = (t0 + 4672);
    *((int *)t3) = 0;
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8469);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB94;

LAB95:    xsi_set_current_line(218, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB91:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB90;
    else
        goto LAB92;

LAB93:    goto LAB91;

LAB94:    t9 = (t0 + 8477);
    xsi_report(t9, 15U, (unsigned char)3);
    goto LAB95;

LAB96:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8492);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB100;

LAB101:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 8515);
    t4 = (t0 + 5280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(227, ng0);

LAB104:    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    t9 = (t0 + 8500);
    xsi_report(t9, 15U, (unsigned char)3);
    goto LAB101;

LAB102:    t3 = (t0 + 4688);
    *((int *)t3) = 0;
    xsi_set_current_line(228, ng0);
    t7 = (1 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB108:    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB103:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB102;
    else
        goto LAB104;

LAB105:    goto LAB103;

LAB106:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(232, ng0);

LAB112:    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB113;
    goto LAB1;

LAB107:    goto LAB106;

LAB109:    goto LAB107;

LAB110:    t3 = (t0 + 4704);
    *((int *)t3) = 0;
    xsi_set_current_line(233, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB116:    *((char **)t1) = &&LAB117;
    goto LAB1;

LAB111:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB110;
    else
        goto LAB112;

LAB113:    goto LAB111;

LAB114:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8519);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB118;

LAB119:    xsi_set_current_line(240, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB122:    *((char **)t1) = &&LAB123;
    goto LAB1;

LAB115:    goto LAB114;

LAB117:    goto LAB115;

LAB118:    t9 = (t0 + 8527);
    xsi_report(t9, 17U, (unsigned char)3);
    goto LAB119;

LAB120:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8544);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB124;

LAB125:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(248, ng0);

LAB128:    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB129;
    goto LAB1;

LAB121:    goto LAB120;

LAB123:    goto LAB121;

LAB124:    t9 = (t0 + 8552);
    xsi_report(t9, 17U, (unsigned char)3);
    goto LAB125;

LAB126:    t3 = (t0 + 4720);
    *((int *)t3) = 0;
    xsi_set_current_line(249, ng0);
    t7 = (1 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB127:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB126;
    else
        goto LAB128;

LAB129:    goto LAB127;

LAB130:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 5216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(253, ng0);
    t7 = (40 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB136:    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

LAB134:    xsi_set_current_line(255, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8569);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB138;

LAB139:    xsi_set_current_line(259, ng0);
    t2 = (t0 + 8600);
    *((int *)t2) = 1;
    t3 = (t0 + 8604);
    *((int *)t3) = 500000;
    t10 = 1;
    t15 = 500000;

LAB140:    if (t10 <= t15)
        goto LAB141;

LAB143:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8608);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB149;

LAB150:    xsi_set_current_line(267, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 5152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(270, ng0);
    t7 = (180 * 1000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB153:    *((char **)t1) = &&LAB154;
    goto LAB1;

LAB135:    goto LAB134;

LAB137:    goto LAB135;

LAB138:    t9 = (t0 + 8577);
    xsi_report(t9, 23U, (unsigned char)3);
    goto LAB139;

LAB141:    xsi_set_current_line(260, ng0);

LAB146:    t4 = (t0 + 4736);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB142:    t2 = (t0 + 8600);
    t10 = *((int *)t2);
    t3 = (t0 + 8604);
    t15 = *((int *)t3);
    if (t10 == t15)
        goto LAB143;

LAB148:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 8600);
    *((int *)t4) = t10;
    goto LAB140;

LAB144:    t5 = (t0 + 4736);
    *((int *)t5) = 0;
    goto LAB142;

LAB145:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB144;
    else
        goto LAB146;

LAB147:    goto LAB145;

LAB149:    t9 = (t0 + 8616);
    xsi_report(t9, 23U, (unsigned char)3);
    goto LAB150;

LAB151:    xsi_set_current_line(272, ng0);
    t2 = (t0 + 5024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 8639);
    *((int *)t2) = 1;
    t3 = (t0 + 8643);
    *((int *)t3) = 50000000;
    t10 = 1;
    t15 = 50000000;

LAB155:    if (t10 <= t15)
        goto LAB156;

LAB158:    xsi_set_current_line(278, ng0);
    t7 = (45 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB166:    *((char **)t1) = &&LAB167;
    goto LAB1;

LAB152:    goto LAB151;

LAB154:    goto LAB152;

LAB156:    xsi_set_current_line(275, ng0);

LAB161:    t4 = (t0 + 4752);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB162;
    goto LAB1;

LAB157:    t2 = (t0 + 8639);
    t10 = *((int *)t2);
    t3 = (t0 + 8643);
    t15 = *((int *)t3);
    if (t10 == t15)
        goto LAB158;

LAB163:    t16 = (t10 + 1);
    t10 = t16;
    t4 = (t0 + 8639);
    *((int *)t4) = t10;
    goto LAB155;

LAB159:    t5 = (t0 + 4752);
    *((int *)t5) = 0;
    goto LAB157;

LAB160:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 1)
        goto LAB159;
    else
        goto LAB161;

LAB162:    goto LAB160;

LAB164:    xsi_set_current_line(280, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8647);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB168;

LAB169:    xsi_set_current_line(284, ng0);
    t7 = (5 * 1000000000LL);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t7);

LAB172:    *((char **)t1) = &&LAB173;
    goto LAB1;

LAB165:    goto LAB164;

LAB167:    goto LAB165;

LAB168:    t9 = (t0 + 8655);
    xsi_report(t9, 23U, (unsigned char)3);
    goto LAB169;

LAB170:    xsi_set_current_line(286, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8216U);
    t4 = (t0 + 8678);
    t6 = (t8 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 7;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t8);
    if (t12 == 0)
        goto LAB174;

LAB175:    xsi_set_current_line(292, ng0);
    if ((unsigned char)0 == 0)
        goto LAB176;

LAB177:    goto LAB2;

LAB171:    goto LAB170;

LAB173:    goto LAB171;

LAB174:    t9 = (t0 + 8686);
    xsi_report(t9, 17U, (unsigned char)3);
    goto LAB175;

LAB176:    t2 = (t0 + 8703);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB177;

}


extern void work_a_4003989209_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4003989209_2372691052_p_0,(void *)work_a_4003989209_2372691052_p_1,(void *)work_a_4003989209_2372691052_p_2};
	xsi_register_didat("work_a_4003989209_2372691052", "isim/Top_HexCounter_tb_isim_beh.exe.sim/work/a_4003989209_2372691052.didat");
	xsi_register_executes(pe);
}
