

/*
 *$Id: hal_user_common.h,v 1.2 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 */

#ifndef SAND_HAL_USER_COMMON_H
#define SAND_HAL_USER_COMMON_H

#define SAND_HAL_DEV_MA 0x01
#define SAND_HAL_DEV_QE 0x02
#define SAND_HAL_DEV_FE 0x03

/* do not write these bits during reg tests (they are requests) */

/* For the FE... */
#define SAND_HAL_FE_SR_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,SR_CONFIG1,RX_ENB))
#define SAND_HAL_FE_ST_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,ST_CONFIG1,TX_ENB))
#define SAND_HAL_FE_ST_TX_WRITE_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,ST_TX_WRITE_CTL,WR_REQ) | \
                                                  SAND_HAL_FIELD_MASK(FE,ST_TX_WRITE_CTL,DEBUG_MODE))
#define SAND_HAL_FE_PCI_DEBUG_ENB_NO_TEST_MASK 0xffffffff 
#define SAND_HAL_FE_PCI_SOFT_RESET_NO_TEST_MASK 0xffffffff
#define SAND_HAL_FE_PCI_BIST_CTL_NO_TEST_MASK 0xffffffff
#define SAND_HAL_FE_PCI_STATE_DEBUG_NO_TEST_MASK 0xffffffff
#define SAND_HAL_FE_SY_CONFIG_NO_TEST_MASK 0xffffff00 /*Don't Mask Epoch Size*/
#define SAND_HAL_FE_UN_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,UN_CONFIG,UN_ENB))
#define SAND_HAL_FE_UN_REC_ACCESS_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,UN_REC_ACCESS_CTL,UN_REC_REQ))
#define SAND_HAL_FE_MI_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,MI_CONFIG,MI_ENB))
#define SAND_HAL_FE_MI_MEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,MI_MEM_ACC_CTL,MI_MEM_ACC_REQ))
#define SAND_HAL_FE_MI_DMAC_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,MI_DMAC_ACC_CTL,MI_DMAC_ACC_REQ))
#define SAND_HAL_FE_VF_PORT0_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT0_CONFIG,P0_VFF_ENB))
#define SAND_HAL_FE_VF_PORT1_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT1_CONFIG,P1_VFF_ENB))
#define SAND_HAL_FE_VF_PORT2_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT2_CONFIG,P2_VFF_ENB))
#define SAND_HAL_FE_VF_PORT3_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT3_CONFIG,P3_VFF_ENB))
#define SAND_HAL_FE_VF_PORT4_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT4_CONFIG,P4_VFF_ENB))
#define SAND_HAL_FE_VF_PORT5_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT5_CONFIG,P5_VFF_ENB))
#define SAND_HAL_FE_VF_PORT6_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT6_CONFIG,P6_VFF_ENB))
#define SAND_HAL_FE_VF_PORT7_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT7_CONFIG,P7_VFF_ENB))
#define SAND_HAL_FE_VF_PORT8_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT8_CONFIG,P8_VFF_ENB))
#define SAND_HAL_FE_VF_PORT9_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT9_CONFIG,P9_VFF_ENB))
#define SAND_HAL_FE_VF_PORT10_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT10_CONFIG,P10_VFF_ENB))
#define SAND_HAL_FE_VF_PORT11_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT11_CONFIG,P11_VFF_ENB))
#define SAND_HAL_FE_VF_PORT12_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT12_CONFIG,P12_VFF_ENB))
#define SAND_HAL_FE_VF_PORT13_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT13_CONFIG,P13_VFF_ENB))
#define SAND_HAL_FE_VF_PORT14_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT14_CONFIG,P14_VFF_ENB))
#define SAND_HAL_FE_VF_PORT15_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PORT15_CONFIG,P15_VFF_ENB))
#define SAND_HAL_FE_VF_PKT_BUF_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,VF_PKT_BUF_CTL,PKT_REQ))
#define SAND_HAL_FE_PC_RMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PC_RMEM_ACC_CTL,PC_RMEM_REQ))
#define SAND_HAL_FE_PC_IMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PC_IMEM_ACC_CTL,PC_IMEM_REQ))
#define SAND_HAL_FE_PE_MEMC_ACC_CTL0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_MEMC_ACC_CTL0,PE_MEMC_REQ0)) 
#define SAND_HAL_FE_PE_MEMD_ACC_CTL0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_MEMD_ACC_CTL0,PE_MEMD_REQ0))
#define SAND_HAL_FE_PE_IMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_IMEM_ACC_CTL,PE_IMEM_REQ))
#define SAND_HAL_FE_PE_INTMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_INTMEM_ACC_CTL,PE_INTMEM_REQ))
#define SAND_HAL_FE_PE_MEMC_ACC_CTL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_MEMC_ACC_CTL1,PE_MEMC_REQ1))
#define SAND_HAL_FE_PE_MEMD_ACC_CTL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PE_MEMD_ACC_CTL1,PE_MEMD_REQ1))
#define SAND_HAL_FE_PP_CONFIG_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PP_CONFIG_ACC_CTL,PP_CONFIG_REQ))
#define SAND_HAL_FE_PP_METER_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PP_METER_ACC_CTL,PP_METER_REQ))
#define SAND_HAL_FE_PP_CNT_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PP_CNT_ACC_CTL,PP_CNT_REQ)) 
#define SAND_HAL_FE_PF_MEMA_ACC_CTL0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_MEMA_ACC_CTL0,PF_MEMA_REQ0))
#define SAND_HAL_FE_PF_MEMB_ACC_CTL0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_MEMB_ACC_CTL0,PF_MEMB_REQ0))
#define SAND_HAL_FE_PF_IMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_IMEM_ACC_CTL,PF_IMEM_REQ))
#define SAND_HAL_FE_PF_INTMEM_ACC_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_INTMEM_ACC_CTL,PF_INTMEM_REQ))
#define SAND_HAL_FE_PF_MEMA_ACC_CTL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_MEMA_ACC_CTL1,PF_MEMA_REQ1))
#define SAND_HAL_FE_PF_MEMB_ACC_CT1L_NO_TEST_MASK (SAND_HAL_FIELD_MASK(FE,PF_MEMB_ACC_CT1L,PF_MEMB_REQ1))


/* for the MA */
#define SAND_HAL_MA_WB_VOQ2NPC_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,WB_VOQ2NPC_ACCESS,VOQ2NPC_REQ))
#define SAND_HAL_MA_MI_SRAM_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,MI_SRAM_ACCESS,S_REQ))
#define SAND_HAL_MA_RD_WEIGHT_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,RD_WEIGHT_ACCESS,WGT_REQ))
#define SAND_HAL_MA_RD_VOQL_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,RD_VOQL_ACCESS,VOQL_REQ))
#define SAND_HAL_MA_RD_VOQA_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,RD_VOQA_ACCESS,VOQA_REQ))
#define SAND_HAL_MA_BW_GQR_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,BW_GQR_ACCESS,GQR_REQ))
#define SAND_HAL_MA_BW_GQL_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,BW_GQL_ACCESS,GQL_REQ))
#define SAND_HAL_MA_AM_PRIMATRIX_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,AM_PRIMATRIX_ACCESS,PM_REQ))
#define SAND_HAL_MA_AM_FULLMATRIX_ACCESS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,AM_FULLMATRIX_ACCESS,FM_REQ))
/* DA CONTROL */
#define  SAND_HAL_MA_DA_CONTROL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,DA_CONTROL,DA_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,DA_CONTROL,DA_FPGA_EN))
/* WB CONTROL */
#define  SAND_HAL_MA_WB_CONTROL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,WB_CONTROL,LENGTH_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,WB_CONTROL,RATE_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,WB_CONTROL,PB_EN))
/* MI CONTROL */
#define  SAND_HAL_MA_MI_CONTROL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,MI_CONTROL,EXT_FPGA_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,MI_CONTROL,EXT_SRAM_ONLINE))
/* RD CONTROL */
#define  SAND_HAL_MA_RD_CONTROL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,RD_CONTROL,USE_PQL_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,RD_CONTROL,RD_EN))
/* QI(x) CONTROL */
#define  SAND_HAL_MA_QI0_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI0_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI1_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI1_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI2_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI2_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI3_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI3_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI4_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI4_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI5_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI5_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI6_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI6_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI7_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI7_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI8_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI8_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI9_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI9_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI10_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI10_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI11_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI11_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI12_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI12_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI13_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI13_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI14_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI14_CONTROL,ENABLE)
#define  SAND_HAL_MA_QI15_CONTROL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,QI15_CONTROL,ENABLE)
/* AM CONTROL0 */
#define  SAND_HAL_MA_AM_CONTROL0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,AM_CONTROL0,AM_ENABLE) | \
                                               SAND_HAL_FIELD_MASK(MA,AM_CONTROL0,RN_ENABLE) | \
                                               SAND_HAL_FIELD_MASK(MA,AM_CONTROL0,MC_ARB_ENABLE) | \
                                               SAND_HAL_FIELD_MASK(MA,AM_CONTROL0,QR_ENABLE))
/* AM LINK CONTROL */
#define  SAND_HAL_MA_AM_LINK_CTL_NO_TEST_MASK SAND_HAL_FIELD_MASK(MA,AM_LINK_CTL,LINK_EN)
/* XB CONTROL */
#define  SAND_HAL_MA_XB_CONTROL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,XB_CONTROL,XB_JITTER_POLICING_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,XB_CONTROL,IPRT_EN) | \
                                              SAND_HAL_FIELD_MASK(MA,XB_CONTROL,EPRT_XCFG_REPLACE_EN))
/* SI(X) CONTROL1 */
#define  SAND_HAL_MA_SI0_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI0_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI0_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI1_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI1_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI1_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI2_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI2_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI2_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI3_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI3_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI3_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI4_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI4_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI4_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI5_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI5_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI5_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI6_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI6_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI6_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI7_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI7_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI7_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI8_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI8_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI8_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI9_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI9_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                SAND_HAL_FIELD_MASK(MA,SI9_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI10_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI10_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI10_CONTROL1,ENABLE))
#define  SAND_HAL_MA_S111_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI11_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI11_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI12_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI12_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI12_CONTROL1,ENABLE))
#define  SAND_HAL_MA_S113_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI13_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI13_CONTROL1,ENABLE))
#define  SAND_HAL_MA_SI14_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI14_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI14_CONTROL1,ENABLE))
#define  SAND_HAL_MA_S115_CONTROL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(MA,SI15_CONTROL1,DIRECT_CONTROL_SEL) | \
                                                 SAND_HAL_FIELD_MASK(MA,SI15_CONTROL1,ENABLE))


/* For the QE... */
#define SAND_HAL_QE_PC_RESET_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PC_RESET,SOFT_RESET) | SAND_HAL_FIELD_MASK(QE,PC_RESET,REG_DIAG_MODE))
/* PL3: */
#define SAND_HAL_QE_PL3_RXFIFO_WRITE_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PL3_RXFIFO_WRITE_CTL,RXFIFO_WR_REQ))
#define SAND_HAL_QE_PL3_TXFIFO_READ_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PL3_TXFIFO_READ_CTL,TXFIFO_RD_REQ))
#define SAND_HAL_QE_PL3_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PL3_CONFIG, ONLINE_TX) | SAND_HAL_FIELD_MASK(QE,PL3_CONFIG,ONLINE_RX))
/* QMGR: */
#define SAND_HAL_QE_QMGR_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QMGR_CONFIG, INIT) | SAND_HAL_FIELD_MASK(QE,QMGR_CONFIG,ENABLE))
#define SAND_HAL_QE_QMGR_CONFIG_QUEUE_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QMGR_CONFIG_QUEUE, CQ_REQ))
#define SAND_HAL_QE_QMGR_MEM_ACC_CTRL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QMGR_MEM_ACC_CTRL, ACC_REQ))
#define SAND_HAL_QE_QMGR_RAND_DEBUG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QMGR_RAND_DEBUG,RAND_REQ))
/* SCI: */
#define SAND_HAL_QE_SCI_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SCI_CONFIG,ENABLE) | SAND_HAL_FIELD_MASK(QE,SCI_CONFIG,DEFAULT_BM))
/* SFI: */
#define SAND_HAL_QE_SFI_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SFI_CONFIG,ENABLE))
#define SAND_HAL_QE_SFI_MEM_ACC_CTRL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SFI_MEM_ACC_CTRL,REQ))
/* SI */
#define SAND_HAL_QE_SI0_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI1_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI1_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI2_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI2_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI3_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI3_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI4_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI4_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI5_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI5_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI6_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI6_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI7_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI7_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI8_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI8_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI9_CONFIG1_NO_TEST_MASK  (SAND_HAL_FIELD_MASK(QE,SI9_CONFIG1, ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI10_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI10_CONFIG1,ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI11_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,ENABLE) | SAND_HAL_FIELD_MASK(QE,SI0_CONFIG1,FORCE_TIME_ALIGNMENT) | SAND_HAL_FIELD_MASK(QE,SI11_CONFIG1,DIRECT_CONTROL_SEL))
#define SAND_HAL_QE_SI0_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI0_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI1_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI1_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI2_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI2_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI3_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI3_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI4_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI4_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI5_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI5_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI6_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI6_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI7_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI7_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI8_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI8_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI9_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI9_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI10_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI10_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI11_ERROR_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI11_ERROR, RXLOS_EVENT))
#define SAND_HAL_QE_SI0_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI0_STATUS, RXLOS))
#define SAND_HAL_QE_SI1_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI1_STATUS, RXLOS))
#define SAND_HAL_QE_SI2_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI2_STATUS, RXLOS))
#define SAND_HAL_QE_SI3_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI3_STATUS, RXLOS))
#define SAND_HAL_QE_SI4_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI4_STATUS, RXLOS))
#define SAND_HAL_QE_SI5_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI5_STATUS, RXLOS))
#define SAND_HAL_QE_SI6_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI6_STATUS, RXLOS))
#define SAND_HAL_QE_SI7_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI7_STATUS, RXLOS))
#define SAND_HAL_QE_SI8_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI8_STATUS, RXLOS))
#define SAND_HAL_QE_SI9_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI9_STATUS, RXLOS))
#define SAND_HAL_QE_SI10_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI10_STATUS, RXLOS))
#define SAND_HAL_QE_SI11_STATUS_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SI11_STATUS, RXLOS))

#define SAND_HAL_QE_SI0_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI1_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI2_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI3_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI4_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI5_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI6_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI7_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI8_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI9_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI10_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI11_DEBUG_01_NO_TEST_MASK 0xFFFFFFFF

#define SAND_HAL_QE_SI0_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI1_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI2_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI3_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI4_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI5_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI6_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI7_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI8_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI9_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI10_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI11_DEBUG_02_NO_TEST_MASK 0xFFFFFFFF

#define SAND_HAL_QE_SI0_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI1_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI2_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI3_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI4_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI5_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI6_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI7_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI8_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI9_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI10_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF
#define SAND_HAL_QE_SI11_DEBUG_03_NO_TEST_MASK 0xFFFFFFFF


/* EGRESS */
#define SAND_HAL_QE_EGRESS_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,EGRESS_CONFIG,ENABLE))
#define SAND_HAL_QE_EGRESS_MCLUT_ACC_CTRL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,EGRESS_MCLUT_ACC_CTRL,MCLU_REQ))

/* LDMA */
#define SAND_HAL_QE_LDMA_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,LDMA_CONFIG,ENABLE))

/* PBC */
#define SAND_HAL_QE_PBC_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PBC_CONFIG,ENABLE))
#define SAND_HAL_QE_PBC_SDRAM_TEST_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PBC_SDRAM_TEST,SRAM_TEST))
#define SAND_HAL_QE_PBC_DDR_CTLR_MAIN_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PBC_DDR_CTLR_MAIN, AUTO_INIT_START))

/* PCI: */
#define SAND_HAL_QE_PCI_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PCI_CONFIG,CII_ENABLE))
#define SAND_HAL_QE_PCI_ERROR_MASK_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_RX_CNTSTATS_INITIATE_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_RX_DEPTHSTATS_INITIATE_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_RING_SIZE_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_TXRING_SIZE_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_RING_PTR_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_TXRING_PTR_NO_TEST_MASK 0xffffffff
/* Disable these since they cause interrupt on cycle 2.  Write load0
** to prove that one works.  It alone won't cause interrupt.
** #define SAND_HAL_QE_PCI_RXBUF_LOAD0_NO_TEST_MASK 0xffffffff
*/
#define SAND_HAL_QE_PCI1_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI2_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI3_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI4_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI5_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI6_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI7_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI8_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI9_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI10_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI11_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI12_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI13_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI14_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI15_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI16_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI17_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI18_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI19_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI20_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI21_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI22_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI23_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI24_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI25_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI26_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI27_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI28_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI29_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI30_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI31_RXBUF_LOAD_NO_TEST_MASK 0xffffffff
#define SAND_HAL_QE_PCI_INTERRUPT0_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,PCI_INTERRUPT0, CAUSE_INTERRUPT))

/* QOS */
#define SAND_HAL_QE_QOS_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QOS_CONFIG,ENABLE) | SAND_HAL_FIELD_MASK(QE,QOS_CONFIG,INIT))
#define SAND_HAL_QE_QOS_MEM_ACC_CTRL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,QOS_MEM_ACC_CTRL,REQ))

/* RXDMA */
#define SAND_HAL_QE_RXDMA_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,RXDMA_CONFIG,ENABLE))
/* SPI */
#define SAND_HAL_QE_SR_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SR_CONFIG1,RX_ENB))
/* #define SAND_HAL_QE_SR_HPHY_CTL1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SR_HPHY_CTL1, RX_CLKGEN_RESET) | SAND_HAL_FIELD_MASK(QE,SR_HPHY_CTL1, HPHY_RESET))
** #define SAND_HAL_QE_SR_HPHY_CTL3_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,SR_HPHY_CTL3, TX_CLKGEN_RESET))
*/
#define SAND_HAL_QE_ST_CONFIG1_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,ST_CONFIG1,TX_ENB))
#define SAND_HAL_QE_ST_TX_WRITE_CTL_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,ST_TX_WRITE_CTL,DEBUG_MODE))
/* TXDMA: */
#define SAND_HAL_QE_TXDMA_CONFIG_NO_TEST_MASK (SAND_HAL_FIELD_MASK(QE,TXDMA_CONFIG,ENABLE))

#endif






