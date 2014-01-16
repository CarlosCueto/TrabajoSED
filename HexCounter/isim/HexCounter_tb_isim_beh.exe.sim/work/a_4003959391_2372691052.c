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
static const char *ng0 = "/home/maxwell/GitHub/TrabajoSED/HexCounter/HexCounter_tb.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_4003959391_2372691052_p_0(char *t0)
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

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3192);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
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

static void work_a_4003959391_2372691052_p_1(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    int t18;
    unsigned int t19;
    int t20;

LAB0:    t1 = (t0 + 3632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 6616U);
    t4 = (t0 + 6701);
    t6 = (t10 + 0U);
    t11 = (t6 + 0U);
    *((int *)t11) = 0;
    t11 = (t6 + 4U);
    *((int *)t11) = 3;
    t11 = (t6 + 8U);
    *((int *)t11) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t6 + 12U);
    *((unsigned int *)t11) = t13;
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t10);
    if (t8 == 0)
        goto LAB10;

LAB11:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);

LAB14:    t2 = (t0 + 3952);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 6684);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB9;

LAB10:    t11 = (t0 + 6705);
    xsi_report(t11, 24U, (unsigned char)3);
    goto LAB11;

LAB12:    t3 = (t0 + 3952);
    *((int *)t3) = 0;
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t9 = *((unsigned char *)t3);
    t15 = (t9 == (unsigned char)2);
    if (t15 == 1)
        goto LAB18;

LAB19:    t8 = (unsigned char)0;

LAB20:    if (t8 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = xsi_get_transient_memory(4U);
    memset(t2, 0, 4U);
    t3 = t2;
    memset(t3, (unsigned char)2, 4U);
    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    memcpy(t4, t2, 4U);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6754);
    *((int *)t2) = 0;
    t3 = (t0 + 6758);
    *((int *)t3) = 14;
    t12 = 0;
    t18 = 14;

LAB21:    if (t12 <= t18)
        goto LAB22;

LAB24:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 0)
        goto LAB39;

LAB40:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 6830);
    *((int *)t2) = 0;
    t3 = (t0 + 6834);
    *((int *)t3) = 5;
    t12 = 0;
    t18 = 5;

LAB41:    if (t12 <= t18)
        goto LAB42;

LAB44:    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 6838);
    *((int *)t2) = 0;
    t3 = (t0 + 6842);
    *((int *)t3) = 9;
    t12 = 0;
    t18 = 9;

LAB54:    if (t12 <= t18)
        goto LAB55;

LAB57:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 6846);
    t4 = (t10 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 0;
    t5 = (t4 + 4U);
    *((int *)t5) = 3;
    t5 = (t4 + 8U);
    *((int *)t5) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t13;
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 6616U);
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t10, t6, t5);
    if (t8 == 0)
        goto LAB67;

LAB68:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB69;

LAB70:    xsi_set_current_line(179, ng0);
    if ((unsigned char)0 == 0)
        goto LAB71;

LAB72:    goto LAB2;

LAB13:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t8 = *((unsigned char *)t4);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t14 = (t0 + 6733);
    xsi_report(t14, 21U, (unsigned char)3);
    goto LAB17;

LAB18:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6616U);
    t5 = (t0 + 6729);
    t11 = (t10 + 0U);
    t14 = (t11 + 0U);
    *((int *)t14) = 0;
    t14 = (t11 + 4U);
    *((int *)t14) = 3;
    t14 = (t11 + 8U);
    *((int *)t14) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t14 = (t11 + 12U);
    *((unsigned int *)t14) = t13;
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t10);
    t8 = t16;
    goto LAB20;

LAB22:    xsi_set_current_line(128, ng0);

LAB27:    t4 = (t0 + 3968);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB23:    t2 = (t0 + 6754);
    t12 = *((int *)t2);
    t3 = (t0 + 6758);
    t18 = *((int *)t3);
    if (t12 == t18)
        goto LAB24;

LAB38:    t20 = (t12 + 1);
    t12 = t20;
    t4 = (t0 + 6754);
    *((int *)t4) = t12;
    goto LAB21;

LAB25:    t5 = (t0 + 3968);
    *((int *)t5) = 0;
    xsi_set_current_line(129, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t7);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB25;
    else
        goto LAB27;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 6632U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t10, t3, t2, 1);
    t5 = (t0 + 2408U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    t11 = (t10 + 12U);
    t13 = *((unsigned int *)t11);
    t19 = (1U * t13);
    memcpy(t5, t4, t19);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t2 = (t0 + 6632U);
    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t4 = (t0 + 6616U);
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t8 == 0)
        goto LAB33;

LAB34:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 6754);
    t20 = *((int *)t2);
    t8 = (t20 == 14);
    if (t8 != 0)
        goto LAB24;

LAB35:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 0)
        goto LAB36;

LAB37:    goto LAB23;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    t6 = (t0 + 6762);
    xsi_report(t6, 17U, (unsigned char)3);
    goto LAB34;

LAB36:    t2 = (t0 + 6779);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB37;

LAB39:    t2 = (t0 + 6796);
    xsi_report(t2, 34U, (unsigned char)3);
    goto LAB40;

LAB42:    xsi_set_current_line(154, ng0);

LAB47:    t4 = (t0 + 3984);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB43:    t2 = (t0 + 6830);
    t12 = *((int *)t2);
    t3 = (t0 + 6834);
    t18 = *((int *)t3);
    if (t12 == t18)
        goto LAB44;

LAB53:    t20 = (t12 + 1);
    t12 = t20;
    t4 = (t0 + 6830);
    *((int *)t4) = t12;
    goto LAB41;

LAB45:    t5 = (t0 + 3984);
    *((int *)t5) = 0;
    xsi_set_current_line(155, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t7);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB46:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB45;
    else
        goto LAB47;

LAB48:    goto LAB46;

LAB49:    goto LAB43;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB55:    xsi_set_current_line(164, ng0);

LAB60:    t4 = (t0 + 4000);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB56:    t2 = (t0 + 6838);
    t12 = *((int *)t2);
    t3 = (t0 + 6842);
    t18 = *((int *)t3);
    if (t12 == t18)
        goto LAB57;

LAB66:    t20 = (t12 + 1);
    t12 = t20;
    t4 = (t0 + 6838);
    *((int *)t4) = t12;
    goto LAB54;

LAB58:    t5 = (t0 + 4000);
    *((int *)t5) = 0;
    xsi_set_current_line(165, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3440);
    xsi_process_wait(t2, t7);

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t8 = *((unsigned char *)t6);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB58;
    else
        goto LAB60;

LAB61:    goto LAB59;

LAB62:    goto LAB56;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB67:    t11 = (t0 + 6850);
    xsi_report(t11, 17U, (unsigned char)3);
    goto LAB68;

LAB69:    t2 = (t0 + 6867);
    xsi_report(t2, 17U, (unsigned char)3);
    goto LAB70;

LAB71:    t2 = (t0 + 6884);
    xsi_report(t2, 23U, (unsigned char)3);
    goto LAB72;

}


extern void work_a_4003959391_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4003959391_2372691052_p_0,(void *)work_a_4003959391_2372691052_p_1};
	xsi_register_didat("work_a_4003959391_2372691052", "isim/HexCounter_tb_isim_beh.exe.sim/work/a_4003959391_2372691052.didat");
	xsi_register_executes(pe);
}
