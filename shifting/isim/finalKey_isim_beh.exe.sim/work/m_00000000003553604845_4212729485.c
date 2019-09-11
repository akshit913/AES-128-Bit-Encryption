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
static const char *ng0 = "D:/minor/shifting/shifting.v";
static int ng1[] = {31, 0};
static int ng2[] = {0, 0};
static int ng3[] = {127, 0};
static int ng4[] = {32, 0};



static void Always_25_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t15[8];
    char t25[8];
    char t35[8];
    char t46[8];
    char t47[8];
    char t48[8];
    char t71[24];
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
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    int t56;
    char *t57;
    unsigned int t58;
    int t59;
    int t60;
    char *t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;

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
    t10 = (t9 >> 24);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 24);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 255U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 255U);
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
    t26 = (t0 + 600U);
    t27 = *((char **)t26);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t28 = (t27 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (t29 >> 8);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 8);
    *((unsigned int *)t26) = t32;
    t33 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t33 & 255U);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 255U);
    t36 = (t0 + 600U);
    t37 = *((char **)t36);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t38 = (t37 + 4);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 16);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 16);
    *((unsigned int *)t36) = t42;
    t43 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t43 & 255U);
    t44 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t44 & 255U);
    xsi_vlogtype_concat(t4, 32, 32, 4U, t35, 8, t25, 8, t15, 8, t5, 8);
    t45 = (t0 + 828);
    t49 = (t0 + 828);
    t50 = (t49 + 44U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng1)));
    t53 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t46, t47, t48, ((int*)(t51)), 2, t52, 32, 1, t53, 32, 1);
    t54 = (t46 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (!(t55));
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t56 && t59);
    t61 = (t48 + 4);
    t62 = *((unsigned int *)t61);
    t63 = (!(t62));
    t64 = (t60 && t63);
    if (t64 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t71, 96, t3, 127, 32);
    t2 = (t0 + 828);
    t6 = (t0 + 828);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t16 = ((char*)((ng3)));
    t17 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t4, t5, t15, ((int*)(t8)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t4 + 4);
    t9 = *((unsigned int *)t18);
    t56 = (!(t9));
    t26 = (t5 + 4);
    t10 = *((unsigned int *)t26);
    t59 = (!(t10));
    t60 = (t56 && t59);
    t27 = (t15 + 4);
    t11 = *((unsigned int *)t27);
    t63 = (!(t11));
    t64 = (t60 && t63);
    if (t64 == 1)
        goto LAB8;

LAB9:    goto LAB2;

LAB6:    t65 = *((unsigned int *)t48);
    t66 = (t65 + 0);
    t67 = *((unsigned int *)t46);
    t68 = *((unsigned int *)t47);
    t69 = (t67 - t68);
    t70 = (t69 + 1);
    xsi_vlogvar_assign_value(t45, t4, t66, *((unsigned int *)t47), t70);
    goto LAB7;

LAB8:    t12 = *((unsigned int *)t15);
    t66 = (t12 + 0);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t69 = (t13 - t14);
    t70 = (t69 + 1);
    xsi_vlogvar_assign_value(t2, t71, t66, *((unsigned int *)t5), t70);
    goto LAB9;

}


extern void work_m_00000000003553604845_4212729485_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000003553604845_4212729485", "isim/finalKey_isim_beh.exe.sim/work/m_00000000003553604845_4212729485.didat");
	xsi_register_executes(pe);
}
