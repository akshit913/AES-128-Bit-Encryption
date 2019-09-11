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
static const char *ng0 = "D:/minor/shifting/sboxnew.v";



static void Cont_35_0(char *t0)
{
    char t3[24];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 96, t4, 127, 32);
    t2 = (t0 + 1592);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 96);
    xsi_driver_vfirst_trans(t2, 32, 127);
    t9 = (t0 + 1548);
    *((int *)t9) = 1;

LAB1:    return;
}


extern void work_m_00000000004247699188_4077286061_init()
{
	static char *pe[] = {(void *)Cont_35_0};
	xsi_register_didat("work_m_00000000004247699188_4077286061", "isim/finalKey_isim_beh.exe.sim/work/m_00000000004247699188_4077286061.didat");
	xsi_register_executes(pe);
}
