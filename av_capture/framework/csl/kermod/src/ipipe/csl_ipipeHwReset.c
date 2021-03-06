/*
    DM360 Evaluation Software

    (c)Texas Instruments 2007
*/

#include <csl_ipipe.h>


CSL_Status CSL_ipipeHwReset(CSL_IpipeHandle hndl)
{
  Uint8   count;

  if (hndl == NULL)
    return CSL_EFAIL;

  hndl->regs->GCK_MMR = 0x1;
  hndl->regs->GCK_PIX = 0xF;
  hndl->regs->SRC_EN = CSL_IPIPE_SRC_EN_RESETVAL;
  hndl->regs->SRC_MODE = CSL_IPIPE_SRC_MODE_RESETVAL;
  hndl->regs->SRC_FMT = CSL_IPIPE_SRC_FMT_RESETVAL;
  hndl->regs->SRC_COL = CSL_IPIPE_SRC_COL_RESETVAL;
  hndl->regs->SRC_VPS = CSL_IPIPE_SRC_VPS_RESETVAL;
  hndl->regs->SRC_VSZ = CSL_IPIPE_SRC_VSZ_RESETVAL;
  hndl->regs->SRC_HPS = CSL_IPIPE_SRC_HPS_RESETVAL;
  hndl->regs->SRC_HSZ = CSL_IPIPE_SRC_HSZ_RESETVAL;
  hndl->regs->SEL_SBU = CSL_IPIPE_SEL_SBU_RESETVAL;
  hndl->regs->DMA_STA = CSL_IPIPE_DMA_STA_RESETVAL;
  hndl->regs->RESERVED0 = CSL_IPIPE_RESERVED0_RESETVAL;
  hndl->regs->DPC_LUT_EN = CSL_IPIPE_DPC_LUT_EN_RESETVAL;
  hndl->regs->DPC_LUT_SEL = CSL_IPIPE_DPC_LUT_SEL_RESETVAL;
  hndl->regs->DPC_LUT_ADR = CSL_IPIPE_DPC_LUT_ADR_RESETVAL;
  hndl->regs->DPC_LUT_SIZ = CSL_IPIPE_DPC_LUT_SIZ_RESETVAL;
  hndl->regs->DPC_OTF_EN = CSL_IPIPE_DPC_OTF_EN_RESETVAL;
  hndl->regs->DPC_OTF_TYP = CSL_IPIPE_DPC_OTF_TYP_RESETVAL;
  hndl->regs->DPC_OTF_2_D_THR_R = CSL_IPIPE_DPC_OTF_2_D_THR_R_RESETVAL;
  hndl->regs->DPC_OTF_2_D_THR_GR = CSL_IPIPE_DPC_OTF_2_D_THR_GR_RESETVAL;
  hndl->regs->DPC_OTF_2_D_THR_GB = CSL_IPIPE_DPC_OTF_2_D_THR_GB_RESETVAL;
  hndl->regs->DPC_OTF_2_D_THR_B = CSL_IPIPE_DPC_OTF_2_D_THR_B_RESETVAL;
  hndl->regs->DPC_OTF_2_C_THR_R = CSL_IPIPE_DPC_OTF_2_C_THR_R_RESETVAL;
  hndl->regs->DPC_OTF_2_C_THR_GR = CSL_IPIPE_DPC_OTF_2_C_THR_GR_RESETVAL;
  hndl->regs->DPC_OTF_2_C_THR_GB = CSL_IPIPE_DPC_OTF_2_C_THR_GB_RESETVAL;
  hndl->regs->DPC_OTF_2_C_THR_B = CSL_IPIPE_DPC_OTF_2_C_THR_B_RESETVAL;
  hndl->regs->DPC_OTF_3_SHF = CSL_IPIPE_DPC_OTF_3_SHF_RESETVAL;
  hndl->regs->DPC_OTF_3_D_THR = CSL_IPIPE_DPC_OTF_3_D_THR_RESETVAL;
  hndl->regs->DPC_OTF_3_D_SLP = CSL_IPIPE_DPC_OTF_3_D_SLP_RESETVAL;
  hndl->regs->DPC_OTF_3_D_MIN = CSL_IPIPE_DPC_OTF_3_D_MIN_RESETVAL;
  hndl->regs->DPC_OTF_3_D_MAX = CSL_IPIPE_DPC_OTF_3_D_MAX_RESETVAL;
  hndl->regs->DPC_OTF_3_C_THR = CSL_IPIPE_DPC_OTF_3_C_THR_RESETVAL;
  hndl->regs->DPC_OTF_3_C_SLP = CSL_IPIPE_DPC_OTF_3_C_SLP_RESETVAL;
  hndl->regs->DPC_OTF_3_C_MIN = CSL_IPIPE_DPC_OTF_3_C_MIN_RESETVAL;
  hndl->regs->DPC_OTF_3_C_MAX = CSL_IPIPE_DPC_OTF_3_C_MAX_RESETVAL;
  hndl->regs->LSC_VOFT = CSL_IPIPE_LSC_VOFT_RESETVAL;
  hndl->regs->LSC_VA2 = CSL_IPIPE_LSC_VA2_RESETVAL;
  hndl->regs->LSC_VA1 = CSL_IPIPE_LSC_VA1_RESETVAL;
  hndl->regs->LSC_VS = CSL_IPIPE_LSC_VS_RESETVAL;
  hndl->regs->LSC_HOFT = CSL_IPIPE_LSC_HOFT_RESETVAL;
  hndl->regs->LSC_HA2 = CSL_IPIPE_LSC_HA2_RESETVAL;
  hndl->regs->LSC_HA1 = CSL_IPIPE_LSC_HA1_RESETVAL;
  hndl->regs->LSC_HS = CSL_IPIPE_LSC_HS_RESETVAL;
  hndl->regs->LSC_GAN_R = CSL_IPIPE_LSC_GAN_R_RESETVAL;
  hndl->regs->LSC_GAN_GR = CSL_IPIPE_LSC_GAN_GR_RESETVAL;
  hndl->regs->LSC_GAN_GB = CSL_IPIPE_LSC_GAN_GB_RESETVAL;
  hndl->regs->LSC_GAN_B = CSL_IPIPE_LSC_GAN_B_RESETVAL;
  hndl->regs->LSC_OFT_R = CSL_IPIPE_LSC_OFT_R_RESETVAL;
  hndl->regs->LSC_OFT_GR = CSL_IPIPE_LSC_OFT_GR_RESETVAL;
  hndl->regs->LSC_OFT_GB = CSL_IPIPE_LSC_OFT_GB_RESETVAL;
  hndl->regs->LSC_OFT_B = CSL_IPIPE_LSC_OFT_B_RESETVAL;
  hndl->regs->LSC_SHF = CSL_IPIPE_LSC_SHF_RESETVAL;
  hndl->regs->LSC_MAX = CSL_IPIPE_LSC_MAX_RESETVAL;
  hndl->regs->D2F_1ST_EN = CSL_IPIPE_D2F_1ST_EN_RESETVAL;
  hndl->regs->D2F_1ST_TYP = CSL_IPIPE_D2F_1ST_TYP_RESETVAL;
  for (count = 0; count < 8; count++) {
    hndl->regs->D2F_1ST_THR[count] = CSL_IPIPE_D2F_1ST_THR_RESETVAL;
    hndl->regs->D2F_1ST_STR[count] = CSL_IPIPE_D2F_1ST_STR_RESETVAL;
    hndl->regs->D2F_1ST_SPR[count] = CSL_IPIPE_D2F_1ST_SPR_RESETVAL;
  }
  hndl->regs->D2F_1ST_EDG_MIN = CSL_IPIPE_D2F_1ST_EDG_MIN_RESETVAL;
  hndl->regs->D2F_1ST_EDG_MAX = CSL_IPIPE_D2F_1ST_EDG_MAX_RESETVAL;
  hndl->regs->D2F_2ND_EN = CSL_IPIPE_D2F_2ND_EN_RESETVAL;
  hndl->regs->D2F_2ND_TYP = CSL_IPIPE_D2F_2ND_TYP_RESETVAL;
  for (count = 0; count < 8; count++) {
    hndl->regs->D2F_2ND_THR[0] = CSL_IPIPE_D2F_2ND_THR_RESETVAL;
    hndl->regs->D2F_2ND_STR[0] = CSL_IPIPE_D2F_2ND_STR_RESETVAL;
    hndl->regs->D2F_2ND_SPR[0] = CSL_IPIPE_D2F_2ND_SPR_RESETVAL;
  }
  hndl->regs->D2F_2ND_EDG_MIN = CSL_IPIPE_D2F_2ND_EDG_MIN_RESETVAL;
  hndl->regs->D2F_2ND_EDG_MAX = CSL_IPIPE_D2F_2ND_EDG_MAX_RESETVAL;
  hndl->regs->GIC_EN = CSL_IPIPE_GIC_EN_RESETVAL;
  hndl->regs->GIC_TYP = CSL_IPIPE_GIC_TYP_RESETVAL;
  hndl->regs->GIC_GAN = CSL_IPIPE_GIC_GAN_RESETVAL;
  hndl->regs->GIC_NFGAN = CSL_IPIPE_GIC_NFGAN_RESETVAL;
  hndl->regs->GIC_THR = CSL_IPIPE_GIC_THR_RESETVAL;
  hndl->regs->GIC_SLP = CSL_IPIPE_GIC_SLP_RESETVAL;
  hndl->regs->WB2_OFT_R = CSL_IPIPE_WB2_OFT_R_RESETVAL;
  hndl->regs->WB2_OFT_GR = CSL_IPIPE_WB2_OFT_GR_RESETVAL;
  hndl->regs->WB2_OFT_GB = CSL_IPIPE_WB2_OFT_GB_RESETVAL;
  hndl->regs->WB2_OFT_B = CSL_IPIPE_WB2_OFT_B_RESETVAL;
  hndl->regs->WB2_WGN_R = CSL_IPIPE_WB2_WGN_R_RESETVAL;
  hndl->regs->WB2_WGN_GR = CSL_IPIPE_WB2_WGN_GR_RESETVAL;
  hndl->regs->WB2_WGN_GB = CSL_IPIPE_WB2_WGN_GB_RESETVAL;;
  hndl->regs->WB2_WGN_B = CSL_IPIPE_WB2_WGN_B_RESETVAL;;
  hndl->regs->CFA_MODE = CSL_IPIPE_CFA_MODE_RESETVAL;;
  hndl->regs->CFA_2DIR_HPF_THR = CSL_IPIPE_CFA_2DIR_HPF_THR_RESETVAL;
  hndl->regs->CFA_2DIR_HPF_SLP = CSL_IPIPE_CFA_2DIR_HPF_SLP_RESETVAL;
  hndl->regs->CFA_2DIR_MIX_THR = CSL_IPIPE_CFA_2DIR_MIX_THR_RESETVAL;
  hndl->regs->CFA_2DIR_MIX_SLP = CSL_IPIPE_CFA_2DIR_MIX_SLP_RESETVAL;
  hndl->regs->CFA_2DIR_DIR_THR = CSL_IPIPE_CFA_2DIR_DIR_THR_RESETVAL;
  hndl->regs->CFA_2DIR_DIR_SLP = CSL_IPIPE_CFA_2DIR_DIR_SLP_RESETVAL;
  hndl->regs->CFA_2DIR_NDWT = CSL_IPIPE_CFA_2DIR_NDWT_RESETVAL;
  hndl->regs->CFA_MONO_HUE_FRA = CSL_IPIPE_CFA_MONO_HUE_FRA_RESETVAL;
  hndl->regs->CFA_MONO_EDG_THR = CSL_IPIPE_CFA_MONO_EDG_THR_RESETVAL;
  hndl->regs->CFA_MONO_THR_MIN = CSL_IPIPE_CFA_MONO_THR_MIN_RESETVAL;
  hndl->regs->CFA_MONO_THR_SLP = CSL_IPIPE_CFA_MONO_THR_SLP_RESETVAL;
  hndl->regs->CFA_MONO_SLP_MIN = CSL_IPIPE_CFA_MONO_SLP_MIN_RESETVAL;
  hndl->regs->CFA_MONO_SLP_SLP = CSL_IPIPE_CFA_MONO_SLP_SLP_RESETVAL;
  hndl->regs->CFA_MONO_LPWT = CSL_IPIPE_CFA_MONO_LPWT_RESETVAL;
  hndl->regs->RGB1_MUL_RR = CSL_IPIPE_RGB1_MUL_RR_RESETVAL;
  hndl->regs->RGB1_MUL_GR = CSL_IPIPE_RGB1_MUL_GR_RESETVAL;
  hndl->regs->RGB1_MUL_BR = CSL_IPIPE_RGB1_MUL_BR_RESETVAL;
  hndl->regs->RGB1_MUL_RG = CSL_IPIPE_RGB1_MUL_RG_RESETVAL;
  hndl->regs->RGB1_MUL_GG = CSL_IPIPE_RGB1_MUL_GG_RESETVAL;
  hndl->regs->RGB1_MUL_BG = CSL_IPIPE_RGB1_MUL_BG_RESETVAL;
  hndl->regs->RGB1_MUL_RB = CSL_IPIPE_RGB1_MUL_RB_RESETVAL;
  hndl->regs->RGB1_MUL_GB = CSL_IPIPE_RGB1_MUL_GB_RESETVAL;
  hndl->regs->RGB1_MUL_BB = CSL_IPIPE_RGB1_MUL_BB_RESETVAL;
  hndl->regs->RGB1_OFT_OR = CSL_IPIPE_RGB1_OFT_OR_RESETVAL;
  hndl->regs->RGB1_OFT_OG = CSL_IPIPE_RGB1_OFT_OG_RESETVAL;
  hndl->regs->RGB1_OFT_OB = CSL_IPIPE_RGB1_OFT_OB_RESETVAL;
  hndl->regs->GMM_CFG = CSL_IPIPE_GMM_CFG_RESETVAL;
  hndl->regs->RGB2_MUL_RR = CSL_IPIPE_RGB2_MUL_RR_RESETVAL;
  hndl->regs->RGB2_MUL_GR = CSL_IPIPE_RGB2_MUL_GR_RESETVAL;
  hndl->regs->RGB2_MUL_BR = CSL_IPIPE_RGB2_MUL_BR_RESETVAL;
  hndl->regs->RGB2_MUL_RG = CSL_IPIPE_RGB2_MUL_RG_RESETVAL;
  hndl->regs->RGB2_MUL_GG = CSL_IPIPE_RGB2_MUL_GG_RESETVAL;
  hndl->regs->RGB2_MUL_BG = CSL_IPIPE_RGB2_MUL_BG_RESETVAL;
  hndl->regs->RGB2_MUL_RB = CSL_IPIPE_RGB2_MUL_RB_RESETVAL;
  hndl->regs->RGB2_MUL_GB = CSL_IPIPE_RGB2_MUL_GB_RESETVAL;
  hndl->regs->RGB2_MUL_BB = CSL_IPIPE_RGB2_MUL_BB_RESETVAL;
  hndl->regs->RGB2_OFT_OR = CSL_IPIPE_RGB2_OFT_OR_RESETVAL;
  hndl->regs->RGB2_OFT_OG = CSL_IPIPE_RGB2_OFT_OG_RESETVAL;
  hndl->regs->RGB2_OFT_OB = CSL_IPIPE_RGB2_OFT_OB_RESETVAL;
  hndl->regs->D3LUT_EN = CSL_IPIPE_D3LUT_EN_RESETVAL;
  hndl->regs->YUV_ADJ = CSL_IPIPE_YUV_ADJ_RESETVAL;
  hndl->regs->YUV_MUL_RY = CSL_IPIPE_YUV_MUL_RY_RESETVAL;
  hndl->regs->YUV_MUL_GY = CSL_IPIPE_YUV_MUL_GY_RESETVAL;
  hndl->regs->YUV_MUL_BY = CSL_IPIPE_YUV_MUL_BY_RESETVAL;
  hndl->regs->YUV_MUL_RCB = CSL_IPIPE_YUV_MUL_RCB_RESETVAL;
  hndl->regs->YUV_MUL_GCB = CSL_IPIPE_YUV_MUL_GCB_RESETVAL;
  hndl->regs->YUV_MUL_BCB = CSL_IPIPE_YUV_MUL_BCB_RESETVAL;
  hndl->regs->YUV_MUL_RCR = CSL_IPIPE_YUV_MUL_RCR_RESETVAL;
  hndl->regs->YUV_MUL_GCR = CSL_IPIPE_YUV_MUL_GCR_RESETVAL;
  hndl->regs->YUV_MUL_BCR = CSL_IPIPE_YUV_MUL_BCR_RESETVAL;
  hndl->regs->YUV_OFT_Y = CSL_IPIPE_YUV_OFT_Y_RESETVAL;
  hndl->regs->YUV_OFT_CB = CSL_IPIPE_YUV_OFT_CB_RESETVAL;
  hndl->regs->YUV_OFT_CR = CSL_IPIPE_YUV_OFT_CR_RESETVAL;
  hndl->regs->YUV_PHS = CSL_IPIPE_YUV_PHS_RESETVAL;
  hndl->regs->GBCE_EN = CSL_IPIPE_GBCE_EN_RESETVAL;
  hndl->regs->GBCE_TYP = CSL_IPIPE_GBCE_TYP_RESETVAL;
  hndl->regs->YEE_EN = CSL_IPIPE_YEE_EN_RESETVAL;
  hndl->regs->YEE_TYP = CSL_IPIPE_YEE_TYP_RESETVAL;
  hndl->regs->YEE_SHF = CSL_IPIPE_YEE_SHF_RESETVAL;
  hndl->regs->YEE_MUL_00 = CSL_IPIPE_YEE_MUL_00_RESETVAL;
  hndl->regs->YEE_MUL_01 = CSL_IPIPE_YEE_MUL_01_RESETVAL;
  hndl->regs->YEE_MUL_02 = CSL_IPIPE_YEE_MUL_02_RESETVAL;
  hndl->regs->YEE_MUL_10 = CSL_IPIPE_YEE_MUL_10_RESETVAL;
  hndl->regs->YEE_MUL_11 = CSL_IPIPE_YEE_MUL_11_RESETVAL;
  hndl->regs->YEE_MUL_12 = CSL_IPIPE_YEE_MUL_12_RESETVAL;
  hndl->regs->YEE_MUL_20 = CSL_IPIPE_YEE_MUL_20_RESETVAL;
  hndl->regs->YEE_MUL_21 = CSL_IPIPE_YEE_MUL_21_RESETVAL;
  hndl->regs->YEE_MUL_22 = CSL_IPIPE_YEE_MUL_22_RESETVAL;
  hndl->regs->YEE_THR = CSL_IPIPE_YEE_THR_RESETVAL;
  hndl->regs->YEE_E_GAN = CSL_IPIPE_YEE_E_GAN_RESETVAL;
  hndl->regs->YEE_E_THR_1 = CSL_IPIPE_YEE_E_THR_1_RESETVAL;
  hndl->regs->YEE_E_THR_2 = CSL_IPIPE_YEE_E_THR_2_RESETVAL;
  hndl->regs->YEE_G_GAN = CSL_IPIPE_YEE_G_GAN_RESETVAL;
  hndl->regs->YEE_G_OFT = CSL_IPIPE_YEE_G_OFT_RESETVAL;
  hndl->regs->CAR_EN = CSL_IPIPE_CAR_EN_RESETVAL;
  hndl->regs->CAR_TYP = CSL_IPIPE_CAR_TYP_RESETVAL;
  hndl->regs->CAR_SW = CSL_IPIPE_CAR_SW_RESETVAL;
  hndl->regs->CAR_HPF_TYP = CSL_IPIPE_CAR_HPF_TYP_RESETVAL;
  hndl->regs->CAR_HPF_SHF = CSL_IPIPE_CAR_HPF_SHF_RESETVAL;
  hndl->regs->CAR_HPF_THR = CSL_IPIPE_CAR_HPF_THR_RESETVAL;
  hndl->regs->CAR_GN1_GAN = CSL_IPIPE_CAR_GN1_GAN_RESETVAL;
  hndl->regs->CAR_GN1_SHF = CSL_IPIPE_CAR_GN1_SHF_RESETVAL;
  hndl->regs->CAR_GN1_MIN = CSL_IPIPE_CAR_GN1_MIN_RESETVAL;
  hndl->regs->CAR_GN2_GAN = CSL_IPIPE_CAR_GN2_GAN_RESETVAL;
  hndl->regs->CAR_GN2_SHF = CSL_IPIPE_CAR_GN2_SHF_RESETVAL;
  hndl->regs->CAR_GN2_MIN = CSL_IPIPE_CAR_GN2_MIN_RESETVAL;
  hndl->regs->CGS_EN = CSL_IPIPE_CGS_EN_RESETVAL;
  hndl->regs->CGS_GN1_L_THR = CSL_IPIPE_CGS_GN1_L_THR_RESETVAL;
  hndl->regs->CGS_GN1_L_GAN = CSL_IPIPE_CGS_GN1_L_GAN_RESETVAL;
  hndl->regs->CGS_GN1_L_SHF = CSL_IPIPE_CGS_GN1_L_SHF_RESETVAL;
  hndl->regs->CGS_GN1_L_MIN = CSL_IPIPE_CGS_GN1_L_MIN_RESETVAL;
  hndl->regs->CGS_GN1_H_THR = CSL_IPIPE_CGS_GN1_H_THR_RESETVAL;
  hndl->regs->CGS_GN1_H_GAN = CSL_IPIPE_CGS_GN1_H_GAN_RESETVAL;
  hndl->regs->CGS_GN1_H_SHF = CSL_IPIPE_CGS_GN1_H_SHF_RESETVAL;
  hndl->regs->CGS_GN1_H_MIN = CSL_IPIPE_CGS_GN1_H_MIN_RESETVAL;
  hndl->regs->CGS_GN2_L_THR = CSL_IPIPE_CGS_GN2_L_THR_RESETVAL;
  hndl->regs->CGS_GN2_L_GAN = CSL_IPIPE_CGS_GN2_L_GAN_RESETVAL;
  hndl->regs->CGS_GN2_L_SHF = CSL_IPIPE_CGS_GN2_L_SHF_RESETVAL;
  hndl->regs->CGS_GN2_L_MIN = CSL_IPIPE_CGS_GN2_L_MIN_RESETVAL;
  hndl->regs->BOX_EN = CSL_IPIPE_BOX_EN_RESETVAL;
  hndl->regs->BOX_MODE = CSL_IPIPE_BOX_MODE_RESETVAL;
  hndl->regs->BOX_TYP = CSL_IPIPE_BOX_TYP_RESETVAL;
  hndl->regs->BOX_SHF = CSL_IPIPE_BOX_SHF_RESETVAL;
  hndl->regs->BOX_SDR_SAD_H = CSL_IPIPE_BOX_SDR_SAD_H_RESETVAL;
  hndl->regs->BOX_SDR_SAD_L = CSL_IPIPE_BOX_SDR_SAD_L_RESETVAL;
  hndl->regs->RESERVED1 = CSL_IPIPE_RESERVED1_RESETVAL;
  hndl->regs->HST_EN = CSL_IPIPE_HST_EN_RESETVAL;
  hndl->regs->HST_MODE = CSL_IPIPE_HST_MODE_RESETVAL;
  hndl->regs->HST_SEL = CSL_IPIPE_HST_SEL_RESETVAL;
  hndl->regs->HST_PARA = CSL_IPIPE_HST_PARA_RESETVAL;
  hndl->regs->HST_0_VPS = CSL_IPIPE_HST_0_VPS_RESETVAL;
  hndl->regs->HST_0_VSZ = CSL_IPIPE_HST_0_VSZ_RESETVAL;
  hndl->regs->HST_0_HPS = CSL_IPIPE_HST_0_HPS_RESETVAL;
  hndl->regs->HST_0_HSZ = CSL_IPIPE_HST_0_HSZ_RESETVAL;
  hndl->regs->HST_1_VPS = CSL_IPIPE_HST_1_VPS_RESETVAL;
  hndl->regs->HST_1_VSZ = CSL_IPIPE_HST_1_VSZ_RESETVAL;
  hndl->regs->HST_1_HPS = CSL_IPIPE_HST_1_HPS_RESETVAL;
  hndl->regs->HST_1_HSZ = CSL_IPIPE_HST_1_HSZ_RESETVAL;
  hndl->regs->HST_2_VPS = CSL_IPIPE_HST_2_VPS_RESETVAL;
  hndl->regs->HST_2_VSZ = CSL_IPIPE_HST_2_VSZ_RESETVAL;
  hndl->regs->HST_2_HPS = CSL_IPIPE_HST_2_HPS_RESETVAL;
  hndl->regs->HST_2_HSZ = CSL_IPIPE_HST_2_HSZ_RESETVAL;
  hndl->regs->HST_3_VPS = CSL_IPIPE_HST_3_VPS_RESETVAL;
  hndl->regs->HST_3_VSZ = CSL_IPIPE_HST_3_VSZ_RESETVAL;
  hndl->regs->HST_3_HPS = CSL_IPIPE_HST_3_HPS_RESETVAL;
  hndl->regs->HST_3_HSZ = CSL_IPIPE_HST_3_HSZ_RESETVAL;
  hndl->regs->HST_TBL = CSL_IPIPE_HST_TBL_RESETVAL;
  hndl->regs->HST_MUL_R = CSL_IPIPE_HST_MUL_R_RESETVAL;
  hndl->regs->HST_MUL_GR = CSL_IPIPE_HST_MUL_GR_RESETVAL;
  hndl->regs->HST_MUL_GB = CSL_IPIPE_HST_MUL_GB_RESETVAL;
  hndl->regs->HST_MUL_B = CSL_IPIPE_HST_MUL_B_RESETVAL;
  hndl->regs->BSC_EN = CSL_IPIPE_BSC_EN_RESETVAL;
  hndl->regs->BSC_MODE = CSL_IPIPE_BSC_MODE_RESETVAL;
  hndl->regs->BSC_TYP = CSL_IPIPE_BSC_TYP_RESETVAL;
  hndl->regs->BSC_ROW_VCT = CSL_IPIPE_BSC_ROW_VCT_RESETVAL;
  hndl->regs->BSC_ROW_SHF = CSL_IPIPE_BSC_ROW_SHF_RESETVAL;
  hndl->regs->BSC_ROW_VPOS = CSL_IPIPE_BSC_ROW_VPOS_RESETVAL;
  hndl->regs->BSC_ROW_VNUM = CSL_IPIPE_BSC_ROW_VNUM_RESETVAL;
  hndl->regs->BSC_ROW_VSKIP = CSL_IPIPE_BSC_ROW_VSKIP_RESETVAL;
  hndl->regs->BSC_ROW_HPOS = CSL_IPIPE_BSC_ROW_HPOS_RESETVAL;
  hndl->regs->BSC_ROW_HNUM = CSL_IPIPE_BSC_ROW_HNUM_RESETVAL;
  hndl->regs->BSC_ROW_HSKIP = CSL_IPIPE_BSC_ROW_HSKIP_RESETVAL;
  hndl->regs->BSC_COL_VCT = CSL_IPIPE_BSC_COL_VCT_RESETVAL;
  hndl->regs->BSC_COL_SHF = CSL_IPIPE_BSC_COL_SHF_RESETVAL;
  hndl->regs->BSC_COL_VPOS = CSL_IPIPE_BSC_COL_VPOS_RESETVAL;
  hndl->regs->BSC_COL_VNUM = CSL_IPIPE_BSC_COL_VNUM_RESETVAL;
  hndl->regs->BSC_COL_VSKIP = CSL_IPIPE_BSC_COL_VSKIP_RESETVAL;
  hndl->regs->BSC_COL_HPOS = CSL_IPIPE_BSC_COL_HPOS_RESETVAL;
  hndl->regs->BSC_COL_HNUM = CSL_IPIPE_BSC_COL_HNUM_RESETVAL;
  hndl->regs->BSC_COL_HSKIP = CSL_IPIPE_BSC_COL_HSKIP_RESETVAL;

  return CSL_SOK;
}
