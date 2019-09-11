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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003553604845_4212729485_init();
    work_m_00000000003174676195_3744733971_init();
    work_m_00000000004247699188_4077286061_init();
    work_m_00000000003216790252_1286254862_init();
    work_m_00000000001195620876_3208433555_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001195620876_3208433555");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
