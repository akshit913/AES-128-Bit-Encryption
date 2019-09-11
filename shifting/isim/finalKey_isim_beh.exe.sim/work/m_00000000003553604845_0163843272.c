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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/jmd/Downloads/cipherShift.v";
static int ng1[] = {31, 0};
static int ng2[] = {0, 0};
static int ng3[] = {63, 0};
static int ng4[] = {32, 0};
static int ng5[] = {95, 0};
static int ng6[] = {64, 0};
static int ng7[] = {127, 0};
static int ng8[] = {96, 0};



static void Always_25_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t15[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    char *t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1548);
    *((int *)t2) = 1;
    t3 = (t0 + 1380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t6 = (t0 + 600U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 8);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 8);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 16777215U);
    t16 = (t0 + 600U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 255U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 255U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t15, 8, t5, 24);
    t25 = (t0 + 828);
    t29 = (t0 + 828);
    t30 = (t29 + 44U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng1)));
    t33 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t34 = (t26 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    t41 = (t28 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 8);
    t7 = (t3 + 12);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 16);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t8 = (t0 + 600U);
    t16 = *((char **)t8);
    memset(t15, 0, 8);
    t8 = (t15 + 4);
    t17 = (t16 + 8);
    t18 = (t16 + 12);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 65535U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 65535U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t15, 16, t5, 16);
    t25 = (t0 + 828);
    t29 = (t0 + 828);
    t30 = (t29 + 44U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng3)));
    t33 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t34 = (t26 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    t41 = (t28 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t3 + 16);
    t7 = (t3 + 20);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t8 = (t0 + 600U);
    t16 = *((char **)t8);
    memset(t15, 0, 8);
    t8 = (t15 + 4);
    t17 = (t16 + 16);
    t18 = (t16 + 20);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t8) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 16777215U);
    t24 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t24 & 16777215U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t15, 24, t5, 8);
    t25 = (t0 + 828);
    t29 = (t0 + 828);
    t30 = (t29 + 44U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    t33 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t26, t27, t28, ((int*)(t31)), 2, t32, 32, 1, t33, 32, 1);
    t34 = (t26 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    t41 = (t28 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (!(t42));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t3 + 24);
    t7 = (t3 + 28);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t8 = (t0 + 828);
    t16 = (t0 + 828);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t25 = ((char*)((ng7)));
    t29 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t5, t15, t26, ((int*)(t18)), 2, t25, 32, 1, t29, 32, 1);
    t30 = (t5 + 4);
    t19 = *((unsigned int *)t30);
    t36 = (!(t19));
    t31 = (t15 + 4);
    t20 = *((unsigned int *)t31);
    t39 = (!(t20));
    t40 = (t36 && t39);
    t32 = (t26 + 4);
    t21 = *((unsigned int *)t32);
    t43 = (!(t21));
    t44 = (t40 && t43);
    if (t44 == 1)
        goto LAB12;

LAB13:    goto LAB2;

LAB6:    t45 = *((unsigned int *)t28);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t27);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t25, t4, t46, *((unsigned int *)t27), t50);
    goto LAB7;

LAB8:    t45 = *((unsigned int *)t28);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t27);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t25, t4, t46, *((unsigned int *)t27), t50);
    goto LAB9;

LAB10:    t45 = *((unsigned int *)t28);
    t46 = (t45 + 0);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t27);
    t49 = (t47 - t48);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t25, t4, t46, *((unsigned int *)t27), t50);
    goto LAB11;

LAB12:    t22 = *((unsigned int *)t26);
    t46 = (t22 + 0);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t15);
    t49 = (t23 - t24);
    t50 = (t49 + 1);
    xsi_vlogvar_assign_value(t8, t4, t46, *((unsigned int *)t15), t50);
    goto LAB13;

}


extern void work_m_00000000003553604845_0163843272_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003553604845_0163843272", "isim/finalKey_isim_beh.exe.sim/work/m_00000000003553604845_0163843272.didat");
	xsi_register_executes(pe);
}
