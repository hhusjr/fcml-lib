/*
 * FCML - Free Code Manipulation Library.
 * Copyright (C) 2010-2014 Slawomir Wojtasiak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include "fcml_def.h"

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AAA[] = {
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x37, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_NO_OPERANS }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AAD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00580000, { 0xD5, 0x0A, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_NO_OPERANS },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0xD5, 0x00, 0x00 }, { FCML_OP_IB | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AAM[] = {
    { FCML_AMT_GPI, 0x0000, 0x00580000, { 0xD4, 0x0A, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_NO_OPERANS },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0xD4, 0x00, 0x00 }, { FCML_OP_IB | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AAS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x3F, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_NO_OPERANS }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x14, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x15, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C59006, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C59006, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C59006, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x10, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x11, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x12, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_RW, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x13, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x04, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x05, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C58006, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C58006, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C58006, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x00, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x01, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x02, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_RW, FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x03, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x58, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDSUBPD[] = {
    { FCML_AMT_SSE3_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD0, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDSUBPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xD0, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADDSUBPS[] = {
    { FCML_AMT_SSE3_SIMD, 0x2000, 0x00D88000, { 0x0F, 0xD0, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VADDSUBPS[] = {
    { FCML_AMT_AVX_SIMD, 0x2080, 0x00D88000, { 0x0F, 0xD0, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESDEC[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xDE }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESDEC[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0xDE }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESDECLAST[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xDF }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESDECLAST[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0xDF }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESENC[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xDC }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESENC[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0xDC }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESENCLAST[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xDD }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESENCLAST[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0xDD }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESIMC[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xDB }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESIMC[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0xDB }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AESKEYGENASSIST[] = {
    { FCML_AMT_AES, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0xDF }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VAESKEYGENASSIST[] = {
    { FCML_AMT_AVX | FCML_AMT_AES, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0xDF }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_AND[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x24, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x25, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5A006, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C5A006, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5A006, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x20, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x21, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x22, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_RW, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x23, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ANDPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x54, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VANDPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x54, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ANDPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x54, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VANDPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x54, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ANDNPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x55, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VANDNPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x55, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ANDNPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x55, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VANDNPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x55, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ARPL[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00448000, { 0x63, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16_W, FCML_OP_MODRM_R_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLENDPD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x0D }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBLENDPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x0D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLENDPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x0C }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBLENDPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x0C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLENDVPD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x15 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_EXPLICIT_REG( FCML_REG_SIMD, FCML_REG_XMM0, FCML_EOS_XWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBLENDVPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x4B }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLENDVPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x14 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_EXPLICIT_REG( FCML_REG_SIMD, FCML_REG_XMM0, FCML_EOS_XWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBLENDVPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x4A }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BOUND[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00448000, { 0x62, 0x00, 0x00 }, { FCML_OP_MODRM_R, FCML_OP_MODRM_MM_OP_OSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BSF[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xBC, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BSR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xBC, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BSWAP[] = {
    { FCML_AMT_GPI, 0x0010, 0x03D80001, { 0x0F, 0xC8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0008, 0x04980001, { 0x0F, 0xC8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BT[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xA3, 0x00 }, { FCML_OP_MODRM_RM_OP, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00D9A000, { 0x0F, 0xBA, 0x00 }, { FCML_OP_MODRM_RM, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BTC[] = {
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xBB, 0x00 }, { FCML_OP_MODRM_RM_OP, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0807, 0x00D9B800, { 0x0F, 0xBA, 0x00 }, { FCML_OP_MODRM_RM, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BTR[] = {
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xB3, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0807, 0x00D9B000, { 0x0F, 0xBA, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BTS[] = {
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xAB, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0807, 0x00D9A800, { 0x0F, 0xBA, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CALL[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C40000, { 0xE8, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_REL0 },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C59000, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_RM_I, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00440000, { 0x9A, 0x00, 0x00 }, { FCML_OP_FAR_POINTER, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_PTR16_O },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00C59800, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_M_FPI, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16_O }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CBW[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x98, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xF8, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xFC, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLFLUSH[] = {
    { FCML_AMT_SSE2, 0x0000, 0x00D9B800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_8_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLI[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xFA, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLGI[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDD }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLTS[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x06, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xF5, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMOV[] = {
    { FCML_AMT_EDX | FCML_AMT_GPI, 0x0000, 0x00D88040, { 0x0F, 0x40, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_JCXZ[] = {
    { FCML_AMT_GPI, 0x0000, 0x40C40000, { 0xE3, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_JCC[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C40040, { 0x70, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40D80040, { 0x0F, 0x80, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_JMP[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C40000, { 0xEB, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_REL8 },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C40000, { 0xE9, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_REL0 },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x40C5A000, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_RM_I, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00440000, { 0xEA, 0x00, 0x00 }, { FCML_OP_FAR_POINTER, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_PTR16_O },
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00C5A800, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_M_FPI, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16_O }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMP[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x3C, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x3D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5B806, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B806, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5B806, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x38, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x39, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x3A, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_RW, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x3B, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCMPPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xC2, 0x0C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCMPPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPS[] = {
    { FCML_AMT_GPI, 0x0002, 0x00C40000, { 0xA6, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M8_M8 },
    { FCML_AMT_GPI, 0x0002, 0x00C40000, { 0xA7, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_EOSA, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_EOSA, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_MO_MO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCMPSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_PSEUDO_OP( 0x1F ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00DA8000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCMPSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00DA8000, { 0x0F, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_PSEUDO_OP( 0x1F ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPXCHG[] = {
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xB0, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xB1, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CMPXCHGXB[] = {
    { FCML_AMT_GPI, 0x0807, 0x03D98800, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_64_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_GPI, 0x0001, 0x04998800, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_128_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M128 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_COMISD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x2F, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCOMISD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x2F, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_COMISS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2F, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCOMISS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x2F, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CPUID[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D80000, { 0x0F, 0xA2, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CRC32[] = {
    { FCML_AMT_SSE42, 0x2010, 0x03EC8000, { 0x0F, 0x38, 0xF0 }, { FCML_OP_MODRM_R_32_RW, FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM8 },
    { FCML_AMT_SSE42, 0x2008, 0x04AC8000, { 0x0F, 0x38, 0xF0 }, { FCML_OP_MODRM_R_64_RW, FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM8 },
    { FCML_AMT_SSE42, 0x2010, 0x03EC8000, { 0x0F, 0x38, 0xF1 }, { FCML_OP_MODRM_R_32_RW, FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO },
    { FCML_AMT_SSE42, 0x2008, 0x04AC8000, { 0x0F, 0x38, 0xF1 }, { FCML_OP_MODRM_R_64_RW, FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTDQ2PD[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTDQ2PD[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40A0, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTDQ2PS[] = {
    { FCML_AMT_SSE2_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTDQ2PS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPD2DQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPD2DQ[] = {
    { FCML_AMT_AVX_SIMD, 0x2080, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPD2PI[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPD2PS[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPD2PS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, {0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPI2PD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPI2PS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPS2DQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPS2DQ[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPS2PD[] = {
    { FCML_AMT_SSE2_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPS2PD[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTPS2PI[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSD2SI[] = {
    { FCML_AMT_SSE2_SIMD, 0x2010, 0x03D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x2008, 0x04988000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSD2SI[] = {
    { FCML_AMT_AVX_SIMD, 0x20D0, 0x03D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x20C8, 0x04988000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSD2SS[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSD2SS[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSI2SD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x03D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RX_RM32 },
    { FCML_AMT_SSE2_SIMD, 0x2008, 0x04988000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RX_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSI2SD[] = {
    { FCML_AMT_AVX_SIMD, 0x20D0, 0x03D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_32, FCML_NA, FCML_NA }, FCML_AM_RX_RX_RM32 },
    { FCML_AMT_AVX_SIMD, 0x20C8, 0x04988000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_64, FCML_NA, FCML_NA }, FCML_AM_RX_RX_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSI2SS[] = {
    { FCML_AMT_SSE_SIMD, 0x4010, 0x03D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RX_RM32 },
    { FCML_AMT_SSE_SIMD, 0x4008, 0x04988000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RX_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSI2SS[] = {
    { FCML_AMT_AVX_SIMD, 0x40D0, 0x03D88000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_32, FCML_NA, FCML_NA }, FCML_AM_RX_RX_RM32 },
    { FCML_AMT_AVX_SIMD, 0x40C8, 0x04988000, { 0x0F, 0x2A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_64, FCML_NA, FCML_NA }, FCML_AM_RX_RX_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSS2SD[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSS2SD[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x5A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTSS2SI[] = {
    { FCML_AMT_SSE_SIMD, 0x4010, 0x03D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x4008, 0x04988000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTSS2SI[] = {
    { FCML_AMT_AVX_SIMD, 0x40D0, 0x03D88000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40C8, 0x04988000, { 0x0F, 0x2D, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTPD2DQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTTPD2DQ[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xE6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTPD2PI[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTPS2DQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTTPS2DQ[] = {
    { FCML_AMT_AVX_SIMD, 0x4080, 0x00D88000, { 0x0F, 0x5B, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTPS2PI[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTSD2SI[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x03D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RXM64 },
    { FCML_AMT_SSE2_SIMD, 0x2008, 0x04988000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RXM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTTSD2SI[] = {
    { FCML_AMT_AVX_SIMD, 0x20D0, 0x03D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_SIMD_L_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RXM64 },
    { FCML_AMT_AVX_SIMD, 0x20C8, 0x04988000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_SIMD_L_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RXM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CVTTSS2SI[] = {
    { FCML_AMT_SSE_SIMD, 0x4010, 0x03D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x4008, 0x04988000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTTSS2SI[] = {
    { FCML_AMT_AVX_SIMD, 0x4390, 0x03D88000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_SIMD_L_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x4388, 0x04988000, { 0x0F, 0x2C, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_SIMD_L_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CWD_CDQ_CQO[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x99, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DAA[] = {
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x27, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DAS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x2F, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DEC[] = {
    { FCML_AMT_GPI, 0x0807, 0x00C58800, { 0xFE, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C58800, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00440001, { 0x48, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DIV[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5B000, { 0xF6, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_WORD ), FCML_OP_MODRM_RM_8_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R16_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B000, { 0xF7, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AX, FCML_EOS_EOSA ), FCML_OP_MODRM_RM_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DIVPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDIVPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DIVPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDIVPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DIVSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDIVSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DIVSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDIVSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x5E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DPPD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x41 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDPPD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x41 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_DPPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x40 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VDPPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x40 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_EMMS[] = {
    { FCML_AMT_MMX, 0x0000, 0x00D80000, { 0x0F, 0x77, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ENTER[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xC8, 0x00, 0x00 }, { FCML_OP_IW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_EXTRACTPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x17 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VEXTRACTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x17 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_EXTRQ[] = {
    { FCML_AMT_SSE4A, 0x1000, 0x00D98000, { 0x0F, 0x78, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE4A, 0x1000, 0x00D88000, { 0x0F, 0x79, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_F2XM1[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF0, 0x17 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FABS[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE1, 0x17 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FADD[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xC0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xC0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FIADD[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FADDP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xC0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xC1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FBLD[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_OP_80, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FBSTP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_OP_80, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCHS[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE0, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCLEX[] = {
    { FCML_AMT_FPU, 0x0000, 0x00EC0000, { 0x9B, 0xDB, 0xE2 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNCLEX[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDB, 0xE2, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVB[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDA, 0xC0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDA, 0xC8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVBE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDA, 0xD0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVU[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDA, 0xD8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVNB[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xC0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVNE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xC8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVNBE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xD0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCMOVNU[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xD8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOM[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xD0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD8, 0xD1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOMP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xD8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD8, 0xD9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOMPP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xD9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOMI[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xF0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOMIP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDF, 0xF0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FUCOMI[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDB, 0xE8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FUCOMIP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDF, 0xE8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FCOS[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFF, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FDECSTP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF6, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FDIV[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xF0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xF8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FDIVP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xF8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xF9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FIDIV[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FDIVR[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xF8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xF0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FDIVRP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xF0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xF1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FIDIVR[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FFREE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDD, 0xC0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FICOM[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FICOMP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FILD[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FINCSTP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF7, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FINIT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00EC0000, { 0x9B, 0xDB, 0xE3 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNINIT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDB, 0xE3, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FIST[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FISTP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FISTTP[] = {
    { FCML_AMT_SSE3 | FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDF, 0x00, 0x00 }, { FCML_OP_MODRM_M_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE3 | FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE3 | FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLD[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C58000, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_80, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M80 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD9, 0xC0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLD1[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE8, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDL2T[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDL2E[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xEA, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDPI[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xEB, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDLG2[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xEC, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDLN2[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xED, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDZ[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xEE, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDCW[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FLDENV[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_14_28, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FMUL[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xC8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xC8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FMULP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xC8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xC9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FIMUL[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C58800, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNOP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xD0, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FPATAN[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF3, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FPREM[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF8, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FPREM1[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF5, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FPTAN[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF2, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FRNDINT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFC, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FRSTOR[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_94_108, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSAVE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D9B000, { 0x9B, 0xDD, 0x00 }, { FCML_OP_MODRM_M_94_108_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNSAVE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_94_108_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSCALE[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFD, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSIN[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFE, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSINCOS[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFB, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSQRT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xFA, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FST[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C59000, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDD, 0xD0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSTP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C59800, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDB, 0x00, 0x00 }, { FCML_OP_MODRM_M_80_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M80 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDD, 0xD8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSTCW[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D9B800, { 0x9B, 0xD9, 0x00 }, { FCML_OP_MODRM_M_OP_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNSTCW[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_OP_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSTENV[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D9B000, { 0x9B, 0xD9, 0x00 }, { FCML_OP_MODRM_M_14_28_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNSTENV[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B000, { 0xD9, 0x00, 0x00 }, { FCML_OP_MODRM_M_14_28_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSTSW[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D9B800, { 0x9B, 0xDD, 0x00 }, { FCML_OP_MODRM_M_OP_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M2BYTE },
    { FCML_AMT_FPU, 0x0000, 0x00EC0000, { 0x9B, 0xDF, 0xE0 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_AX }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FNSTSW[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5B800, { 0xDD, 0x00, 0x00 }, { FCML_OP_MODRM_M_OP_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M2BYTE },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDF, 0xE0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_AX }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSUB[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xE0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xE8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSUBP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xE8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xE9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FISUB[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A000, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSUBR[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xD8, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xDC, 0x00, 0x00 }, { FCML_OP_MODRM_M_64, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M64 },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD8, 0xE8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDC, 0xE0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FSUBRP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDE, 0xE0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_OP_EXPLICIT_REG( FCML_REG_FPU, FCML_REG_ST0, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST_ST0 },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDE, 0xE1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FISUBR[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xDE, 0x00, 0x00 }, { FCML_OP_MODRM_M_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_FPU, 0x0000, 0x00C5A800, { 0xDA, 0x00, 0x00 }, { FCML_OP_MODRM_M_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FTST[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE4, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FUCOM[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDD, 0xE0, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDD, 0xE1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FUCOMP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xDD, 0xE8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDD, 0xE9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FUCOMPP[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xDA, 0xE9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXAM[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xE5, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXCH[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80001, { 0xD9, 0xC8, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_FPU, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ST0_ST },
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xC9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXRSTOR[] = {
    { FCML_AMT_SIMD | FCML_AMT_FPU, 0x0000, 0x03D98800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXRSTOR64[] = {
    { FCML_AMT_SIMD | FCML_AMT_FPU, 0x0008, 0x04998800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXSAVE[] = {
    { FCML_AMT_SIMD | FCML_AMT_FPU, 0x0000, 0x03D98000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXSAVE64[] = {
    { FCML_AMT_SIMD | FCML_AMT_FPU, 0x0008, 0x04998000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FXTRACT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF4, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FYL2X[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF1, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FYL2XP1[] = {
    { FCML_AMT_FPU, 0x0000, 0x00D80000, { 0xD9, 0xF9, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_GETSEC[] = {
    { FCML_AMT_SMX, 0x0000, 0x00D80000, { 0x0F, 0x37, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_HADDPD[] = {
    { FCML_AMT_SSE3_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x7C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VHADDPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x7C, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_HADDPS[] = {
    { FCML_AMT_SSE3_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x7C, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VHADDPS[] = {
    { FCML_AMT_AVX_SIMD, 0x2080, 0x00D88000, { 0x0F, 0x7C, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_HLT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00C40000, { 0xF4, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_HSUBPD[] = {
    { FCML_AMT_SSE3_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x7D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VHSUBPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x7D, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_HSUBPS[] = {
    { FCML_AMT_SSE3_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x7D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VHSUBPS[] = {
    { FCML_AMT_AVX_SIMD, 0x2080, 0x00D88000, { 0x0F, 0x7D, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVEPT[] = {
    { FCML_AMT_VMX, 0x1000, 0x006C8000, { 0x0F, 0x38, 0x80 }, { FCML_OP_MODRM_R_32, FCML_OP_MODRM_RM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_M128 },
    { FCML_AMT_VMX, 0x1000, 0x00AC8000, { 0x0F, 0x38, 0x80 }, { FCML_OP_MODRM_R_64, FCML_OP_MODRM_RM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_M128 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVVPID[] = {
    { FCML_AMT_VMX, 0x1000, 0x006C8000, { 0x0F, 0x38, 0x81 }, { FCML_OP_MODRM_R_32, FCML_OP_MODRM_RM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_M128 },
    { FCML_AMT_VMX, 0x1000, 0x00AC8000, { 0x0F, 0x38, 0x81 }, { FCML_OP_MODRM_R_64, FCML_OP_MODRM_RM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_M128 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_IDIV[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xF6, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AX, FCML_EOS_WORD ), FCML_OP_MODRM_RM_8_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xF7, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ), FCML_OP_MODRM_RM_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_IMUL[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xF6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xF7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xAF, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM,  FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48004, { 0x6B, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0010, 0x03C48004, { 0x69, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_OP_IMM_EOSA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO_IMMO },
    { FCML_AMT_GPI, 0x0008, 0x04848004, { 0x69, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_RO_RMO_IMMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_IN[] = {
    { FCML_AMT_GPI, 0x0000, 0x07C40000, { 0xE4, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0xE5, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_WORD) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x06C40000, { 0xE5, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_DWORD) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x07C40000, { 0xEC, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0xED, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_WORD ) | FCML_OA_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x06C40000, { 0xED, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INC[] = {
    { FCML_AMT_GPI, 0x0807, 0x00C58000, { 0xFE, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C58000, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00440001, { 0x40, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INS[] = {
    { FCML_AMT_GPI, 0x0004, 0x07C40000, { 0x6C, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M8 },
    { FCML_AMT_GPI, 0x0004, 0x01C40000, { 0x6D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_WORD, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_GPI, 0x0004, 0x06C40000, { 0x6D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_DWORD, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INSERTPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x021 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VINSERTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x21 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INSERTQ[] = {
    { FCML_AMT_SSE4A, 0x2000, 0x00DA8000, { 0x0F, 0x78, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_OP_IB, FCML_NA }, FCML_AM_RX_RX_I8_I8 },
    { FCML_AMT_SSE4A, 0x2000, 0x00DA8000, { 0x0F, 0x79, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RX_RX }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VEXTRACTF128[] = {
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x19 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_YMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VINSERTF128[] = {
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x18 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INT3[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xCC, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INT[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xCD, 0x00, 0x00 }, { FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INTO[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00440000, { 0xCE, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVD[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x08, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVLPG[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D9B800, { 0x0F, 0x01, 0x00 }, { FCML_OP_MODRM_M_UNDEF_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVLPGA[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDF }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EASA ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_ECX, FCML_EOS_DWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_INVPCID[] = {
    { FCML_AMT_SYSTEM, 0x1000, 0x006C8000, { 0x0F, 0x38, 0x82 }, { FCML_OP_MODRM_R_32, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_OWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_MO },
    { FCML_AMT_SYSTEM, 0x1000, 0x00AC8000, { 0x0F, 0x38, 0x82 }, { FCML_OP_MODRM_R_64, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_OWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_MO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_IRET[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xCF, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LAHF[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x9F, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LAR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x03D88000, { 0x0F, 0x02, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM, 0x0000, 0x04988000, { 0x0F, 0x02, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LDDQU[] = {
    { FCML_AMT_SSE3, 0x2000, 0x00D88000, { 0x0F, 0xF0, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_M_UNDEF, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VLDDQU[] = {
    { FCML_AMT_AVX_SIMD, 0x2080, 0x00D88000, { 0x0F, 0xF0, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_UNDEFINED, FCML_EOS_L | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LDMXCSR[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D99000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_32, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VLDMXCSR[] = {
    { FCML_AMT_AVX, 0x00C0, 0x00D99000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_DWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LDS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00448000, { 0xC5, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP_FP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LSS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xB2, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP_FP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LES[] = {
    { FCML_AMT_GPI, 0x0000, 0x00448000, { 0xC4, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP_FP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LFS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xB4, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP_FP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LGS[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xB5, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP_FP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LEA[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x8D, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_UNDEF, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LEAVE[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xC9, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LFENCE[] = {
    { FCML_AMT_SSE2, 0x0000, 0x00EC0000, { 0x0F, 0xAE, 0xE8 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LLWPCB[] = {
    { FCML_AMT_LWP, 0x0450, 0x00DB8000, { 0x09, 0x12, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_LWP, 0x0448, 0x00DB8000, { 0x09, 0x12, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LGDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00599000, { 0x0F, 0x01, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, (FCML_EOS_WORD + FCML_EOS_DWORD) | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM, 0x0000, 0x00999000, { 0x0F, 0x01, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, (FCML_EOS_WORD + FCML_EOS_QWORD) | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LIDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00599800, { 0x0F, 0x01, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, (FCML_EOS_WORD + FCML_EOS_DWORD) | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM, 0x0000, 0x00999800, { 0x0F, 0x01, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, (FCML_EOS_WORD + FCML_EOS_QWORD) | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LLDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D99000, { 0x0F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LMSW[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D9B000, { 0x0F, 0x01, 0x00 }, { FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LODS[] = {
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xAC, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xAD, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_EOSA,FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LOOP[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00C40000, { 0xE2, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LOOPE[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00C40000, { 0xE1, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LOOPNE[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI | FCML_AMT_BRANCH, 0x0000, 0x00C40000, { 0xE0, 0x00, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_R_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LWPINS[] = {
    { FCML_AMT_LWP, 0x0450, 0x00D98000, { 0x0A, 0x12, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_LWP, 0x0448, 0x00D98000, { 0x0A, 0x12, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LWPVAL[] = {
    { FCML_AMT_LWP, 0x0450, 0x00D98800, { 0x0A, 0x12, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_LWP, 0x0448, 0x00D98800, { 0x0A, 0x12, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LSL[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D88000, { 0x0F, 0x03, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LTR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D99800, { 0x0F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MASKMOVDQU[] = {
    { FCML_AMT_SSE2, 0x1000, 0x00DA8000, { 0x0F, 0xF7, 0x00 }, { FCML_OP_R( FCML_REG_SIMD, FCML_EOS_XWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMASKMOVDQU[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DA8000, { 0x0F, 0xF7, 0x00 }, { FCML_OP_R( FCML_REG_SIMD, FCML_EOS_XWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMASKMOVPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x2C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_M_SIMD_OPL, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x2E }, { FCML_OP_MODRM_M_SIMD_OPL_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMASKMOVPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x2D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_M_SIMD_OPL, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x2F }, { FCML_OP_MODRM_M_SIMD_OPL_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMASKMOVD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x8C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_M_SIMD_OPL, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x8E }, { FCML_OP_MODRM_M_SIMD_OPL_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMASKMOVQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x8C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_M_SIMD_OPL, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x8E }, { FCML_OP_MODRM_M_SIMD_OPL_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MASKMOVQ[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00DA8000, { 0x0F, 0xF7, 0x00 }, { FCML_OP_R( FCML_REG_SIMD, FCML_EOS_MWORD ), FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MAXPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMAXPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MAXPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMAXPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MAXSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMAXSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MAXSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMAXSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x5F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MFENCE[] = {
    { FCML_AMT_SSE2, 0x0000, 0x00EC0000, { 0x0F, 0xAE, 0xF0 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MINPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMINPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MINPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMINPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MINSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMINSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MINSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMINSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x5D, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MONITOR[] = {
    { FCML_AMT_SSE3, 0x0000, 0x006C0000, { 0x0F, 0x01, 0xC8 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_DWORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_ECX, FCML_EOS_DWORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EDX, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE3, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xC8 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_RAX, FCML_EOS_QWORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_RCX, FCML_EOS_QWORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_RDX, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOV[] = {
    { FCML_AMT_GPI, 0x0804, 0x00C48000, { 0x88, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0804, 0x00C48000, { 0x89, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x8A, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_W, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x8B, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x8C, 0x00, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_R( FCML_REG_SEG, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM_SR },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x8E, 0x00, 0x00 }, { FCML_OP_R( FCML_REG_SEG, FCML_EOS_WORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_16_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SR_RM },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA0, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_SEGMENT_RELATIVE_OFFSET( FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_MOFF8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA1, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_SEGMENT_RELATIVE_OFFSET( FCML_EOS_EOSA, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_MOFFO },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA2, 0x00, 0x00 }, { FCML_OP_SEGMENT_RELATIVE_OFFSET( FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ) | FCML_OA_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_MOFF8_R8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA3, 0x00, 0x00 }, { FCML_OP_SEGMENT_RELATIVE_OFFSET( FCML_EOS_EOSA, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ) | FCML_OA_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_MOFFO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C40001, { 0xB0, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40001, { 0xB8, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_IMM_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R0_IMM0 },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xC6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0010, 0x03C58000, { 0xC7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IMM_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0008, 0x04858000, { 0xC7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_ID_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_SYSTEM, 0x0000, 0x00588000, { 0x0F, 0x21, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_R( FCML_REG_DR, FCML_EOS_DWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_DR },
    { FCML_AMT_SYSTEM, 0x0000, 0x00988000, { 0x0F, 0x21, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_R( FCML_REG_DR, FCML_EOS_QWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_DR },
    { FCML_AMT_SYSTEM, 0x0000, 0x00588000, { 0x0F, 0x23, 0x00 }, { FCML_OP_R( FCML_REG_DR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_DR_R32 },
    { FCML_AMT_SYSTEM, 0x0000, 0x00988000, { 0x0F, 0x23, 0x00 }, { FCML_OP_R( FCML_REG_DR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_DR_R64 },
    { FCML_AMT_SYSTEM, 0x0000, 0x00588000, { 0x0F, 0x20, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_R( FCML_REG_CR, FCML_EOS_DWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_CR },
    { FCML_AMT_SYSTEM, 0x0000, 0x00988000, { 0x0F, 0x20, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_R( FCML_REG_CR, FCML_EOS_QWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_CR },
    { FCML_AMT_SYSTEM, 0x0000, 0x00588000, { 0x0F, 0x22, 0x00 }, { FCML_OP_R( FCML_REG_CR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_CR_R32 },
    { FCML_AMT_SYSTEM, 0x0000, 0x00988000, { 0x0F, 0x22, 0x00 }, { FCML_OP_R( FCML_REG_CR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_CR_R64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVAPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x28, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x29, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVAPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x28, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x29, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVAPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x28, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x29, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVAPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x28, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x29, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVBE[] = {
    { FCML_AMT_GPI, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0xF0 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_M_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0xF1 }, { FCML_OP_MODRM_M_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVD[] = {
    { FCML_AMT_MMX_SIMD, 0x0010, 0x03D88000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0010, 0x03D88000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_MMX, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1010, 0x03D88000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1010, 0x03D88000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVD[] = {
    { FCML_AMT_AVX_SIMD, 0x10D0, 0x00D88000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10D0, 0x00D88000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVQ[] = {
    { FCML_AMT_MMX_SIMD, 0x0008, 0x04988000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1008, 0x04988000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0008, 0x04988000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_MMX, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1008, 0x04988000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x6F, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x7F, 0x00 }, { FCML_OP_MODRM_RM_MMX_OP_W, FCML_OP_MODRM_R_MMX, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD6, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C8, 0x04988000, { 0x0F, 0x6E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C8, 0x04988000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x7E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD6, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVDDUP[] = {
    { FCML_AMT_SSE3_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVDDUP[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x20A0, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVDQA[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x6F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x7F, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVDQA[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x6F, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x7F, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVDQU[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x6F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x7F, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVDQU[] = {
    { FCML_AMT_AVX_SIMD, 0x4080, 0x00D88000, { 0x0F, 0x6F, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x4080, 0x00D88000, { 0x0F, 0x7F, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVDQ2Q[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00DA8000, { 0x0F, 0xD6, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVHLPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00DA8000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVHLPS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00DA8000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVHPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x17, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVHPD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x17, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_XMM_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVHPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_MWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x17, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_MWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVHPS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_M_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x17, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVLHPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVLHPS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVLPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x13, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVLPD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x13, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_XMM_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVLPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x13, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVLPS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_M_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x13, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVMSKPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x005A8000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x009A8000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVMSKPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00588000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00988000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVMSKPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00588000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00988000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVMSKPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00588000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00988000, { 0x0F, 0x50, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTDQA[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x2A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_UNDEFINED, FCML_EOS_XWORD | FCML_EOS_OPT, FCML_RMF_M ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVNTDQA[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x2A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_M_OP_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x2A }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_M_OP_YMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTDQ[] = {
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0xE7, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_UNDEFINED, FCML_EOS_XWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVNTDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE7, 0x00 }, { FCML_OP_MODRM_M_OP_XMM_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTI[] = {
    { FCML_AMT_SSE2, 0x0010, 0x03D88000, { 0x0F, 0xC3, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_DWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_32 , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2, 0x0008, 0x04988000, { 0x0F, 0xC3, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_64 , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTPD[] = {
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_UNDEFINED, FCML_EOS_XWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVNTPD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_MODRM_M_OP_XMM_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_UNDEFINED, FCML_EOS_XWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVNTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_MODRM_M_OP_XMM_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTSD[] = {
    { FCML_AMT_SSE4A, 0x2000, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTSS[] = {
    { FCML_AMT_SSE4A, 0x4000, 0x00D88000, { 0x0F, 0x2B, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_DWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_XMM , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVNTQ[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE7, 0x00 }, { FCML_OP_RM( FCML_REG_UNDEFINED, FCML_EOS_UNDEFINED, FCML_EOS_MWORD | FCML_EOS_OPT, FCML_RMF_M ) | FCML_OA_W, FCML_OP_MODRM_R_MMX , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVQ2DQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0xD6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVS[] = {
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xA4, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M8_M8 },
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xA5, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_EOSA,FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_EOSA,FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_MO_MO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_M_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSHDUP[] = {
    { FCML_AMT_SSE3_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVSHDUP[] = {
    { FCML_AMT_AVX_SIMD, 0x4080, 0x00D88000, { 0x0F, 0x16, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSLDUP[] = {
    { FCML_AMT_SSE3_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVSLDUP[] = {
    { FCML_AMT_AVX_SIMD, 0x4080, 0x00D88000, { 0x0F, 0x12, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00DA8000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00DA8000, { 0x0F, 0x11, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_M_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_M_OP_32_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSX[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xBE, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x03D88000, { 0x0F, 0xBF, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM16 },
    { FCML_AMT_GPI, 0x0008, 0x04988000, { 0x0F, 0xBF, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVSXD[] = {
    { FCML_AMT_GPI, 0x0008, 0x04848000, { 0x63, 0x00, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVUPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVUPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVUPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_XMM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMOVUPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x10, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x11, 0x00 }, { FCML_OP_MODRM_RM_SIMD_L_OP_W, FCML_OP_MODRM_R_SIMD_L, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MOVZX[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xB6, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x03D88000, { 0x0F, 0xB7, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM16 },
    { FCML_AMT_GPI, 0x0000, 0x04988000, { 0x0F, 0xB7, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RM16 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MPSADBW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x42 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMPSADBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x42 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x42 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MUL[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xF6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xF7, 0x00, 0x00 }, { FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MULPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMULPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MULPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMULPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MULSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMULSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MULSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMULSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x59, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MWAIT[] = {
    { FCML_AMT_SSE3, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xC9 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_NEG[] = {
    { FCML_AMT_GPI, 0x0807, 0x00C59800, { 0xF6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C59800, { 0xF7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_NOP[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x90, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x00D98000, { 0x0F, 0x1F, 0x00 }, { FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_NOT[] = {
    { FCML_AMT_GPI, 0x0807, 0x00C59000, { 0xF6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C59000, { 0xF7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_OR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x0C, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x0D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C58804, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C58804, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C58804, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x08, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x09, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x0A, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_RW, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x0B, 0x00, 0x00 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ORPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x56, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VORPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x56, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ORPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x56, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VORPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x56, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_OUT[] = {
    { FCML_AMT_GPI, 0x0000, 0x07C40000, { 0xE6, 0x00, 0x00 }, { FCML_OP_IB, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0xE7, 0x00, 0x00 }, { FCML_OP_IB, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_WORD), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x06C40000, { 0xE7, 0x00, 0x00 }, { FCML_OP_IB, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_DWORD), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x07C40000, { 0xEE, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0xEF, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_WORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x06C40000, { 0xEF, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_DWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_OUTS[] = {
    { FCML_AMT_GPI, 0x0004, 0x07C40000, { 0x6E, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M8 },
    { FCML_AMT_GPI, 0x0004, 0x01C40000, { 0x6F, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_WORD, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M16 },
    { FCML_AMT_GPI, 0x0004, 0x06C40000, { 0x6F, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_DX, FCML_EOS_WORD ), FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_SI, FCML_EOS_DWORD, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_M32 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PABSW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x1D }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x1D }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PABSB[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x1C }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x1C }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PABSD[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x1E }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x1E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPABSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x1C }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x1C }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPABSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x1D }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x1D }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPABSD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x1E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x1E }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPACKSSWB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x63, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x63, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PACKSSWB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x63, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x63, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPACKSSDW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x6B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x6B, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PACKSSDW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x6B, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x6B, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PACKUSDW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x2B }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPACKUSDW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x2B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x2B }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PACKUSWB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x67, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x67, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPACKUSWB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x67, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x67, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xFD, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xFD, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD4, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD4, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xFD, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xFD, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xFC, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xFC, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xFE, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xFE, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xFC, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xFC, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xFE, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xFE, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xED, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xED, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDSB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xEC, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xEC, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDSW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xED, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xED, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xEC, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xEC, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDUSW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDD, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDD, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDUSB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDC, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDC, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDUSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDD, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDD, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPADDUSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDC, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDC, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PADDQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD4, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD4, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PALIGNR[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x3A, 0x00F }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x00F }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPALIGNR[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x0F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x0F }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PAND[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDB, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDB, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPAND[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDB, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDB, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PANDN[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDF, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDF, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPANDN[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDF, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDF, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PAUSE[] = {
    { FCML_AMT_SSE2, 0x4000, 0x00C40000, { 0x90, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PAVGW[] = {
    { FCML_AMT_MMX, 0x0000, 0x00D88000, { 0x0F, 0xE3, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE3, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PAVGB[] = {
    { FCML_AMT_MMX, 0x0000, 0x00D88000, { 0x0F, 0xE0, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE0, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPAVGW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE3, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPAVGB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE0, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE0, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PBLENDVB[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x10 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_EXPLICIT_REG( FCML_REG_SIMD, FCML_REG_XMM0, FCML_EOS_OWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBLENDVB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x4C }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x4C }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PBLENDW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x0E }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBLENDW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x0E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x3A, 0x0E }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBLENDD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x02 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCLMULQDQ[] = {
    { FCML_AMT_CLMUL, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x44 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCLMULQDQ[] = {
    { FCML_AMT_AVX_SIMD | FCML_AMT_CLMUL, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x44 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPEQB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x74, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x74, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPEQW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x75, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x75, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPEQD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x76, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x76, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPEQD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x76, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x76, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPEQW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x75, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x75, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPEQB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x74, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x74, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPEQQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x29 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPEQQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x29 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x29 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPESTRI[] = {
    { FCML_AMT_SSE42_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x61 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPESTRI[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x61 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPESTRM[] = {
    { FCML_AMT_SSE42_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x60 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPESTRM[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x60 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPGTW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x65, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x65, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPGTD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x66, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x66, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPGTB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x64, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x64, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPGTW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x65, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x65, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPGTD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x66, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x66, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPGTB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x64, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x64, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPGTQ[] = {
    { FCML_AMT_SSE42_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x37 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPGTQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x37 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x37 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPISTRI[] = {
    { FCML_AMT_SSE42_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x63 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPISTRI[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x63 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PCMPISTRM[] = {
    { FCML_AMT_SSE42_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x62 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMPISTRM[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x62 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPEXTRB[] = {
    { FCML_AMT_AVX_SIMD, 0x12C0, 0x40EC8000, { 0x0F, 0x3A, 0x14 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_BYTE | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPEXTRQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C8, 0x04AC8000, { 0x0F, 0x3A, 0x16 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PEXTRQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1008, 0x04AC8000, { 0x0F, 0x3A, 0x16 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_QWORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PEXTRB[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x40EC8000, { 0x0F, 0x3A, 0x14 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_BYTE | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PEXTRD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x40EC8000, { 0x0F, 0x3A, 0x16 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_DWORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPEXTRD[] = {
    { FCML_AMT_AVX_SIMD, 0x13D0, 0x40EC8000, { 0x0F, 0x3A, 0x16 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_DWORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PEXTRW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x40D88000, { 0x0F, 0xC5, 0x00 }, { FCML_OP_R(FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x40D88000, { 0x0F, 0xC5, 0x00 }, { FCML_OP_R(FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x40EC8000, { 0x0F, 0x3A, 0x15 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_R(FCML_REG_SIMD, FCML_EOS_XWORD), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPEXTRW[] = {
    { FCML_AMT_AVX_SIMD, 0x13C0, 0x40D88000, { 0x0F, 0xC5, 0x00 }, { FCML_OP_R(FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x13C0, 0x40EC8000, { 0x0F, 0x3A, 0x15 }, { FCML_OP_RM(FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_OP_R(FCML_REG_SIMD, FCML_EOS_XWORD), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x01 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x01 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x02 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x02 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHADDD[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x02 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x02 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHADDW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x01 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x01 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHADDSW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x03 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x03 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x03 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x03 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHMINPOSUW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x41 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHMINPOSUW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x41 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHSUBD[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x06 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x06 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHSUBW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x05 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x05 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x06 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x06 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x05 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x05 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PHSUBSW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x07 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x07 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x07 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x07 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PINSRD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x03EC8000, { 0x0F, 0x3A, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPINSRQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_OP_64, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PINSRQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1008, 0x04AC8000, { 0x0F, 0x3A, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PINSRB[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x20 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM(FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_BYTE | FCML_EOS_OPT, FCML_RMF_RM ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPINSRD[] = {
    { FCML_AMT_AVX_SIMD, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_OP_32, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPINSRB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x20 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_RM(FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_BYTE | FCML_EOS_OPT, FCML_RMF_RM ), FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PINSRW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xC4, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_RM(FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xC4, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_RM(FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPINSRW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xC4, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_RM(FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ), FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMADDUBSW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x04 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x04 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMADDUBSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x04 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x04 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMADDWD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF5, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF5, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMADDWD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xF5, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xF5, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXSB[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3C }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3C }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3C }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXSD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3D }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXSD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3D }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3D }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXSW[] = {
    { FCML_AMT_MMX, 0x0000, 0x00D88000, { 0x0F, 0xEE, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE, 0x1000, 0x00D88000, { 0x0F, 0xEE, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xEE, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xEE, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXUB[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDE, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDE, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXUB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDE, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDE, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXUD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3F }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXUD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3F }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMAXUW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3E }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMAXUW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3E }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINSB[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x38 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x38 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x38 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINSD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x39 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINSD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x39 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x39 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINSW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xEA, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xEA, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xEA, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xEA, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINUB[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xDA, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xDA, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINUB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xDA, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xDA, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINUW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3A }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINUW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3A }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMINUD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x3B }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMINUD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x3B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x3B }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVMSKB[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x40D88000, { 0x0F, 0xD7, 0x00 }, { FCML_OP_R(FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x40D88000, { 0x0F, 0xD7, 0x00 }, { FCML_OP_R(FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVMSKB[] = {
    { FCML_AMT_AVX_SIMD, 0x13C0, 0x40DA8000, { 0x0F, 0xD7, 0x22 }, { FCML_OP_MODRM_R_W, FCML_OP_VEX_VVVV_REG( FCML_REG_SIMD, FCML_EOS_XWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x13A0, 0x40DA8000, { 0x0F, 0xD7, 0x22 }, { FCML_OP_MODRM_R_W, FCML_OP_VEX_VVVV_REG( FCML_REG_SIMD, FCML_EOS_YWORD ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXBQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x22 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXBW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x20 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXWQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x24 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXWQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x24 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXWD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x23 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXBD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x21 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x25 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXWD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x23 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXBQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x22 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x20 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x20 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVSXDQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x25 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVSXBD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x21 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x21 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXWD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x33 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXDQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x35 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x35 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXWQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x34 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXBQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x32 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x32 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXBQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x32 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXWD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x33 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x33 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXBD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x31 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x31 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXWQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x34 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXBD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x31 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMOVZXBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x30 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x30 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMOVZXBW[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x30 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULDQ[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x28 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x28 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x28 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULHRSW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x0B }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x0B }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULHRSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x0B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x0B }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULHUW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE4, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE4, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULHUW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE4, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE4, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULHW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE5, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE5, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULHW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE5, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE5, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULUDQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF4, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF4, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULUDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xF4, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xF4, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULLW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD5, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD5, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULLW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD5, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD5, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PMULLD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x40 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMULLD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x40 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x40 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POP[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C58080, { 0x8F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C40081, { 0x58, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x1F, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_DS, FCML_EOS_UNDEFINED ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x07, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_ES, FCML_EOS_UNDEFINED ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x17, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_SS, FCML_EOS_UNDEFINED ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00D80080, { 0x0F, 0xA1, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_FS, FCML_EOS_UNDEFINED ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SR_FSGSO },
    { FCML_AMT_GPI, 0x0000, 0x00D80080, { 0x0F, 0xA9, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_GS, FCML_EOS_UNDEFINED ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SR_FSGSO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPA[] = {
    { FCML_AMT_GPI, 0x0000, 0x01440000, { 0x61, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPAD[] = {
    { FCML_AMT_GPI, 0x0000, 0x02440000, { 0x61, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPCNT[] = {
    { FCML_AMT_POPCNT, 0x4000, 0x00D88000, { 0x0F, 0xB8, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPF[] = {
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0x9D, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPFQ[] = {
    { FCML_AMT_GPI, 0x0000, 0x04840000, { 0x9D, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POPFD[] = {
    { FCML_AMT_GPI, 0x0000, 0x02440000, { 0x9D, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_POR[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xEB, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xEB, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPOR[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xEB, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xEB, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCHT2[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D99800, { 0x0F, 0x18, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCHT1[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D99000, { 0x0F, 0x18, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCHNTA[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D98000, { 0x0F, 0x18, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCHT0[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D98800, { 0x0F, 0x18, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSADBW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF6, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF6, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSADBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xF6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xF6, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSHUFB[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHUFB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSHUFD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHUFD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSHUFHW[] = {
    { FCML_AMT_SSE2_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHUFHW[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x40A0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSHUFLW[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHUFLW[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x20A0, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSHUFW[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x70, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSIGNB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x08 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x08 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSIGND[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x0A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x0A }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSIGNW[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x09 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x09 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSIGNB[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x08 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x08 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSIGNW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x38, 0x09 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x09 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSIGND[] = {
    { FCML_AMT_SSSE3_SIMD, 0x0000, 0x00EC8000, { 0x0F, 0x38, 0x0A }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSSE3_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x0A }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSLLDQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBB800, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DBB800, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00DBB800, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_YWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSLLW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF1, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF1, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DBB000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBB000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSLLD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF2, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DBB000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBB000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSLLQ[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF3, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF3, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DBB000, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBB000, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLW[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xF1, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00DBB000, { 0x0F, 0x71, 0x00 }, { FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xF2, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00DBB000, { 0x0F, 0x72, 0x00 }, { FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLQ[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xF3, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00DBB000, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_L, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRAW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE1, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DBA000, { 0x0F, 0x71, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00DBA000, { 0x0F, 0x71, 0x00 }, { FCML_OP_VEX_VVVV_YMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_YWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRAD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE2, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DBA000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBA000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRAW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE1, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE1, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DBA000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DBA000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRAD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE2, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DBA000, { 0x0F, 0x72, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00DBA000, { 0x0F, 0x72, 0x00 }, { FCML_OP_VEX_VVVV_YMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_YWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRLDQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DB9800, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DB9800, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00DB9800, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_YMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_YWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DB9000, { 0x0F, 0x73, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRLQ[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD3, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD3, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DB9000, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DB9000, { 0x0F, 0x73, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRLD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD2, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD2, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DB9000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_MWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DB9000, { 0x0F, 0x72, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSRLW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD1, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD1, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00DB9000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00DB9000, { 0x0F, 0x71, 0x00 }, { FCML_OP_RM(FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD2, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DB9000, { 0x0F, 0x72, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD1, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00DB9000, { 0x0F, 0x71, 0x00 }, { FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00DB9000, { 0x0F, 0x71, 0x00 }, { FCML_OP_VEX_VVVV_YMM_REG | FCML_OA_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_YWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xFA, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xFA, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xFA, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xFA, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF9, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF9, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xF8, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xF8, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xF8, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xF8, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xF9, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xF9, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xFB, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xFB, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xFB, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xFB, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBSB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE8, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE8, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE9, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE9, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xE8, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xE8, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBSW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xE9, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xE9, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBUSW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD9, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD9, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSUBUSB[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xD8, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xD8, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBUSB[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD8, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD8, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PSUBUSW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xD9, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xD9, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPTEST[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x17 }, { FCML_OP_MODRM_R_SIMD_L, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PTEST[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0x17 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKLBW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x60, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0x60, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKLQDQ[] = {
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0x6C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKLWD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x61, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x61, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKLQDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x6C, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x6C, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKLBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x60, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x60, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKLWD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x61, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0x61, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKLDQ[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x62, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2, 0x1000, 0x00D88000, { 0x0F, 0x62, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKLDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x62, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x62, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKHWD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x69, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x69, 0x00 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKHDQ[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x6A, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x6A, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKHWD[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x69, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x69, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKHQDQ[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x6D, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKHQDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x6D, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x6D, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKHBW[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x68, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x68, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUNPCKHBW[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x68, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x68, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPUNPCKHDQ[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x6A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0x6A, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSH[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5B080, { 0xFF, 0x00, 0x00 }, { FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C40081, { 0x50, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_W , FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C40004, { 0x6A, 0x00, 0x00 }, { FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40084, { 0x68, 0x00, 0x00 }, { FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_IMMO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x1E, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_DS, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x06, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_ES, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x16, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_SS, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00440000, { 0x0E, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_CS, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SRO },
    { FCML_AMT_GPI, 0x0000, 0x00D80080, { 0x0F, 0xA0, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_FS, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SR_FSGSO },
    { FCML_AMT_GPI, 0x0000, 0x00D80080, { 0x0F, 0xA8, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_SEG, FCML_REG_GS, FCML_EOS_UNDEFINED ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_SR_FSGSO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSHA[] = {
    { FCML_AMT_GPI, 0x0000, 0x01440000, { 0x60, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSHAD[] = {
    { FCML_AMT_GPI, 0x0000, 0x02440000, { 0x60, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSHF[] = {
    { FCML_AMT_GPI, 0x0000, 0x01C40000, { 0x9C, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSHFQ[] = {
    { FCML_AMT_GPI, 0x0000, 0x00840080, { 0x9C, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PUSHFD[] = {
    { FCML_AMT_GPI, 0x0000, 0x02440000, { 0x9C, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PXOR[] = {
    { FCML_AMT_MMX_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xEF, 0x00 }, { FCML_OP_MODRM_R_MMX_RW, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xEF, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPXOR[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0xEF, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00D88000, { 0x0F, 0xEF, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RCL[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C59000, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RCR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA },  FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C59800, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROL[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA },  FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C58800, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RCPPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x53, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VRCPPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x53, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RCPSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x53, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VRCPSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x53, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDFSBASE[] = {
    { FCML_AMT_SYSTEM, 0x4000, 0x03998000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM, 0x4000, 0x04998000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDGSBASE[] = {
    { FCML_AMT_SYSTEM, 0x4000, 0x03998800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM, 0x4000, 0x04998800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDRAND[] = {
    { FCML_AMT_RDRAND, 0x0000, 0x00DBB000, { 0x0F, 0xC7, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDTSCP[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xF9 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDTSC[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x31, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDPMC[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x33, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDMSR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x32, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RET[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40080, { 0xC3, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40080, { 0xC2, 0x00, 0x00 }, { FCML_OP_IW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RETF[] = {
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xCB, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI | FCML_AMT_CTI, 0x0000, 0x00C40000, { 0xCA, 0x00, 0x00 }, { FCML_OP_IW, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROUNDPD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x09 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VROUNDPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x09 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROUNDPS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x08 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VROUNDPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x3A, 0x08 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROUNDSD[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x0B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VROUNDSD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x0B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ROUNDSS[] = {
    { FCML_AMT_SSE41_SIMD, 0x1000, 0x00EC8000, { 0x0F, 0x3A, 0x0A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VROUNDSS[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00EC8000, { 0x0F, 0x3A, 0x0A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RSM[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00580000, { 0x0F, 0xAA, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VRSQRTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x52, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RSQRTPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x52, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RSQRTSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x52, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VRSQRTSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x52, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SAHF[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0x9E, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SAR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5B800, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHL_SAL[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5A000, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xD0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xD2, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xC0, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xD1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_IB(1), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xD3, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO },
    { FCML_AMT_GPI, 0x0000, 0x00C5A800, { 0xC1, 0x00, 0x00 }, { FCML_OP_MODRM_RM_RW, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SBB[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x1C, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x1D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C59806, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C59806, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C59806, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x18, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x19, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x1A, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_W, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x1B, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SCAS[] = {
    { FCML_AMT_GPI, 0x0002, 0x00C40000, { 0xAE, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0002, 0x00C40000, { 0xAF, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_EOSA,FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SETCC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88040, { 0x0F, 0x90, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SFENCE[] = {
    { FCML_AMT_SSE, 0x0000, 0x00EC0000, { 0x0F, 0xAE, 0xF8 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SGDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D98000, { 0x0F, 0x01, 0x00 }, { FCML_OP_MODRM_M_UNDEF, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHLD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xA4, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xA5, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHRD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xAC, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R,FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x00D88000, { 0x0F, 0xAD, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R,FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_CL, FCML_EOS_BYTE ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SKINIT[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDE }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_DWORD ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDE }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SLWPCB[] = {
    { FCML_AMT_LWP, 0x0450, 0x00DB8800, { 0x09, 0x12, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_LWP, 0x0448, 0x00DB8800, { 0x09, 0x12, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHUFPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0xC6, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSHUFPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0xC6, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHUFPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0xC6, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSHUFPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0xC6, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SIDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D98800, { 0x0F, 0x01, 0x00 }, { FCML_OP_MODRM_M_UNDEF, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SLDT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D98000, { 0x0F, 0x00, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SMSW[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D9A000, { 0x0F, 0x01, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_WORD | FCML_EOS_OPT, FCML_RMF_RM ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SQRTPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSQRTPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SQRTPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSQRTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SQRTSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSQRTSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SQRTSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSQRTSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x51, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xF9, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STD[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xFD, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STGI[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDC }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STI[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xFB, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STMXCSR[] = {
    { FCML_AMT_SSE, 0x0000, 0x00D99800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSTMXCSR[] = {
    { FCML_AMT_AVX, 0x00C0, 0x00D99800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_32_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STOS[] = {
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xAA, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8 },
    { FCML_AMT_GPI, 0x0004, 0x00C40000, { 0xAB, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_DI, FCML_EOS_EOSA,FCML_SEG_ENCODE_REGISTER( FCML_REG_ES, FCML_SEG_DENY_OVERRIDE ) ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D98800, { 0x0F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SUB[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x2C, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x2D, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5A806, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C5A806, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5A806, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x28, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x29, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x2A, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_W, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x2B, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SUBPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSUBPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SUBPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSUBPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SUBSD[] = {
    { FCML_AMT_SSE2_SIMD, 0x2000, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSUBSD[] = {
    { FCML_AMT_AVX_SIMD, 0x20C0, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SUBSS[] = {
    { FCML_AMT_SSE_SIMD, 0x4000, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VSUBSS[] = {
    { FCML_AMT_AVX_SIMD, 0x40C0, 0x00D88000, { 0x0F, 0x5C, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SWAPGS[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xF8 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SYSCALL[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00980000, { 0x0F, 0x05, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SYSENTER[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x34, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SYSEXIT[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x35, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SYSRET[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00980000, { 0x0F, 0x07, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_T1MSKC[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D9B800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_TBM, 0x0448, 0x00D9B800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_TEST[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA8, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ) | FCML_OA_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xA9, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xF6, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C58000, { 0xF7, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x84, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48000, { 0x85, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UCOMISD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x2E, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUCOMISD[] = {
    { FCML_AMT_AVX_SIMD, 0x10C0, 0x00D88000, { 0x0F, 0x2E, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UCOMISS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x2E, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUCOMISS[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D88000, { 0x0F, 0x2E, 0x00 }, { FCML_OP_MODRM_R_XMM, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UD2[] = {
    { FCML_AMT_GPI, 0x0000, 0x00D80000, { 0x0F, 0x0B, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UNPCKHPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x15, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUNPCKHPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x15, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UNPCKHPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x15, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUNPCKHPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x15, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UNPCKLPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x14, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUNPCKLPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x14, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_UNPCKLPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x14, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VUNPCKLPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x14, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMPTRLD[] = {
    { FCML_AMT_VMX, 0x0000, 0x0099B000, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMPTRST[] = {
    { FCML_AMT_VMX, 0x0000, 0x0099B800, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMCLEAR[] = {
    { FCML_AMT_VMX, 0x1000, 0x0099B800, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMREAD[] = {
    { FCML_AMT_VMX, 0x0000, 0x00588000, { 0x0F, 0x78, 0x00 }, { FCML_OP_MODRM_RM_OP_32_W, FCML_OP_MODRM_R_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_VMX, 0x0000, 0x00988000, { 0x0F, 0x78, 0x00 }, { FCML_OP_MODRM_RM_OP_64_W, FCML_OP_MODRM_R_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMWRITE[] = {
    { FCML_AMT_VMX, 0x0000, 0x00588000, { 0x0F, 0x79, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_VMX, 0x0000, 0x00988000, { 0x0F, 0x79, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMLAUNCH[] = {
    { FCML_AMT_VMX, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xC2 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMRESUME[] = {
    { FCML_AMT_VMX, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xC3 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMXOFF[] = {
    { FCML_AMT_VMX, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xC4 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMXON[] = {
    { FCML_AMT_VMX, 0x4000, 0x0099B000, { 0x0F, 0xC7, 0x00 }, { FCML_OP_MODRM_M_OP_64_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMCALL[] = {
    { FCML_AMT_VMX, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xC1 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMFUNC[] = {
    { FCML_AMT_VMX, 0x0000, 0x00AC0000, { 0x0F, 0x01, 0xD4 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBROADCASTSD[] = {
    { FCML_AMT_AVX_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x19 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A0, 0x00EC8000, { 0x0F, 0x38, 0x19 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_XWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBROADCASTSS[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00EC8000, { 0x0F, 0x38, 0x18 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_M_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x1080, 0x00EE8000, { 0x0F, 0x38, 0x18 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_RM( FCML_REG_SIMD, FCML_EOS_OWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBROADCASTI128[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x5A }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_M_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VBROADCASTF128[] = {
    { FCML_AMT_AVX_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x1A }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_M_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBROADCASTB[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x78 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_XMM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBROADCASTW[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x79 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_XMM_OP_16, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBROADCASTD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x58 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPBROADCASTQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x59 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPH2PS[] = {
    { FCML_AMT_F16C, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x13 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_F16C, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x13 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VCVTPS2PH[] = {
    { FCML_AMT_F16C, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x1D }, { FCML_OP_MODRM_RM_XMM_OP_64_W, FCML_OP_MODRM_R_XMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_F16C, 0x10B0, 0x00EC8000, { 0x0F, 0x3A, 0x1D }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_YMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VERR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D9A000, { 0x0F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VERW[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D9A800, { 0x0F, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_16, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMLOAD[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDA }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EASA ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMMCALL[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD9 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMRUN[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD8 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EASA ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VMSAVE[] = {
    { FCML_AMT_SVM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xDB }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EASA ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMILPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x0D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x05 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMILPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x0C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x04 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLVQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x47 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSLLVD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x47 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLVD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x45 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRLVQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x45 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSRAVD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x46 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMD[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x36 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMPD[] = {
    { FCML_AMT_AVX2_SIMD, 0x10A8, 0x00EC8000, { 0x0F, 0x3A, 0x01 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x10A8, 0x00EC8000, { 0x0F, 0x3A, 0x00 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMPS[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x16 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERM2F128[] = {
    { FCML_AMT_AVX_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x3A, 0x06 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERM2I128[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x3A, 0x46 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_YMM_OP_256, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VEXTRACTI128[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x3A, 0x39 }, { FCML_OP_MODRM_RM_XMM_OP_128_W, FCML_OP_MODRM_R_YMM, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VINSERTI128[] = {
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x3A, 0x38 }, { FCML_OP_MODRM_R_YMM_W, FCML_OP_VEX_VVVV_YMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VTESTPS[] = {
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x0E }, { FCML_OP_MODRM_R_SIMD_L, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VTESTPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x0F }, { FCML_OP_MODRM_R_SIMD_L, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VGATHERDPD[] = {
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x92 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VGATHERQPD[] = {
    { FCML_AMT_AVX2_SIMD, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x93 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A8, 0x00EC8000, { 0x0F, 0x38, 0x93 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VGATHERDPS[] = {
    { FCML_AMT_AVX2_SIMD, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x92 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x92 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VGATHERQPS[] = {
    { FCML_AMT_AVX2_SIMD, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x93 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x93 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPGATHERDD[] = {
    { FCML_AMT_AVX2_SIMD, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x90 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x90 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPGATHERQD[] = {
    { FCML_AMT_AVX2_SIMD, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x91 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10B0, 0x00EC8000, { 0x0F, 0x38, 0x91 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_XMM_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPGATHERDQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x90 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_DWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPGATHERQQ[] = {
    { FCML_AMT_AVX2_SIMD, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x91 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VSIB(FCML_VSIB_XMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_AVX2_SIMD, 0x10A8, 0x00EC8000, { 0x0F, 0x38, 0x91 }, { FCML_OP_MODRM_R_YMM_RW, FCML_OP_VSIB(FCML_VSIB_YMM,FCML_EOS_QWORD | FCML_EOS_OPT), FCML_OP_VEX_VVVV_SIMD_REG | FCML_OA_RW, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VZEROALL[] = {
    { FCML_AMT_AVX_SIMD, 0x00A0, 0x00D80000, { 0x0F, 0x77, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VZEROUPPER[] = {
    { FCML_AMT_AVX_SIMD, 0x00C0, 0x00D80000, { 0x0F, 0x77, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_WAIT[] = {
    { FCML_AMT_FPU, 0x0000, 0x00C40000, { 0x9B, 0x00, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_WBINVD[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x09, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_WRFSBASE[] = {
    { FCML_AMT_SYSTEM | FCML_AMT_FSGSBASE, 0x4010, 0x03DB9000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM | FCML_AMT_FSGSBASE, 0x4008, 0x049B9000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_WRGSBASE[] = {
    { FCML_AMT_SYSTEM | FCML_AMT_FSGSBASE, 0x4010, 0x03DB9800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_DWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_SYSTEM | FCML_AMT_FSGSBASE, 0x4008, 0x049B9800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_QWORD, FCML_EOS_UNDEFINED, FCML_RMF_R ), FCML_NA , FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_WRMSR[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00D80000, { 0x0F, 0x30, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XADD[] = {
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xC0, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00D88000, { 0x0F, 0xC1, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XCHG[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40001, { 0x90, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0000, 0x00C40001, { 0x90, 0x00, 0x00 }, { FCML_OP_OPCODE_REG( FCML_REG_GPR, FCML_EOS_EOSA) | FCML_OA_RW, FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_EAX, FCML_EOS_EOSA ) | FCML_OA_RW, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x86, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_RW, FCML_OP_MODRM_R_8_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x86, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_W, FCML_OP_MODRM_RM_OP_8_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x87, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_RW, FCML_OP_MODRM_R_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x0807, 0x00C48000, { 0x87, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP_W, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XGETBV[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD0 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XLAT[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40000, { 0xD7, 0x00, 0x00 }, { FCML_OP_EXPLICIT_GPS_REG_ADDRESSING( FCML_REG_BX, FCML_EOS_BYTE, FCML_SEG_ENCODE_REGISTER( FCML_REG_DS, FCML_SEG_ALLOW_OVERRIDE ) ), FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XOR[] = {
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x34, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_BYTE ), FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ER8_IMM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C40002, { 0x35, 0x00, 0x00 }, { FCML_OP_EXPLICIT_REG( FCML_REG_GPR, FCML_REG_AL, FCML_EOS_EOSA ) | FCML_OA_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_ERO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5B006, { 0x80, 0x00, 0x00 }, { FCML_OP_MODRM_RM_8_W, FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C5B006, { 0x81, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMMO },
    { FCML_AMT_GPI, 0x0807, 0x00C5B006, { 0x83, 0x00, 0x00 }, { FCML_OP_MODRM_RM_W, FCML_OP_IB_EX_EOSA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_IMM8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x30, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_8_W, FCML_OP_MODRM_R_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RM8_R8 },
    { FCML_AMT_GPI, 0x0807, 0x00C48002, { 0x31, 0x00, 0x00 }, { FCML_OP_MODRM_RM_OP_W, FCML_OP_MODRM_R, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RMO_RO },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x32, 0x00, 0x00 }, { FCML_OP_MODRM_R_8_W, FCML_OP_MODRM_RM_OP_8, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R8_RM8 },
    { FCML_AMT_GPI, 0x0000, 0x00C48002, { 0x33, 0x00, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_RO_RMO }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XORPD[] = {
    { FCML_AMT_SSE2_SIMD, 0x1000, 0x00D88000, { 0x0F, 0x57, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VXORPD[] = {
    { FCML_AMT_AVX_SIMD, 0x1080, 0x00D88000, { 0x0F, 0x57, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XORPS[] = {
    { FCML_AMT_SSE_SIMD, 0x0000, 0x00D88000, { 0x0F, 0x57, 0x00 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VXORPS[] = {
    { FCML_AMT_AVX_SIMD, 0x0080, 0x00D88000, { 0x0F, 0x57, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XRSTOR[] = {
    { FCML_AMT_SYSTEM, 0x0010, 0x03D9A800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XRSTOR64[] = {
    { FCML_AMT_SYSTEM, 0x0008, 0x0499A800, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XSAVE[] = {
    { FCML_AMT_SYSTEM, 0x0010, 0x03D9A000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XSAVE64[] = {
    { FCML_AMT_SYSTEM, 0x0008, 0x0499A000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_OP_512B_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XSAVEOPT[] = {
    { FCML_AMT_SYSTEM, 0x0010, 0x03D9B000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_UNDEF_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XSAVEOPT64[] = {
    { FCML_AMT_SYSTEM, 0x0008, 0x0499B000, { 0x0F, 0xAE, 0x00 }, { FCML_OP_MODRM_M_UNDEF_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XSETBV[] = {
    { FCML_AMT_SYSTEM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD1 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

/****************
* AMD 3D Now!
****************/

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_FEMMS[] = {
    { FCML_AMT_3DNOW, 0x0000, 0x00D80000, { 0x0F, 0x0E, 0x00 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

fcml_st_def_instruction_code_desc fcml_st_def_instruction_code_def_AMD3DNOW[] = {
	{ F_PAVGUSB, 0xBF },
	{ F_PF2ID, 0x1D },
	{ F_PFACC, 0xAE },
	{ F_PFADD, 0x9E },
	{ F_PFCMPEQ, 0xB0 },
	{ F_PFCMPGE, 0x90 },
	{ F_PFCMPGT, 0xA0 },
	{ F_PFMAX, 0xA4 },
	{ F_PFMIN, 0x94 },
	{ F_PFMUL, 0xB4 },
	{ F_PFRCP, 0x96 },
	{ F_PFRCPIT1, 0xA6 },
	{ F_PFRCPIT2, 0xB6 },
	{ F_PFRSQIT1, 0xA7 },
	{ F_PFRSQRT, 0x97 },
	{ F_PFSUB, 0x9A },
	{ F_PFSUBR, 0xAA },
	{ F_PI2FD, 0x0D },
	{ F_PMULHRW, 0xB7 },
	{ F_PF2IW, 0x1C },
	{ F_PFNACC, 0x8A },
	{ F_PFPNACC, 0x8E },
	{ F_PI2FW, 0x0C },
	{ F_PSWAPD, 0xBB },
	{ 0, 0 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MI_AMD3DNOW[] = {
    { FCML_AMT_3DNOW_SIMD, 0x8000, 0x00D88000, { 0x0F, 0x0F, 0x00 }, { FCML_OP_MODRM_R_MMX_W, FCML_OP_MODRM_RM_MMX_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCH[] = {
    { FCML_AMT_3DNOW | FCML_AMT_PRFCHW, 0x0000, 0x00D98000, { 0x0F, 0x0D, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PREFETCHW[] = {
    { FCML_AMT_3DNOW | FCML_AMT_PRFCHW, 0x0000, 0x00D98800, { 0x0F, 0x0D, 0x00 }, { FCML_OP_MODRM_M_OP_8, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xA8 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x69 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x69 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x98 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xB8 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x68 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x68 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xB8 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x98 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xA8 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD132SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x99 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD213SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xA9 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSD[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x6B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x6B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD231SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xB9 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD132SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x99 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD213SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xA9 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSS[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x6A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x6A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADD231SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xB9 }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x96 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xA6 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUBPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x5D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x5D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xB6 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xB6 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUBPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x5C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x5C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x96 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMADDSUB213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xA6 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADDPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x5F }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x5F }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xA7 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x97 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xB7 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADDPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x5E }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x5E }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xA7 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x97 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBADD231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xB7 }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xAA }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x6D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x6D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x9A }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xBA }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xAA }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x6C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x6C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x9A }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xBA }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBSD[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x6F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x6F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB231SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xBB }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB132SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x9B }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB213SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xAB }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB231SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xBB }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB213SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xAB }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUB132SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x9B }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFMSUBSS[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x6E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x6E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xBC }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADDPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x79 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x79 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x9C }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xAC }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xBC }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x9C }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xAC }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADDPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x78 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x78 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD213SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xAD }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADDSD[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x7B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x7B }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD231SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xBD }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD132SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x9D }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD213SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xAD }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADDSS[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x7A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x7A }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD231SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xBD }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMADD132SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x9D }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB132PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0x9E }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB213PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xAE }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB231PD[] = {
    { FCML_AMT_FMA, 0x1088, 0x00EC8000, { 0x0F, 0x38, 0xBE }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUBPD[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x7D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x7D }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUBPS[] = {
    { FCML_AMT_FMA4, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x7C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x7C }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB213PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xAE }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB132PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0x9E }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB231PS[] = {
    { FCML_AMT_FMA, 0x1090, 0x00EC8000, { 0x0F, 0x38, 0xBE }, { FCML_OP_MODRM_R_SIMD_L_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUBSD[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x7F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x7F }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB231SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xBF }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB213SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0xAF }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB132SD[] = {
    { FCML_AMT_FMA, 0x10C8, 0x00EC8000, { 0x0F, 0x38, 0x9F }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUBSS[] = {
    { FCML_AMT_FMA4, 0x10D0, 0x00EC8000, { 0x0F, 0x3A, 0x7E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_FMA4, 0x10C8, 0x00EC8000, { 0x0F, 0x3A, 0x7E }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB132SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0x9F }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB213SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xAF }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFNMSUB231SS[] = {
    { FCML_AMT_FMA, 0x10D0, 0x00EC8000, { 0x0F, 0x38, 0xBF }, { FCML_OP_MODRM_R_XMM_RW, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ANDN[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02D0, 0x00EC8000, { 0x0F, 0x38, 0xF2 }, { FCML_OP_MODRM_R_32_RW, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA }, FCML_AM_R32A_RM32_R32B },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02C8, 0x00EC8000, { 0x0F, 0x38, 0xF2 }, { FCML_OP_MODRM_R_64_RW, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_R64A_RM64_R64B }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BEXR[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02D0, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_R32A_RM32_R32B },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02C8, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_R64A_RM64_R64B }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BEXTR[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x0550, 0x00D88000, { 0x0A, 0x10, 0x00 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x0548, 0x00D88000, { 0x0A, 0x10, 0x00 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_ID, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLCFILL[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D98800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D98800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLCI[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D9B000, { 0x09, 0x02, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D9B000, { 0x09, 0x02, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLCIC[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D9A800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D9A800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLCMSK[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D98800, { 0x09, 0x02, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D98800, { 0x09, 0x02, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLCS[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D99800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D99800, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLSFILL[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D99000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D99000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLSI[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02D0, 0x00ED9800, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02C8, 0x00ED9800, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLSIC[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D9B000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_TBM, 0x0448, 0x00D9B000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLSMSK[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02D0, 0x00ED9000, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02C8, 0x00ED9000, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BLSR[] = {
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02D0, 0x00ED8800, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R32_RM32 },
    { FCML_AMT_BMI1 | FCML_AMT_VEXx, 0x02C8, 0x00ED8800, { 0x0F, 0x38, 0xF3 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_R64_RM64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_BZHI[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x02D0, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_R32_RM32_R32 },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x02C8, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_R64_RM64_R64 }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_LZCNT[] = {
    { FCML_AMT_ABM, 0x4000, 0x00D88000, { 0x0F, 0xBD, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_MULX[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22D0, 0x00EC8000, { 0x0F, 0x38, 0xF6 }, { FCML_OP_MODRM_R_32_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22C8, 0x00EC8000, { 0x0F, 0x38, 0xF6 }, { FCML_OP_MODRM_R_64_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PDEP[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22D0, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_32_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22C8, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_64_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_PEXT[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x42D0, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_32_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x42C8, 0x00EC8000, { 0x0F, 0x38, 0xF5 }, { FCML_OP_MODRM_R_64_W, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RORX[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22D0, 0x00EC8000, { 0x0F, 0x3A, 0xF0 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22C8, 0x00EC8000, { 0x0F, 0x3A, 0xF0 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHLX[] = {
    { FCML_AMT_GPI, 0x12D0, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_GPI, 0x12C8, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SHRX[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22D0, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x22C8, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_SARX[] = {
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x42D0, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_32_W, FCML_OP_MODRM_RM_OP_32, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_BMI2 | FCML_AMT_VEXx, 0x42C8, 0x00EC8000, { 0x0F, 0x38, 0xF7 }, { FCML_OP_MODRM_R_64_W, FCML_OP_MODRM_RM_OP_64, FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ), FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_TZCNT[] = {
    { FCML_AMT_BMI1, 0x4000, 0x00D88000, { 0x0F, 0xBC, 0x00 }, { FCML_OP_MODRM_R_W, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_TZMSK[] = {
    { FCML_AMT_TBM, 0x0450, 0x00D9A000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_DWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_TBM, 0x0448, 0x00D9A000, { 0x09, 0x01, 0x00 }, { FCML_OP_VEX_VVVV_REG( FCML_REG_GPR, FCML_EOS_QWORD ) | FCML_OA_W, FCML_OP_MODRM_RM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XABORT[] = {
    { FCML_AMT_RTM, 0x0000, 0x00D80000, { 0xC6, 0xF8, 0x00 }, { FCML_OP_IB, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XBEGIN[] = {
    { FCML_AMT_RTM, 0x0000, 0x40D80000, { 0xC7, 0xF8, 0x00 }, { FCML_OP_IMMEDIATE_DIS_RELATIVE_EOSA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XEND[] = {
    { FCML_AMT_RTM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD5 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_XTEST[] = {
    { FCML_AMT_HLE | FCML_AMT_RTM, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xD6 }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADCX[] = {
    { FCML_AMT_ADX, 0x1000, 0x00EC8000, { 0x0F, 0x38, 0xF6 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_ADOX[] = {
    { FCML_AMT_ADX, 0x4000, 0x00EC8000, { 0x0F, 0x38, 0xF6 }, { FCML_OP_MODRM_R_RW, FCML_OP_MODRM_RM_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_RDSEED[] = {
    { FCML_AMT_RDSEED, 0x0000, 0x00DBB800, { 0x0F, 0xC7, 0x00 }, { FCML_OP_RM( FCML_REG_GPR, FCML_EOS_EOSA, FCML_EOS_UNDEFINED, FCML_RMF_R ) | FCML_OA_W, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_CLAC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xCA }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_STAC[] = {
    { FCML_AMT_GPI, 0x0000, 0x00EC0000, { 0x0F, 0x01, 0xCB }, { FCML_NA, FCML_NA, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};
struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFRCZPD[] = {
    { FCML_AMT_XOP, 0x0510, 0x00D88000, { 0x09, 0x81, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFRCZPS[] = {
    { FCML_AMT_XOP, 0x0510, 0x00D88000, { 0x09, 0x80, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFRCZSD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0x83, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_64, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VFRCZSS[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0x82, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_32, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCMOV[] = {
    { FCML_AMT_XOP, 0x0410, 0x00D88000, { 0x08, 0xA2, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0408, 0x00D88000, { 0x08, 0xA2, 0x00 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMB[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xCC, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xCD, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xCE, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMQ[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xCF, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMUB[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xEC, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMUW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xED, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMUD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xEE, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPCOMUQ[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xEF, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_PSEUDO_OP( 0x07 ), FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMIL2PD[] = {
    { FCML_AMT_XOP, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x49 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_SRC ), FCML_OP_OPERAND_IS5( FCML_ISF_IS5_M2Z ) }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x49 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_SRC ), FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_M2Z ) }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPERMIL2PS[] = {
    { FCML_AMT_XOP, 0x1090, 0x00EC8000, { 0x0F, 0x3A, 0x48 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_SRC ), FCML_OP_OPERAND_IS5( FCML_ISF_IS5_M2Z ) }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x1088, 0x00EC8000, { 0x0F, 0x3A, 0x48 }, { FCML_OP_MODRM_R_SIMD_L_W, FCML_OP_VEX_VVVV_SIMD_REG, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_SRC ), FCML_OP_MODRM_RM_SIMD_L_OP, FCML_OP_OPERAND_IS5( FCML_ISF_IS5_M2Z ) }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDBD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDBW[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xC1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDBQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xC3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDDQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xCB, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUBD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xD2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUBQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xD3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUBW[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xD1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUDQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xDB, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUWD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xD6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDUWQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xD7, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDWD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xC6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHADDWQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xC7, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBBW[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xE1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBDQ[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xE3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPHSUBWD[] = {
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x09, 0xE2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSDD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x9E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSDQH[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x9F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSDQL[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x97, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSSDD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x8E, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSSDQH[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x8F, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSSDQL[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x87, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSSWD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x86, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSSWW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x85, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSWD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x96, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMACSWW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0x95, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMADCSSWD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xA6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPMADCSWD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xB6, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPPERM[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x08, 0xA3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_OPERAND_IS4, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x08, 0xA3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_OPERAND_IS4, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPROTD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x92, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x92, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x08, 0xC2, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPROTB[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x90, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x90, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x08, 0xC0, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPROTQ[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x93, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x93, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x08, 0xC3, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPROTW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x91, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x91, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0550, 0x00D88000, { 0x08, 0xC1, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_IB, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHAB[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x98, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x98, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHAD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x9A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x9A, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHAQ[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x9B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x9B, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHAW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x99, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x99, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHLB[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x94, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x94, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHLD[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x96, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x96, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHLQ[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x97, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x97, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_addr_mode_desc fcml_st_def_addr_mode_desc_VPSHLW[] = {
    { FCML_AMT_XOP, 0x0450, 0x00D88000, { 0x09, 0x95, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_MODRM_RM_XMM_OP_128, FCML_OP_VEX_VVVV_XMM_REG, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN },
    { FCML_AMT_XOP, 0x0448, 0x00D88000, { 0x09, 0x95, 0x00 }, { FCML_OP_MODRM_R_XMM_W, FCML_OP_VEX_VVVV_XMM_REG, FCML_OP_MODRM_RM_XMM_OP_128, FCML_NA, FCML_NA }, FCML_AM_UNKNOWN }
};

struct fcml_st_def_instruction_desc fcml_ext_instructions_def[] = {
	FCML_IA_INSTRUCTION( F_AAA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AAA ),
	FCML_IA_INSTRUCTION( F_AAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AAD ),
	FCML_IA_INSTRUCTION( F_AAM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AAM ),
	FCML_IA_INSTRUCTION( F_AAS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AAS ),
	FCML_IA_INSTRUCTION( F_ADC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADC ),
	FCML_IA_INSTRUCTION( F_ADD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADD ),
	FCML_IA_INSTRUCTION( F_ADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDPD ),
	FCML_IA_INSTRUCTION( F_VADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDPD ),
	FCML_IA_INSTRUCTION( F_ADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDPS ),
	FCML_IA_INSTRUCTION( F_VADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDPS ),
	FCML_IA_INSTRUCTION( F_ADDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDSD ),
	FCML_IA_INSTRUCTION( F_VADDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDSD ),
	FCML_IA_INSTRUCTION( F_ADDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDSS ),
	FCML_IA_INSTRUCTION( F_VADDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDSS ),
	FCML_IA_INSTRUCTION( F_ADDSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDSUBPD ),
	FCML_IA_INSTRUCTION( F_VADDSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDSUBPD ),
	FCML_IA_INSTRUCTION( F_ADDSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADDSUBPS ),
	FCML_IA_INSTRUCTION( F_VADDSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VADDSUBPS ),
	FCML_IA_INSTRUCTION( F_AESDEC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESDEC ),
	FCML_IA_INSTRUCTION( F_VAESDEC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESDEC ),
	FCML_IA_INSTRUCTION( F_AESDECLAST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESDECLAST ),
	FCML_IA_INSTRUCTION( F_VAESDECLAST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESDECLAST ),
	FCML_IA_INSTRUCTION( F_AESENC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESENC ),
	FCML_IA_INSTRUCTION( F_VAESENC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESENC ),
	FCML_IA_INSTRUCTION( F_AESENCLAST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESENCLAST ),
	FCML_IA_INSTRUCTION( F_VAESENCLAST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESENCLAST ),
	FCML_IA_INSTRUCTION( F_AESIMC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESIMC ),
	FCML_IA_INSTRUCTION( F_VAESIMC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESIMC ),
	FCML_IA_INSTRUCTION( F_AESKEYGENASSIST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AESKEYGENASSIST ),
	FCML_IA_INSTRUCTION( F_VAESKEYGENASSIST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VAESKEYGENASSIST ),
	FCML_IA_INSTRUCTION( F_AND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_AND ),
	FCML_IA_INSTRUCTION( F_ANDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ANDPD ),
	FCML_IA_INSTRUCTION( F_VANDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VANDPD ),
	FCML_IA_INSTRUCTION( F_ANDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ANDPS ),
	FCML_IA_INSTRUCTION( F_VANDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VANDPS ),
	FCML_IA_INSTRUCTION( F_ANDNPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ANDNPD ),
	FCML_IA_INSTRUCTION( F_VANDNPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VANDNPD ),
	FCML_IA_INSTRUCTION( F_ANDNPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ANDNPS ),
	FCML_IA_INSTRUCTION( F_VANDNPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VANDNPS ),
	FCML_IA_INSTRUCTION( F_ARPL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ARPL ),
	FCML_IA_INSTRUCTION( F_BLENDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLENDPD ),
	FCML_IA_INSTRUCTION( F_VBLENDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBLENDPD ),
	FCML_IA_INSTRUCTION( F_BLENDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLENDPS ),
	FCML_IA_INSTRUCTION( F_VBLENDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBLENDPS ),
	FCML_IA_INSTRUCTION( F_BLENDVPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLENDVPD ),
	FCML_IA_INSTRUCTION( F_VBLENDVPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBLENDVPD ),
	FCML_IA_INSTRUCTION( F_BLENDVPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLENDVPS ),
	FCML_IA_INSTRUCTION( F_VBLENDVPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBLENDVPS ),
	FCML_IA_INSTRUCTION( F_BOUND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BOUND ),
	FCML_IA_INSTRUCTION( F_BSF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BSF ),
	FCML_IA_INSTRUCTION( F_BSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BSR ),
	FCML_IA_INSTRUCTION( F_BSWAP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BSWAP ),
	FCML_IA_INSTRUCTION( F_BT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BT ),
	FCML_IA_INSTRUCTION( F_BTC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BTC ),
	FCML_IA_INSTRUCTION( F_BTR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BTR ),
	FCML_IA_INSTRUCTION( F_BTS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BTS ),
	FCML_IA_INSTRUCTION( F_CALL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CALL ),
	FCML_IA_INSTRUCTION( F_CBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CBW ),
	FCML_IA_INSTRUCTION( F_CLC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLC ),
	FCML_IA_INSTRUCTION( F_CLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLD ),
	FCML_IA_INSTRUCTION( F_CLFLUSH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLFLUSH ),
	FCML_IA_INSTRUCTION( F_CLI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLI ),
	FCML_IA_INSTRUCTION( F_CLGI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLGI ),
	FCML_IA_INSTRUCTION( F_CLTS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLTS ),
	FCML_IA_INSTRUCTION( F_CMC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMC ),
	FCML_IA_INSTRUCTION( F_CMOV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMOV ),
	FCML_IA_INSTRUCTION( F_CMP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMP ),
	FCML_IA_INSTRUCTION( F_CMPPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPPD ),
	FCML_IA_INSTRUCTION( F_VCMPPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCMPPD ),
	FCML_IA_INSTRUCTION( F_CMPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPPS ),
	FCML_IA_INSTRUCTION( F_VCMPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCMPPS ),
	FCML_IA_INSTRUCTION( F_CMPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPS ),
	FCML_IA_INSTRUCTION( F_CMPSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPSD ),
	FCML_IA_INSTRUCTION( F_VCMPSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCMPSD ),
	FCML_IA_INSTRUCTION( F_CMPSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPSS ),
	FCML_IA_INSTRUCTION( F_VCMPSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCMPSS ),
	FCML_IA_INSTRUCTION( F_CMPXCHG, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPXCHG ),
	FCML_IA_INSTRUCTION( F_CMPXCHGxB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CMPXCHGXB ),
	FCML_IA_INSTRUCTION( F_COMISD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_COMISD ),
	FCML_IA_INSTRUCTION( F_VCOMISD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCOMISD ),
	FCML_IA_INSTRUCTION( F_COMISS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_COMISS ),
	FCML_IA_INSTRUCTION( F_VCOMISS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCOMISS ),
	FCML_IA_INSTRUCTION( F_CPUID, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CPUID ),
	FCML_IA_INSTRUCTION( F_CRC32, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CRC32 ),
	FCML_IA_INSTRUCTION( F_CVTDQ2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTDQ2PD ),
	FCML_IA_INSTRUCTION( F_VCVTDQ2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTDQ2PD ),
	FCML_IA_INSTRUCTION( F_CVTDQ2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTDQ2PS ),
	FCML_IA_INSTRUCTION( F_VCVTDQ2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTDQ2PS ),
	FCML_IA_INSTRUCTION( F_CVTPD2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPD2DQ ),
	FCML_IA_INSTRUCTION( F_VCVTPD2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPD2DQ ),
	FCML_IA_INSTRUCTION( F_CVTPD2PI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPD2PI ),
	FCML_IA_INSTRUCTION( F_CVTPD2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPD2PS ),
	FCML_IA_INSTRUCTION( F_VCVTPD2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPD2PS ),
	FCML_IA_INSTRUCTION( F_CVTPI2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPI2PD ),
	FCML_IA_INSTRUCTION( F_CVTPI2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPI2PS ),
	FCML_IA_INSTRUCTION( F_CVTPS2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPS2DQ ),
	FCML_IA_INSTRUCTION( F_VCVTPS2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPS2DQ ),
	FCML_IA_INSTRUCTION( F_CVTPS2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPS2PD ),
	FCML_IA_INSTRUCTION( F_VCVTPS2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPS2PD ),
	FCML_IA_INSTRUCTION( F_CVTPS2PI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTPS2PI ),
	FCML_IA_INSTRUCTION( F_CVTSD2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSD2SI ),
	FCML_IA_INSTRUCTION( F_VCVTSD2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSD2SI ),
	FCML_IA_INSTRUCTION( F_CVTSD2SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSD2SS ),
	FCML_IA_INSTRUCTION( F_VCVTSD2SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSD2SS ),
	FCML_IA_INSTRUCTION( F_CVTSI2SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSI2SD ),
	FCML_IA_INSTRUCTION( F_VCVTSI2SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSI2SD ),
	FCML_IA_INSTRUCTION( F_CVTSI2SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSI2SS ),
	FCML_IA_INSTRUCTION( F_VCVTSI2SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSI2SS ),
	FCML_IA_INSTRUCTION( F_CVTSS2SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSS2SD ),
	FCML_IA_INSTRUCTION( F_VCVTSS2SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSS2SD ),
	FCML_IA_INSTRUCTION( F_CVTSS2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTSS2SI ),
	FCML_IA_INSTRUCTION( F_VCVTSS2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTSS2SI ),
	FCML_IA_INSTRUCTION( F_CVTTPD2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTPD2DQ ),
	FCML_IA_INSTRUCTION( F_VCVTTPD2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTTPD2DQ ),
	FCML_IA_INSTRUCTION( F_CVTTPD2PI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTPD2PI ),
	FCML_IA_INSTRUCTION( F_CVTTPS2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTPS2DQ ),
	FCML_IA_INSTRUCTION( F_VCVTTPS2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTTPS2DQ ),
	FCML_IA_INSTRUCTION( F_CVTTPS2PI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTPS2PI ),
	FCML_IA_INSTRUCTION( F_CVTTSD2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTSD2SI ),
	FCML_IA_INSTRUCTION( F_VCVTTSD2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTTSD2SI ),
	FCML_IA_INSTRUCTION( F_CVTTSS2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CVTTSS2SI ),
	FCML_IA_INSTRUCTION( F_VCVTTSS2SI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTTSS2SI ),
	FCML_IA_INSTRUCTION( F_CWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CWD_CDQ_CQO ),
	FCML_IA_INSTRUCTION( F_DAA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DAA ),
	FCML_IA_INSTRUCTION( F_DAS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DAS ),
	FCML_IA_INSTRUCTION( F_DEC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DEC ),
	FCML_IA_INSTRUCTION( F_DIV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DIV ),
	FCML_IA_INSTRUCTION( F_DIVPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DIVPD ),
	FCML_IA_INSTRUCTION( F_VDIVPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDIVPD ),
	FCML_IA_INSTRUCTION( F_DIVPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DIVPS ),
	FCML_IA_INSTRUCTION( F_VDIVPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDIVPS ),
	FCML_IA_INSTRUCTION( F_DIVSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DIVSD ),
	FCML_IA_INSTRUCTION( F_VDIVSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDIVSD ),
	FCML_IA_INSTRUCTION( F_DIVSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DIVSS ),
	FCML_IA_INSTRUCTION( F_VDIVSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDIVSS ),
	FCML_IA_INSTRUCTION( F_DPPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DPPD ),
	FCML_IA_INSTRUCTION( F_VDPPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDPPD ),
	FCML_IA_INSTRUCTION( F_DPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_DPPS ),
	FCML_IA_INSTRUCTION( F_VDPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VDPPS ),
	FCML_IA_INSTRUCTION( F_EMMS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_EMMS ),
	FCML_IA_INSTRUCTION( F_ENTER, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ENTER ),
	FCML_IA_INSTRUCTION( F_EXTRACTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_EXTRACTPS ),
	FCML_IA_INSTRUCTION( F_VEXTRACTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VEXTRACTPS ),
	FCML_IA_INSTRUCTION( F_EXTRQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_EXTRQ ),
	FCML_IA_INSTRUCTION( F_F2XM1, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_F2XM1 ),
	FCML_IA_INSTRUCTION( F_FABS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FABS ),
	FCML_IA_INSTRUCTION( F_FADD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FADD ),
	FCML_IA_INSTRUCTION( F_FIADD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FIADD ),
	FCML_IA_INSTRUCTION( F_FADDP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FADDP ),
	FCML_IA_INSTRUCTION( F_FBLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FBLD ),
	FCML_IA_INSTRUCTION( F_FBSTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FBSTP ),
	FCML_IA_INSTRUCTION( F_FCHS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCHS ),
	FCML_IA_INSTRUCTION( F_FCLEX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCLEX ),
	FCML_IA_INSTRUCTION( F_FNCLEX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNCLEX ),
	FCML_IA_INSTRUCTION( F_FCMOVB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVB ),
	FCML_IA_INSTRUCTION( F_FCMOVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVE ),
	FCML_IA_INSTRUCTION( F_FCMOVBE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVBE ),
	FCML_IA_INSTRUCTION( F_FCMOVU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVU ),
	FCML_IA_INSTRUCTION( F_FCMOVNB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVNB ),
	FCML_IA_INSTRUCTION( F_FCMOVNE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVNE ),
	FCML_IA_INSTRUCTION( F_FCMOVNBE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVNBE ),
	FCML_IA_INSTRUCTION( F_FCMOVNU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCMOVNU ),
	FCML_IA_INSTRUCTION( F_FCOM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOM ),
	FCML_IA_INSTRUCTION( F_FCOMP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOMP ),
	FCML_IA_INSTRUCTION( F_FCOMPP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOMPP ),
	FCML_IA_INSTRUCTION( F_FCOMI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOMI ),
	FCML_IA_INSTRUCTION( F_FCOMIP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOMIP ),
	FCML_IA_INSTRUCTION( F_FUCOMI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FUCOMI ),
	FCML_IA_INSTRUCTION( F_FUCOMIP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FUCOMIP ),
	FCML_IA_INSTRUCTION( F_FCOS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FCOS ),
	FCML_IA_INSTRUCTION( F_FDECSTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FDECSTP ),
	FCML_IA_INSTRUCTION( F_FDIV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FDIV ),
	FCML_IA_INSTRUCTION( F_FDIVP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FDIVP ),
	FCML_IA_INSTRUCTION( F_FIDIV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FIDIV ),
	FCML_IA_INSTRUCTION( F_FDIVR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FDIVR ),
	FCML_IA_INSTRUCTION( F_FDIVRP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FDIVRP ),
	FCML_IA_INSTRUCTION( F_FIDIVR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FIDIVR ),
	FCML_IA_INSTRUCTION( F_FFREE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FFREE ),
	FCML_IA_INSTRUCTION( F_FICOM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FICOM ),
	FCML_IA_INSTRUCTION( F_FICOMP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FICOMP ),
	FCML_IA_INSTRUCTION( F_FILD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FILD ),
	FCML_IA_INSTRUCTION( F_FINCSTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FINCSTP ),
	FCML_IA_INSTRUCTION( F_FINIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FINIT ),
	FCML_IA_INSTRUCTION( F_FNINIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNINIT ),
	FCML_IA_INSTRUCTION( F_FIST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FIST ),
	FCML_IA_INSTRUCTION( F_FISTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FISTP ),
	FCML_IA_INSTRUCTION( F_FISTTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FISTTP ),
	FCML_IA_INSTRUCTION( F_FLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLD ),
	FCML_IA_INSTRUCTION( F_FLD1, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLD1 ),
	FCML_IA_INSTRUCTION( F_FLDL2T, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDL2T ),
	FCML_IA_INSTRUCTION( F_FLDL2E, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDL2E ),
	FCML_IA_INSTRUCTION( F_FLDPI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDPI ),
	FCML_IA_INSTRUCTION( F_FLDLG2, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDLG2 ),
	FCML_IA_INSTRUCTION( F_FLDLN2, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDLN2 ),
	FCML_IA_INSTRUCTION( F_FLDZ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDZ ),
	FCML_IA_INSTRUCTION( F_FLDCW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDCW ),
	FCML_IA_INSTRUCTION( F_FLDENV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FLDENV ),
	FCML_IA_INSTRUCTION( F_FMUL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FMUL ),
	FCML_IA_INSTRUCTION( F_FMULP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FMULP ),
	FCML_IA_INSTRUCTION( F_FIMUL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FIMUL ),
	FCML_IA_INSTRUCTION( F_FNOP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNOP ),
	FCML_IA_INSTRUCTION( F_FPATAN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FPATAN ),
	FCML_IA_INSTRUCTION( F_FPREM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FPREM ),
	FCML_IA_INSTRUCTION( F_FPREM1, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FPREM1 ),
	FCML_IA_INSTRUCTION( F_FPTAN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FPTAN ),
	FCML_IA_INSTRUCTION( F_FRNDINT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FRNDINT ),
	FCML_IA_INSTRUCTION( F_FRSTOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FRSTOR ),
	FCML_IA_INSTRUCTION( F_FSAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSAVE ),
	FCML_IA_INSTRUCTION( F_FNSAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNSAVE ),
	FCML_IA_INSTRUCTION( F_FSCALE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSCALE ),
	FCML_IA_INSTRUCTION( F_FSIN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSIN ),
	FCML_IA_INSTRUCTION( F_FSINCOS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSINCOS ),
	FCML_IA_INSTRUCTION( F_FSQRT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSQRT ),
	FCML_IA_INSTRUCTION( F_FST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FST ),
	FCML_IA_INSTRUCTION( F_FSTP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSTP ),
	FCML_IA_INSTRUCTION( F_FSTCW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSTCW ),
	FCML_IA_INSTRUCTION( F_FNSTCW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNSTCW ),
	FCML_IA_INSTRUCTION( F_FSTENV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSTENV ),
	FCML_IA_INSTRUCTION( F_FNSTENV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNSTENV ),
	FCML_IA_INSTRUCTION( F_FSTSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSTSW ),
	FCML_IA_INSTRUCTION( F_FNSTSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FNSTSW ),
	FCML_IA_INSTRUCTION( F_FSUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSUB ),
	FCML_IA_INSTRUCTION( F_FSUBP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSUBP ),
	FCML_IA_INSTRUCTION( F_FISUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FISUB ),
	FCML_IA_INSTRUCTION( F_FSUBR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSUBR ),
	FCML_IA_INSTRUCTION( F_FSUBRP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FSUBRP ),
	FCML_IA_INSTRUCTION( F_FISUBR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FISUBR ),
	FCML_IA_INSTRUCTION( F_FTST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FTST ),
	FCML_IA_INSTRUCTION( F_FUCOM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FUCOM ),
	FCML_IA_INSTRUCTION( F_FUCOMP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FUCOMP ),
	FCML_IA_INSTRUCTION( F_FUCOMPP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FUCOMPP ),
	FCML_IA_INSTRUCTION( F_FXAM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXAM ),
	FCML_IA_INSTRUCTION( F_FXCH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXCH ),
	FCML_IA_INSTRUCTION( F_FXRSTOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXRSTOR ),
	FCML_IA_INSTRUCTION( F_FXRSTOR64, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXRSTOR64 ),
	FCML_IA_INSTRUCTION( F_FXSAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXSAVE ),
	FCML_IA_INSTRUCTION( F_FXSAVE64, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXSAVE64 ),
	FCML_IA_INSTRUCTION( F_FXTRACT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FXTRACT ),
	FCML_IA_INSTRUCTION( F_FYL2X, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FYL2X ),
	FCML_IA_INSTRUCTION( F_FYL2XP1, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FYL2XP1 ),
	FCML_IA_INSTRUCTION( F_GETSEC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_GETSEC ),
	FCML_IA_INSTRUCTION( F_HADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_HADDPD ),
	FCML_IA_INSTRUCTION( F_VHADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VHADDPD ),
	FCML_IA_INSTRUCTION( F_HADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_HADDPS ),
	FCML_IA_INSTRUCTION( F_VHADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VHADDPS ),
	FCML_IA_INSTRUCTION( F_HLT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_HLT ),
	FCML_IA_INSTRUCTION( F_HSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_HSUBPD ),
	FCML_IA_INSTRUCTION( F_VHSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VHSUBPD ),
	FCML_IA_INSTRUCTION( F_HSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_HSUBPS ),
	FCML_IA_INSTRUCTION( F_VHSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VHSUBPS ),
	FCML_IA_INSTRUCTION( F_INVEPT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVEPT ),
	FCML_IA_INSTRUCTION( F_INVVPID, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVVPID ),
	FCML_IA_INSTRUCTION( F_IDIV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_IDIV ),
	FCML_IA_INSTRUCTION( F_IMUL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_IMUL ),
	FCML_IA_INSTRUCTION( F_IN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_IN ),
	FCML_IA_INSTRUCTION( F_INC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INC ),
	FCML_IA_INSTRUCTION( F_INS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INS ),
	FCML_IA_INSTRUCTION( F_INSERTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INSERTPS ),
	FCML_IA_INSTRUCTION( F_VINSERTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VINSERTPS ),
	FCML_IA_INSTRUCTION( F_INSERTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INSERTQ ),
	FCML_IA_INSTRUCTION( F_VINSERTF128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VINSERTF128 ),
	FCML_IA_INSTRUCTION( F_INT3, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INT3 ),
	FCML_IA_INSTRUCTION( F_INT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INT ),
	FCML_IA_INSTRUCTION( F_INTO, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INTO ),
	FCML_IA_INSTRUCTION( F_INVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVD ),
	FCML_IA_INSTRUCTION( F_INVLPG, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVLPG ),
	FCML_IA_INSTRUCTION( F_INVLPGA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVLPGA ),
	FCML_IA_INSTRUCTION( F_INVPCID, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_INVPCID ),
	FCML_IA_INSTRUCTION( F_IRET, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_IRET ),
	FCML_IA_INSTRUCTION( F_JCXZ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_JCXZ ),
	FCML_IA_INSTRUCTION( F_JCC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_JCC ),
	FCML_IA_INSTRUCTION( F_JMP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_JMP ),
	FCML_IA_INSTRUCTION( F_LAHF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LAHF ),
	FCML_IA_INSTRUCTION( F_LAR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LAR ),
	FCML_IA_INSTRUCTION( F_LDDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LDDQU ),
	FCML_IA_INSTRUCTION( F_VLDDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VLDDQU ),
	FCML_IA_INSTRUCTION( F_LDMXCSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LDMXCSR ),
	FCML_IA_INSTRUCTION( F_VLDMXCSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VLDMXCSR ),
	FCML_IA_INSTRUCTION( F_LDS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LDS ),
	FCML_IA_INSTRUCTION( F_LSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LSS ),
	FCML_IA_INSTRUCTION( F_LES, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LES ),
	FCML_IA_INSTRUCTION( F_LFS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LFS ),
	FCML_IA_INSTRUCTION( F_LGS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LGS ),
	FCML_IA_INSTRUCTION( F_LEA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LEA ),
	FCML_IA_INSTRUCTION( F_LEAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LEAVE ),
	FCML_IA_INSTRUCTION( F_LFENCE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LFENCE ),
	FCML_IA_INSTRUCTION( F_LLWPCB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LLWPCB ),
	FCML_IA_INSTRUCTION( F_LGDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LGDT ),
	FCML_IA_INSTRUCTION( F_LIDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LIDT ),
	FCML_IA_INSTRUCTION( F_LLDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LLDT ),
	FCML_IA_INSTRUCTION( F_LMSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LMSW ),
	FCML_IA_INSTRUCTION( F_LODS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LODS ),
	FCML_IA_INSTRUCTION( F_LOOP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LOOP ),
	FCML_IA_INSTRUCTION( F_LOOPE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LOOPE ),
	FCML_IA_INSTRUCTION( F_LOOPNE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LOOPNE ),
	FCML_IA_INSTRUCTION( F_LWPINS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LWPINS ),
	FCML_IA_INSTRUCTION( F_LWPVAL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LWPVAL ),
	FCML_IA_INSTRUCTION( F_LSL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LSL ),
	FCML_IA_INSTRUCTION( F_LTR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LTR ),
	FCML_IA_INSTRUCTION( F_MASKMOVDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MASKMOVDQU ),
	FCML_IA_INSTRUCTION( F_VMASKMOVDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMASKMOVDQU ),
	FCML_IA_INSTRUCTION( F_VMASKMOVPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMASKMOVPS ),
	FCML_IA_INSTRUCTION( F_VMASKMOVPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMASKMOVPD ),
	FCML_IA_INSTRUCTION( F_VPMASKMOVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMASKMOVD ),
	FCML_IA_INSTRUCTION( F_VPMASKMOVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMASKMOVQ ),
	FCML_IA_INSTRUCTION( F_MASKMOVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MASKMOVQ ),
	FCML_IA_INSTRUCTION( F_MAXPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MAXPD ),
	FCML_IA_INSTRUCTION( F_VMAXPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMAXPD ),
	FCML_IA_INSTRUCTION( F_MAXPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MAXPS ),
	FCML_IA_INSTRUCTION( F_VMAXPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMAXPS ),
	FCML_IA_INSTRUCTION( F_MAXSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MAXSD ),
	FCML_IA_INSTRUCTION( F_VMAXSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMAXSD ),
	FCML_IA_INSTRUCTION( F_MAXSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MAXSS ),
	FCML_IA_INSTRUCTION( F_VMAXSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMAXSS ),
	FCML_IA_INSTRUCTION( F_MFENCE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MFENCE ),
	FCML_IA_INSTRUCTION( F_MINPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MINPD ),
	FCML_IA_INSTRUCTION( F_VMINPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMINPD ),
	FCML_IA_INSTRUCTION( F_MINPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MINPS ),
	FCML_IA_INSTRUCTION( F_VMINPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMINPS ),
	FCML_IA_INSTRUCTION( F_MINSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MINSD ),
	FCML_IA_INSTRUCTION( F_VMINSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMINSD ),
	FCML_IA_INSTRUCTION( F_MINSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MINSS ),
	FCML_IA_INSTRUCTION( F_VMINSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMINSS ),
	FCML_IA_INSTRUCTION( F_MONITOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MONITOR ),
	FCML_IA_INSTRUCTION( F_MOVAPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVAPD ),
	FCML_IA_INSTRUCTION( F_VMOVAPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVAPD ),
	FCML_IA_INSTRUCTION( F_MOVAPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVAPS ),
	FCML_IA_INSTRUCTION( F_VMOVAPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVAPS ),
	FCML_IA_INSTRUCTION( F_MOVBE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVBE ),
	FCML_IA_INSTRUCTION( F_MOV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOV ),
	FCML_IA_INSTRUCTION( F_MOVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVD ),
	FCML_IA_INSTRUCTION( F_VMOVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVD ),
	FCML_IA_INSTRUCTION( F_MOVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVQ ),
	FCML_IA_INSTRUCTION( F_VMOVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVQ ),
	FCML_IA_INSTRUCTION( F_MOVDDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVDDUP ),
	FCML_IA_INSTRUCTION( F_VMOVDDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVDDUP ),
	FCML_IA_INSTRUCTION( F_MOVDQA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVDQA ),
	FCML_IA_INSTRUCTION( F_VMOVDQA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVDQA ),
	FCML_IA_INSTRUCTION( F_MOVDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVDQU ),
	FCML_IA_INSTRUCTION( F_VMOVDQU, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVDQU ),
	FCML_IA_INSTRUCTION( F_MOVDQ2Q, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVDQ2Q ),
	FCML_IA_INSTRUCTION( F_MOVHLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVHLPS ),
	FCML_IA_INSTRUCTION( F_VMOVHLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVHLPS ),
	FCML_IA_INSTRUCTION( F_MOVHPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVHPD ),
	FCML_IA_INSTRUCTION( F_VMOVHPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVHPD ),
	FCML_IA_INSTRUCTION( F_MOVHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVHPS ),
	FCML_IA_INSTRUCTION( F_VMOVHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVHPS ),
	FCML_IA_INSTRUCTION( F_MOVLHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVLHPS ),
	FCML_IA_INSTRUCTION( F_VMOVLHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVLHPS ),
	FCML_IA_INSTRUCTION( F_MOVLPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVLPD ),
	FCML_IA_INSTRUCTION( F_VMOVLPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVLPD ),
	FCML_IA_INSTRUCTION( F_MOVLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVLPS ),
	FCML_IA_INSTRUCTION( F_VMOVLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVLPS ),
	FCML_IA_INSTRUCTION( F_MOVMSKPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVMSKPD ),
	FCML_IA_INSTRUCTION( F_VMOVMSKPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVMSKPD ),
	FCML_IA_INSTRUCTION( F_MOVMSKPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVMSKPS ),
	FCML_IA_INSTRUCTION( F_VMOVMSKPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVMSKPS ),
	FCML_IA_INSTRUCTION( F_MOVNTDQA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTDQA ),
	FCML_IA_INSTRUCTION( F_VMOVNTDQA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVNTDQA ),
	FCML_IA_INSTRUCTION( F_MOVNTDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTDQ ),
	FCML_IA_INSTRUCTION( F_VMOVNTDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVNTDQ ),
	FCML_IA_INSTRUCTION( F_MOVNTI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTI ),
	FCML_IA_INSTRUCTION( F_MOVNTPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTPD ),
	FCML_IA_INSTRUCTION( F_VMOVNTPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVNTPD ),
	FCML_IA_INSTRUCTION( F_MOVNTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTPS ),
	FCML_IA_INSTRUCTION( F_VMOVNTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVNTPS ),
	FCML_IA_INSTRUCTION( F_MOVNTSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTSD ),
	FCML_IA_INSTRUCTION( F_MOVNTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTSS ),
	FCML_IA_INSTRUCTION( F_MOVNTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVNTQ ),
	FCML_IA_INSTRUCTION( F_MOVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVQ ),
	FCML_IA_INSTRUCTION( F_MOVQ2DQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVQ2DQ ),
	FCML_IA_INSTRUCTION( F_MOVS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVS ),
	FCML_IA_INSTRUCTION( F_MOVSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSD ),
	FCML_IA_INSTRUCTION( F_VMOVSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVSD ),
	FCML_IA_INSTRUCTION( F_MOVSHDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSHDUP ),
	FCML_IA_INSTRUCTION( F_VMOVSHDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVSHDUP ),
	FCML_IA_INSTRUCTION( F_MOVSLDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSLDUP ),
	FCML_IA_INSTRUCTION( F_VMOVSLDUP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVSLDUP ),
	FCML_IA_INSTRUCTION( F_MOVSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSS ),
	FCML_IA_INSTRUCTION( F_VMOVSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVSS ),
	FCML_IA_INSTRUCTION( F_MOVSX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSX ),
	FCML_IA_INSTRUCTION( F_MOVSXD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVSXD ),
	FCML_IA_INSTRUCTION( F_MOVUPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVUPD ),
	FCML_IA_INSTRUCTION( F_VMOVUPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVUPD ),
	FCML_IA_INSTRUCTION( F_MOVUPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVUPS ),
	FCML_IA_INSTRUCTION( F_VMOVUPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMOVUPS ),
	FCML_IA_INSTRUCTION( F_MOVZX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MOVZX ),
	FCML_IA_INSTRUCTION( F_MPSADBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MPSADBW ),
	FCML_IA_INSTRUCTION( F_VMPSADBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMPSADBW ),
	FCML_IA_INSTRUCTION( F_MUL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MUL ),
	FCML_IA_INSTRUCTION( F_MULPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MULPD ),
	FCML_IA_INSTRUCTION( F_VMULPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMULPD ),
	FCML_IA_INSTRUCTION( F_MULPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MULPS ),
	FCML_IA_INSTRUCTION( F_VMULPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMULPS ),
	FCML_IA_INSTRUCTION( F_MULSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MULSD ),
	FCML_IA_INSTRUCTION( F_VMULSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMULSD ),
	FCML_IA_INSTRUCTION( F_MULSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MULSS ),
	FCML_IA_INSTRUCTION( F_VMULSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMULSS ),
	FCML_IA_INSTRUCTION( F_MWAIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MWAIT ),
	FCML_IA_INSTRUCTION( F_NEG, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_NEG ),
	FCML_IA_INSTRUCTION( F_NOP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_NOP ),
	FCML_IA_INSTRUCTION( F_NOT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_NOT ),
	FCML_IA_INSTRUCTION( F_OR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_OR ),
	FCML_IA_INSTRUCTION( F_ORPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ORPD ),
	FCML_IA_INSTRUCTION( F_VORPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VORPD ),
	FCML_IA_INSTRUCTION( F_ORPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ORPS ),
	FCML_IA_INSTRUCTION( F_VORPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VORPS ),
	FCML_IA_INSTRUCTION( F_OUT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_OUT ),
	FCML_IA_INSTRUCTION( F_OUTS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_OUTS ),
	FCML_IA_INSTRUCTION( F_PABSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PABSW),
	FCML_IA_INSTRUCTION( F_PABSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PABSB),
	FCML_IA_INSTRUCTION( F_PABSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PABSD),
	FCML_IA_INSTRUCTION( F_VPABSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPABSB),
	FCML_IA_INSTRUCTION( F_VPABSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPABSW),
	FCML_IA_INSTRUCTION( F_VPABSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPABSD),
	FCML_IA_INSTRUCTION( F_VPACKSSWB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPACKSSWB),
	FCML_IA_INSTRUCTION( F_PACKSSWB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PACKSSWB),
	FCML_IA_INSTRUCTION( F_VPACKSSDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPACKSSDW),
	FCML_IA_INSTRUCTION( F_PACKSSDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PACKSSDW),
	FCML_IA_INSTRUCTION( F_PACKUSDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PACKUSDW),
	FCML_IA_INSTRUCTION( F_VPACKUSDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPACKUSDW),
	FCML_IA_INSTRUCTION( F_PACKUSWB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PACKUSWB),
	FCML_IA_INSTRUCTION( F_VPACKUSWB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPACKUSWB),
	FCML_IA_INSTRUCTION( F_VPADDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDW),
	FCML_IA_INSTRUCTION( F_VPADDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDQ),
	FCML_IA_INSTRUCTION( F_PADDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDW),
	FCML_IA_INSTRUCTION( F_VPADDB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDB),
	FCML_IA_INSTRUCTION( F_VPADDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDD),
	FCML_IA_INSTRUCTION( F_PADDB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDB),
	FCML_IA_INSTRUCTION( F_PADDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDD),
	FCML_IA_INSTRUCTION( F_VPADDSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDSW),
	FCML_IA_INSTRUCTION( F_PADDSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDSB),
	FCML_IA_INSTRUCTION( F_PADDSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDSW),
	FCML_IA_INSTRUCTION( F_VPADDSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDSB),
	FCML_IA_INSTRUCTION( F_PADDUSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDUSW),
	FCML_IA_INSTRUCTION( F_PADDUSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDUSB),
	FCML_IA_INSTRUCTION( F_VPADDUSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDUSW),
	FCML_IA_INSTRUCTION( F_VPADDUSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDUSB),
	FCML_IA_INSTRUCTION( F_PADDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PADDQ),
	FCML_IA_INSTRUCTION( F_VPADDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPADDQ),
	FCML_IA_INSTRUCTION( F_PALIGNR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PALIGNR),
	FCML_IA_INSTRUCTION( F_VPALIGNR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPALIGNR),
	FCML_IA_INSTRUCTION( F_PAND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PAND),
	FCML_IA_INSTRUCTION( F_VPAND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPAND),
	FCML_IA_INSTRUCTION( F_PANDN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PANDN),
	FCML_IA_INSTRUCTION( F_VPANDN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPANDN),
	FCML_IA_INSTRUCTION( F_PAUSE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PAUSE),
	FCML_IA_INSTRUCTION( F_PAVGW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PAVGW),
	FCML_IA_INSTRUCTION( F_PAVGB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PAVGB),
	FCML_IA_INSTRUCTION( F_VPAVGW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPAVGW),
	FCML_IA_INSTRUCTION( F_VPAVGB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPAVGB),
	FCML_IA_INSTRUCTION( F_PBLENDVB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PBLENDVB),
	FCML_IA_INSTRUCTION( F_VPBLENDVB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBLENDVB),
	FCML_IA_INSTRUCTION( F_PBLENDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PBLENDW),
	FCML_IA_INSTRUCTION( F_VPBLENDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBLENDW),
	FCML_IA_INSTRUCTION( F_VPBLENDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBLENDD),
	FCML_IA_INSTRUCTION( F_PCLMULQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCLMULQDQ),
	FCML_IA_INSTRUCTION( F_VPCLMULQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCLMULQDQ),
	FCML_IA_INSTRUCTION( F_PCMPEQW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPEQW),
	FCML_IA_INSTRUCTION( F_PCMPEQB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPEQB),
	FCML_IA_INSTRUCTION( F_PCMPEQD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPEQD),
	FCML_IA_INSTRUCTION( F_VPCMPEQD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPEQD),
	FCML_IA_INSTRUCTION( F_VPCMPEQW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPEQW),
	FCML_IA_INSTRUCTION( F_VPCMPEQB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPEQB),
	FCML_IA_INSTRUCTION( F_PCMPEQQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPEQQ),
	FCML_IA_INSTRUCTION( F_VPCMPEQQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPEQQ),
	FCML_IA_INSTRUCTION( F_PCMPESTRI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPESTRI),
	FCML_IA_INSTRUCTION( F_VPCMPESTRI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPESTRI),
	FCML_IA_INSTRUCTION( F_PCMPESTRM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPESTRM),
	FCML_IA_INSTRUCTION( F_VPCMPESTRM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPESTRM),
	FCML_IA_INSTRUCTION( F_PCMPGTW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPGTW),
	FCML_IA_INSTRUCTION( F_PCMPGTD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPGTD),
	FCML_IA_INSTRUCTION( F_PCMPGTB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPGTB),
	FCML_IA_INSTRUCTION( F_VPCMPGTW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPGTW),
	FCML_IA_INSTRUCTION( F_VPCMPGTD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPGTD),
	FCML_IA_INSTRUCTION( F_VPCMPGTB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPGTB),
	FCML_IA_INSTRUCTION( F_PCMPGTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPGTQ),
	FCML_IA_INSTRUCTION( F_VPCMPGTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPGTQ),
	FCML_IA_INSTRUCTION( F_PCMPISTRI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPISTRI),
	FCML_IA_INSTRUCTION( F_VPCMPISTRI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPISTRI),
	FCML_IA_INSTRUCTION( F_PCMPISTRM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PCMPISTRM),
	FCML_IA_INSTRUCTION( F_VPCMPISTRM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMPISTRM),
	FCML_IA_INSTRUCTION( F_VPEXTRB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPEXTRB),
	FCML_IA_INSTRUCTION( F_VPEXTRQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPEXTRQ),
	FCML_IA_INSTRUCTION( F_PEXTRQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PEXTRQ),
	FCML_IA_INSTRUCTION( F_PEXTRB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PEXTRB),
	FCML_IA_INSTRUCTION( F_PEXTRD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PEXTRD),
	FCML_IA_INSTRUCTION( F_VPEXTRD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPEXTRD),
	FCML_IA_INSTRUCTION( F_PEXTRW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PEXTRW),
	FCML_IA_INSTRUCTION( F_VPEXTRW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPEXTRW),
	FCML_IA_INSTRUCTION( F_VPHADDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDW),
	FCML_IA_INSTRUCTION( F_VPHADDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDD),
	FCML_IA_INSTRUCTION( F_PHADDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHADDD),
	FCML_IA_INSTRUCTION( F_PHADDW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHADDW),
	FCML_IA_INSTRUCTION( F_PHADDSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHADDSW),
	FCML_IA_INSTRUCTION( F_VPHADDSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDSW),
	FCML_IA_INSTRUCTION( F_PHMINPOSUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHMINPOSUW),
	FCML_IA_INSTRUCTION( F_VPHMINPOSUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHMINPOSUW),
	FCML_IA_INSTRUCTION( F_PHSUBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHSUBD),
	FCML_IA_INSTRUCTION( F_PHSUBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHSUBW),
	FCML_IA_INSTRUCTION( F_VPHSUBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBD),
	FCML_IA_INSTRUCTION( F_VPHSUBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBW),
	FCML_IA_INSTRUCTION( F_PHSUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PHSUBSW),
	FCML_IA_INSTRUCTION( F_VPHSUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBSW),
	FCML_IA_INSTRUCTION( F_PINSRD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PINSRD),
	FCML_IA_INSTRUCTION( F_VPINSRQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPINSRQ),
	FCML_IA_INSTRUCTION( F_PINSRQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PINSRQ),
	FCML_IA_INSTRUCTION( F_PINSRB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PINSRB),
	FCML_IA_INSTRUCTION( F_VPINSRD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPINSRD),
	FCML_IA_INSTRUCTION( F_VPINSRB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPINSRB),
	FCML_IA_INSTRUCTION( F_PINSRW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PINSRW),
	FCML_IA_INSTRUCTION( F_VPINSRW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPINSRW),
	FCML_IA_INSTRUCTION( F_PMADDUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMADDUBSW),
	FCML_IA_INSTRUCTION( F_VPMADDUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMADDUBSW),
	FCML_IA_INSTRUCTION( F_PMADDWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMADDWD),
	FCML_IA_INSTRUCTION( F_VPMADDWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMADDWD),
	FCML_IA_INSTRUCTION( F_PMAXSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXSB),
	FCML_IA_INSTRUCTION( F_VPMAXSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXSB),
	FCML_IA_INSTRUCTION( F_PMAXSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXSD),
	FCML_IA_INSTRUCTION( F_VPMAXSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXSD),
	FCML_IA_INSTRUCTION( F_PMAXSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXSW),
	FCML_IA_INSTRUCTION( F_VPMAXSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXSW),
	FCML_IA_INSTRUCTION( F_PMAXUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXUB),
	FCML_IA_INSTRUCTION( F_VPMAXUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXUB),
	FCML_IA_INSTRUCTION( F_PMAXUD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXUD),
	FCML_IA_INSTRUCTION( F_VPMAXUD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXUD),
	FCML_IA_INSTRUCTION( F_PMAXUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMAXUW),
	FCML_IA_INSTRUCTION( F_VPMAXUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMAXUW),
	FCML_IA_INSTRUCTION( F_PMINSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINSB),
	FCML_IA_INSTRUCTION( F_VPMINSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINSB),
	FCML_IA_INSTRUCTION( F_PMINSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINSD),
	FCML_IA_INSTRUCTION( F_VPMINSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINSD),
	FCML_IA_INSTRUCTION( F_PMINSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINSW),
	FCML_IA_INSTRUCTION( F_VPMINSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINSW),
	FCML_IA_INSTRUCTION( F_PMINUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINUW),
	FCML_IA_INSTRUCTION( F_VPMINUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINUW),
	FCML_IA_INSTRUCTION( F_PMINUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINUB),
	FCML_IA_INSTRUCTION( F_VPMINUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINUB),
	FCML_IA_INSTRUCTION( F_PMINUD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMINUD),
	FCML_IA_INSTRUCTION( F_VPMINUD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMINUD),
	FCML_IA_INSTRUCTION( F_PMOVMSKB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVMSKB),
	FCML_IA_INSTRUCTION( F_VPMOVMSKB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVMSKB),
	FCML_IA_INSTRUCTION( F_VPMOVSXBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXBQ),
	FCML_IA_INSTRUCTION( F_PMOVSXBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXBW),
	FCML_IA_INSTRUCTION( F_PMOVSXWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXWQ),
	FCML_IA_INSTRUCTION( F_VPMOVSXWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXWQ),
	FCML_IA_INSTRUCTION( F_PMOVSXWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXWD),
	FCML_IA_INSTRUCTION( F_PMOVSXBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXBD),
	FCML_IA_INSTRUCTION( F_VPMOVSXDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXDQ),
	FCML_IA_INSTRUCTION( F_VPMOVSXWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXWD),
	FCML_IA_INSTRUCTION( F_PMOVSXBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXBQ),
	FCML_IA_INSTRUCTION( F_VPMOVSXBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXBW),
	FCML_IA_INSTRUCTION( F_PMOVSXDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVSXDQ),
	FCML_IA_INSTRUCTION( F_VPMOVSXBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVSXBD),
	FCML_IA_INSTRUCTION( F_PMOVZXWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXWD),
	FCML_IA_INSTRUCTION( F_PMOVZXDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXDQ),
	FCML_IA_INSTRUCTION( F_VPMOVZXDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXDQ),
	FCML_IA_INSTRUCTION( F_PMOVZXWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXWQ),
	FCML_IA_INSTRUCTION( F_VPMOVZXBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXBQ),
	FCML_IA_INSTRUCTION( F_PMOVZXBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXBQ),
	FCML_IA_INSTRUCTION( F_VPMOVZXWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXWD),
	FCML_IA_INSTRUCTION( F_VPMOVZXBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXBD),
	FCML_IA_INSTRUCTION( F_VPMOVZXWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXWQ),
	FCML_IA_INSTRUCTION( F_PMOVZXBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXBD),
	FCML_IA_INSTRUCTION( F_VPMOVZXBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMOVZXBW),
	FCML_IA_INSTRUCTION( F_PMOVZXBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMOVZXBW),
	FCML_IA_INSTRUCTION( F_PMULDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULDQ),
	FCML_IA_INSTRUCTION( F_PMULHRSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULHRSW),
	FCML_IA_INSTRUCTION( F_PMULHUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULHUW),
	FCML_IA_INSTRUCTION( F_VPMULDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULDQ),
	FCML_IA_INSTRUCTION( F_VPMULHRSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULHRSW),
	FCML_IA_INSTRUCTION( F_VPMULHUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULHUW),
	FCML_IA_INSTRUCTION( F_PMULHW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULHW),
	FCML_IA_INSTRUCTION( F_VPMULHW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULHW),
	FCML_IA_INSTRUCTION( F_PMULUDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULUDQ),
	FCML_IA_INSTRUCTION( F_VPMULUDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULUDQ),
	FCML_IA_INSTRUCTION( F_PMULLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULLW),
	FCML_IA_INSTRUCTION( F_PMULLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PMULLD),
	FCML_IA_INSTRUCTION( F_VPMULLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULLD),
	FCML_IA_INSTRUCTION( F_VPMULLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMULLW),
	FCML_IA_INSTRUCTION( F_POP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POP),
	FCML_IA_INSTRUCTION( F_POPA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPA),
	FCML_IA_INSTRUCTION( F_POPAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPAD),
	FCML_IA_INSTRUCTION( F_POPF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPF),
	FCML_IA_INSTRUCTION( F_POPFQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPFQ),
	FCML_IA_INSTRUCTION( F_POPFD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPFD),
	FCML_IA_INSTRUCTION( F_POPCNT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POPCNT),
	FCML_IA_INSTRUCTION( F_POR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_POR),
	FCML_IA_INSTRUCTION( F_VPOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPOR),
	FCML_IA_INSTRUCTION( F_PREFETCHT2, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCHT2),
	FCML_IA_INSTRUCTION( F_PREFETCHW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCHW),
	FCML_IA_INSTRUCTION( F_PREFETCHT1, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCHT1),
	FCML_IA_INSTRUCTION( F_PREFETCHNTA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCHNTA),
	FCML_IA_INSTRUCTION( F_PREFETCHT0, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCHT0),
	FCML_IA_INSTRUCTION( F_PSADBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSADBW),
	FCML_IA_INSTRUCTION( F_VPSADBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSADBW),
	FCML_IA_INSTRUCTION( F_PSHUFB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSHUFB),
	FCML_IA_INSTRUCTION( F_PSHUFD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSHUFD),
	FCML_IA_INSTRUCTION( F_PSHUFHW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSHUFHW),
	FCML_IA_INSTRUCTION( F_VPSHUFD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHUFD),
	FCML_IA_INSTRUCTION( F_VPSHUFB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHUFB),
	FCML_IA_INSTRUCTION( F_PSHUFLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSHUFLW),
	FCML_IA_INSTRUCTION( F_PSHUFW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSHUFW),
	FCML_IA_INSTRUCTION( F_VPSHUFLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHUFLW),
	FCML_IA_INSTRUCTION( F_VPSHUFHW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHUFHW),
	FCML_IA_INSTRUCTION( F_VPSIGNB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSIGNB),
	FCML_IA_INSTRUCTION( F_VPSIGND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSIGND),
	FCML_IA_INSTRUCTION( F_PSIGNW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSIGNW),
	FCML_IA_INSTRUCTION( F_PSIGNB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSIGNB),
	FCML_IA_INSTRUCTION( F_VPSIGNW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSIGNW),
	FCML_IA_INSTRUCTION( F_PSIGND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSIGND),
	FCML_IA_INSTRUCTION( F_PSLLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSLLDQ),
	FCML_IA_INSTRUCTION( F_VPSLLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLDQ),
	FCML_IA_INSTRUCTION( F_PSLLQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSLLQ),
	FCML_IA_INSTRUCTION( F_PSLLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSLLD),
	FCML_IA_INSTRUCTION( F_VPSLLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLW),
	FCML_IA_INSTRUCTION( F_VPSLLQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLQ),
	FCML_IA_INSTRUCTION( F_PSLLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSLLW),
	FCML_IA_INSTRUCTION( F_VPSLLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLD),
	FCML_IA_INSTRUCTION( F_VPSRAW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRAW),
	FCML_IA_INSTRUCTION( F_PSRAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRAD),
	FCML_IA_INSTRUCTION( F_PSRAW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRAW),
	FCML_IA_INSTRUCTION( F_VPSRAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRAD),
	FCML_IA_INSTRUCTION( F_PSRLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRLDQ),
	FCML_IA_INSTRUCTION( F_VPSRLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLDQ),
	FCML_IA_INSTRUCTION( F_VPSRLQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLQ),
	FCML_IA_INSTRUCTION( F_PSRLQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRLQ),
	FCML_IA_INSTRUCTION( F_PSRLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRLD),
	FCML_IA_INSTRUCTION( F_PSRLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSRLW),
	FCML_IA_INSTRUCTION( F_VPSRLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLD),
	FCML_IA_INSTRUCTION( F_VPSRLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLW),
	FCML_IA_INSTRUCTION( F_VPSUBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBD),
	FCML_IA_INSTRUCTION( F_PSUBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBD),
	FCML_IA_INSTRUCTION( F_PSUBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBW),
	FCML_IA_INSTRUCTION( F_VPSUBB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBB),
	FCML_IA_INSTRUCTION( F_VPSUBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBQ),
	FCML_IA_INSTRUCTION( F_PSUBB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBB),
	FCML_IA_INSTRUCTION( F_VPSUBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBW),
	FCML_IA_INSTRUCTION( F_PSUBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBQ),
	FCML_IA_INSTRUCTION( F_PSUBSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBSB),
	FCML_IA_INSTRUCTION( F_VPSUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBSW),
	FCML_IA_INSTRUCTION( F_VPSUBSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBSB),
	FCML_IA_INSTRUCTION( F_PSUBSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBSW),
	FCML_IA_INSTRUCTION( F_VPSUBUSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBUSW),
	FCML_IA_INSTRUCTION( F_VPSUBUSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSUBUSB),
	FCML_IA_INSTRUCTION( F_PSUBUSB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBUSB),
	FCML_IA_INSTRUCTION( F_PSUBUSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PSUBUSW),
	FCML_IA_INSTRUCTION( F_VPTEST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPTEST),
	FCML_IA_INSTRUCTION( F_PTEST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PTEST),
	FCML_IA_INSTRUCTION( F_PUNPCKLBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKLBW),
	FCML_IA_INSTRUCTION( F_PUNPCKLQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKLQDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKLWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKLWD),
	FCML_IA_INSTRUCTION( F_VPUNPCKLQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKLQDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKLBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKLBW),
	FCML_IA_INSTRUCTION( F_PUNPCKLWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKLWD),
	FCML_IA_INSTRUCTION( F_PUNPCKLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKLDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKLDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKLDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKHWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKHWD),
	FCML_IA_INSTRUCTION( F_PUNPCKHDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKHDQ),
	FCML_IA_INSTRUCTION( F_PUNPCKHWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKHWD),
	FCML_IA_INSTRUCTION( F_PUNPCKHQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKHQDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKHQDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKHQDQ),
	FCML_IA_INSTRUCTION( F_VPUNPCKHBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKHBW),
	FCML_IA_INSTRUCTION( F_PUNPCKHBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUNPCKHBW),
	FCML_IA_INSTRUCTION( F_VPUNPCKHDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPUNPCKHDQ),
	FCML_IA_INSTRUCTION( F_PUSH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSH),
	FCML_IA_INSTRUCTION( F_PUSHA, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSHA),
	FCML_IA_INSTRUCTION( F_PUSHF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSHF),
	FCML_IA_INSTRUCTION( F_PUSHAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSHAD),
	FCML_IA_INSTRUCTION( F_PUSHFQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSHFQ),
	FCML_IA_INSTRUCTION( F_PUSHFD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PUSHFD),
	FCML_IA_INSTRUCTION( F_PXOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PXOR),
	FCML_IA_INSTRUCTION( F_VPXOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPXOR),
	FCML_IA_INSTRUCTION( F_RCL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RCL),
	FCML_IA_INSTRUCTION( F_RCR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RCR),
	FCML_IA_INSTRUCTION( F_ROL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROL),
	FCML_IA_INSTRUCTION( F_ROR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROR),
	FCML_IA_INSTRUCTION( F_RCPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RCPPS),
	FCML_IA_INSTRUCTION( F_VRCPPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VRCPPS),
	FCML_IA_INSTRUCTION( F_RCPSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RCPSS),
	FCML_IA_INSTRUCTION( F_VRCPSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VRCPSS),
	FCML_IA_INSTRUCTION( F_RDFSBASE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDFSBASE),
	FCML_IA_INSTRUCTION( F_RDGSBASE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDGSBASE),
	FCML_IA_INSTRUCTION( F_RDRAND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDRAND),
	FCML_IA_INSTRUCTION( F_RDTSCP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDTSCP),
	FCML_IA_INSTRUCTION( F_RDTSC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDTSC),
	FCML_IA_INSTRUCTION( F_RDPMC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDPMC),
	FCML_IA_INSTRUCTION( F_RDMSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDMSR),
	FCML_IA_INSTRUCTION( F_RET, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RET),
	FCML_IA_INSTRUCTION( F_RETF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RETF),
	FCML_IA_INSTRUCTION( F_ROUNDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROUNDPD),
	FCML_IA_INSTRUCTION( F_VROUNDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VROUNDPD),
	FCML_IA_INSTRUCTION( F_ROUNDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROUNDPS),
	FCML_IA_INSTRUCTION( F_VROUNDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VROUNDPS),
	FCML_IA_INSTRUCTION( F_ROUNDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROUNDSD),
	FCML_IA_INSTRUCTION( F_VROUNDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VROUNDSD),
	FCML_IA_INSTRUCTION( F_ROUNDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ROUNDSS),
	FCML_IA_INSTRUCTION( F_VROUNDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VROUNDSS),
	FCML_IA_INSTRUCTION( F_RSM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RSM),
	FCML_IA_INSTRUCTION( F_RSQRTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RSQRTPS),
	FCML_IA_INSTRUCTION( F_VRSQRTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VRSQRTPS),
	FCML_IA_INSTRUCTION( F_RSQRTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RSQRTSS),
	FCML_IA_INSTRUCTION( F_VRSQRTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VRSQRTSS),
	FCML_IA_INSTRUCTION( F_SAHF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SAHF),
	FCML_IA_INSTRUCTION( F_SAR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SAR),
	FCML_IA_INSTRUCTION( F_SHL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHL_SAL),
	FCML_IA_INSTRUCTION( F_SHR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHR),
	FCML_IA_INSTRUCTION( F_SBB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SBB),
	FCML_IA_INSTRUCTION( F_SCAS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SCAS ),
	FCML_IA_INSTRUCTION( F_SET, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SETCC),
	FCML_IA_INSTRUCTION( F_SFENCE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SFENCE),
	FCML_IA_INSTRUCTION( F_SGDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SGDT),
	FCML_IA_INSTRUCTION( F_SHLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHLD),
	FCML_IA_INSTRUCTION( F_SHRD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHRD),
	FCML_IA_INSTRUCTION( F_SKINIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SKINIT),
	FCML_IA_INSTRUCTION( F_SLWPCB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SLWPCB),
	FCML_IA_INSTRUCTION( F_SHUFPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHUFPD),
	FCML_IA_INSTRUCTION( F_VSHUFPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSHUFPD),
	FCML_IA_INSTRUCTION( F_SHUFPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHUFPS),
	FCML_IA_INSTRUCTION( F_VSHUFPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSHUFPS),
	FCML_IA_INSTRUCTION( F_SIDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SIDT),
	FCML_IA_INSTRUCTION( F_SLDT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SLDT),
	FCML_IA_INSTRUCTION( F_SMSW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SMSW),
	FCML_IA_INSTRUCTION( F_SQRTPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SQRTPD),
	FCML_IA_INSTRUCTION( F_VSQRTPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSQRTPD),
	FCML_IA_INSTRUCTION( F_SQRTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SQRTPS),
	FCML_IA_INSTRUCTION( F_VSQRTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSQRTPS),
	FCML_IA_INSTRUCTION( F_SQRTSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SQRTSD),
	FCML_IA_INSTRUCTION( F_VSQRTSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSQRTSD),
	FCML_IA_INSTRUCTION( F_SQRTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SQRTSS),
	FCML_IA_INSTRUCTION( F_VSQRTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSQRTSS),
	FCML_IA_INSTRUCTION( F_STC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STC),
	FCML_IA_INSTRUCTION( F_STD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STD),
	FCML_IA_INSTRUCTION( F_STGI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STGI),
	FCML_IA_INSTRUCTION( F_STI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STI),
	FCML_IA_INSTRUCTION( F_STMXCSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STMXCSR),
	FCML_IA_INSTRUCTION( F_VSTMXCSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSTMXCSR),
	FCML_IA_INSTRUCTION( F_STOS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STOS ),
	FCML_IA_INSTRUCTION( F_STR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STR),
	FCML_IA_INSTRUCTION( F_SUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SUB),
	FCML_IA_INSTRUCTION( F_SUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SUBPD),
	FCML_IA_INSTRUCTION( F_VSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSUBPD),
	FCML_IA_INSTRUCTION( F_SUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SUBPS),
	FCML_IA_INSTRUCTION( F_VSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSUBPS),
	FCML_IA_INSTRUCTION( F_SUBSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SUBSD),
	FCML_IA_INSTRUCTION( F_VSUBSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSUBSD),
	FCML_IA_INSTRUCTION( F_SUBSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SUBSS),
	FCML_IA_INSTRUCTION( F_VSUBSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VSUBSS),
	FCML_IA_INSTRUCTION( F_SWAPGS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SWAPGS),
	FCML_IA_INSTRUCTION( F_SYSCALL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SYSCALL),
	FCML_IA_INSTRUCTION( F_SYSENTER, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SYSENTER),
	FCML_IA_INSTRUCTION( F_SYSEXIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SYSEXIT),
	FCML_IA_INSTRUCTION( F_SYSRET, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SYSRET),
	FCML_IA_INSTRUCTION( F_TEST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_TEST),
	FCML_IA_INSTRUCTION( F_T1MSKC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_T1MSKC),
	FCML_IA_INSTRUCTION( F_UCOMISD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UCOMISD),
	FCML_IA_INSTRUCTION( F_VUCOMISD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUCOMISD),
	FCML_IA_INSTRUCTION( F_UCOMISS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UCOMISS),
	FCML_IA_INSTRUCTION( F_VUCOMISS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUCOMISS),
	FCML_IA_INSTRUCTION( F_UD2, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UD2),
	FCML_IA_INSTRUCTION( F_UNPCKHPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UNPCKHPD),
	FCML_IA_INSTRUCTION( F_VUNPCKHPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUNPCKHPD),
	FCML_IA_INSTRUCTION( F_UNPCKHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UNPCKHPS),
	FCML_IA_INSTRUCTION( F_VUNPCKHPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUNPCKHPS),
	FCML_IA_INSTRUCTION( F_UNPCKLPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UNPCKLPD),
	FCML_IA_INSTRUCTION( F_VUNPCKLPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUNPCKLPD),
	FCML_IA_INSTRUCTION( F_UNPCKLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_UNPCKLPS),
	FCML_IA_INSTRUCTION( F_VUNPCKLPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VUNPCKLPS),
	FCML_IA_INSTRUCTION( F_VPBROADCASTW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBROADCASTW),
	FCML_IA_INSTRUCTION( F_VPBROADCASTB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBROADCASTB),
	FCML_IA_INSTRUCTION( F_VPBROADCASTD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBROADCASTD),
	FCML_IA_INSTRUCTION( F_VPBROADCASTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPBROADCASTQ),
	FCML_IA_INSTRUCTION( F_VMPTRLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMPTRLD),
	FCML_IA_INSTRUCTION( F_VMPTRST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMPTRST),
	FCML_IA_INSTRUCTION( F_VMCLEAR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMCLEAR),
	FCML_IA_INSTRUCTION( F_VMREAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMREAD),
	FCML_IA_INSTRUCTION( F_VMWRITE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMWRITE),
	FCML_IA_INSTRUCTION( F_VMLAUNCH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMLAUNCH),
	FCML_IA_INSTRUCTION( F_VMRESUME, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMRESUME),
	FCML_IA_INSTRUCTION( F_VMXOFF, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMXOFF),
	FCML_IA_INSTRUCTION( F_VMXON, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMXON),
	FCML_IA_INSTRUCTION( F_VMCALL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMCALL),
	FCML_IA_INSTRUCTION( F_VMFUNC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMFUNC),
	FCML_IA_INSTRUCTION( F_VBROADCASTSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBROADCASTSD),
	FCML_IA_INSTRUCTION( F_VBROADCASTSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBROADCASTSS),
	FCML_IA_INSTRUCTION( F_VBROADCASTI128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBROADCASTI128),
	FCML_IA_INSTRUCTION( F_VBROADCASTF128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VBROADCASTF128),
	FCML_IA_INSTRUCTION( F_VCVTPH2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPH2PS),
	FCML_IA_INSTRUCTION( F_VCVTPS2PH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VCVTPS2PH),
	FCML_IA_INSTRUCTION( F_VERR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VERR),
	FCML_IA_INSTRUCTION( F_VERW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VERW),
	FCML_IA_INSTRUCTION( F_VEXTRACTF128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VEXTRACTF128 ),
	FCML_IA_INSTRUCTION( F_VMLOAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMLOAD),
	FCML_IA_INSTRUCTION( F_VMMCALL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMMCALL),
	FCML_IA_INSTRUCTION( F_VMRUN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMRUN),
	FCML_IA_INSTRUCTION( F_VMSAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VMSAVE),
	FCML_IA_INSTRUCTION( F_VPERMILPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMILPD),
	FCML_IA_INSTRUCTION( F_VPERMILPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMILPS),
	FCML_IA_INSTRUCTION( F_VPSLLVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLVQ),
	FCML_IA_INSTRUCTION( F_VPERM2F128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERM2F128),
	FCML_IA_INSTRUCTION( F_VPERM2I128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERM2I128),
	FCML_IA_INSTRUCTION( F_VEXTRACTI128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VEXTRACTI128),
	FCML_IA_INSTRUCTION( F_VINSERTI128, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VINSERTI128),
	FCML_IA_INSTRUCTION( F_VPSRAVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRAVD),
	FCML_IA_INSTRUCTION( F_VPERMD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMD),
	FCML_IA_INSTRUCTION( F_VPSLLVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSLLVD),
	FCML_IA_INSTRUCTION( F_VPSRLVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLVD),
	FCML_IA_INSTRUCTION( F_VPSRLVQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSRLVQ),
	FCML_IA_INSTRUCTION( F_VPERMPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMPD),
	FCML_IA_INSTRUCTION( F_VPERMQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMQ),
	FCML_IA_INSTRUCTION( F_VPERMPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMPS),
	FCML_IA_INSTRUCTION( F_VTESTPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VTESTPS),
	FCML_IA_INSTRUCTION( F_VTESTPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VTESTPD),
	FCML_IA_INSTRUCTION( F_VGATHERDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VGATHERDPD),
	FCML_IA_INSTRUCTION( F_VGATHERQPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VGATHERQPD),
	FCML_IA_INSTRUCTION( F_VGATHERDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VGATHERDPS),
	FCML_IA_INSTRUCTION( F_VGATHERQPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VGATHERQPS),
	FCML_IA_INSTRUCTION( F_VPGATHERDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPGATHERDD),
	FCML_IA_INSTRUCTION( F_VPGATHERQD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPGATHERQD),
	FCML_IA_INSTRUCTION( F_VPGATHERDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPGATHERDQ),
	FCML_IA_INSTRUCTION( F_VPGATHERQQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPGATHERQQ),
	FCML_IA_INSTRUCTION( F_VZEROALL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VZEROALL),
	FCML_IA_INSTRUCTION( F_VZEROUPPER, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VZEROUPPER),
	FCML_IA_INSTRUCTION( F_WAIT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_WAIT),
	FCML_IA_INSTRUCTION( F_WBINVD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_WBINVD),
	FCML_IA_INSTRUCTION( F_WRFSBASE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_WRFSBASE),
	FCML_IA_INSTRUCTION( F_WRGSBASE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_WRGSBASE),
	FCML_IA_INSTRUCTION( F_WRMSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_WRMSR),
	FCML_IA_INSTRUCTION( F_XADD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XADD),
	FCML_IA_INSTRUCTION( F_XCHG, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XCHG),
	FCML_IA_INSTRUCTION( F_XGETBV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XGETBV),
	FCML_IA_INSTRUCTION( F_XLAT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XLAT ),
	FCML_IA_INSTRUCTION( F_XOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XOR),
	FCML_IA_INSTRUCTION( F_XORPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XORPD),
	FCML_IA_INSTRUCTION( F_VXORPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VXORPD),
	FCML_IA_INSTRUCTION( F_XORPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XORPS),
	FCML_IA_INSTRUCTION( F_VXORPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VXORPS),
	FCML_IA_INSTRUCTION( F_XRSTOR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XRSTOR),
	FCML_IA_INSTRUCTION( F_XRSTOR64, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XRSTOR64),
	FCML_IA_INSTRUCTION( F_XSAVE, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XSAVE),
	FCML_IA_INSTRUCTION( F_XSAVE64, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XSAVE64),
	FCML_IA_INSTRUCTION( F_XSAVEOPT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XSAVEOPT),
	FCML_IA_INSTRUCTION( F_XSAVEOPT64, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XSAVEOPT64),
	FCML_IA_INSTRUCTION( F_XSETBV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XSETBV),
	FCML_IA_INSTRUCTION( F_FEMMS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_FEMMS ),
	FCML_IA_MULTI_INSTRUCTION( FCML_MI_AMD3DNOW, fcml_st_def_instruction_code_def_AMD3DNOW, fcml_st_def_addr_mode_desc_MI_AMD3DNOW ),
	FCML_IA_INSTRUCTION( F_PREFETCH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PREFETCH),
	FCML_IA_INSTRUCTION( F_VFMADD213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD213PD),
	FCML_IA_INSTRUCTION( F_VFMADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDPD),
	FCML_IA_INSTRUCTION( F_VFMADD132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD132PD),
	FCML_IA_INSTRUCTION( F_VFMADD231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD231PD),
	FCML_IA_INSTRUCTION( F_VFMADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDPS),
	FCML_IA_INSTRUCTION( F_VFMADD231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD231PS),
	FCML_IA_INSTRUCTION( F_VFMADD132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD132PS),
	FCML_IA_INSTRUCTION( F_VFMADD213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD213PS),
	FCML_IA_INSTRUCTION( F_VFMADD132SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD132SD),
	FCML_IA_INSTRUCTION( F_VFMADD213SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD213SD),
	FCML_IA_INSTRUCTION( F_VFMADDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSD),
	FCML_IA_INSTRUCTION( F_VFMADD231SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD231SD),
	FCML_IA_INSTRUCTION( F_VFMADD132SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD132SS),
	FCML_IA_INSTRUCTION( F_VFMADD213SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD213SS),
	FCML_IA_INSTRUCTION( F_VFMADDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSS),
	FCML_IA_INSTRUCTION( F_VFMADD231SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADD231SS),
	FCML_IA_INSTRUCTION( F_VFMADDSUB132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB132PD),
	FCML_IA_INSTRUCTION( F_VFMADDSUB213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB213PD),
	FCML_IA_INSTRUCTION( F_VFMADDSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUBPD),
	FCML_IA_INSTRUCTION( F_VFMADDSUB231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB231PD),
	FCML_IA_INSTRUCTION( F_VFMADDSUB231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB231PS),
	FCML_IA_INSTRUCTION( F_VFMADDSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUBPS),
	FCML_IA_INSTRUCTION( F_VFMADDSUB132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB132PS),
	FCML_IA_INSTRUCTION( F_VFMADDSUB213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMADDSUB213PS),
	FCML_IA_INSTRUCTION( F_VFMSUBADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADDPD),
	FCML_IA_INSTRUCTION( F_VFMSUBADD213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD213PD),
	FCML_IA_INSTRUCTION( F_VFMSUBADD132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD132PD),
	FCML_IA_INSTRUCTION( F_VFMSUBADD231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD231PD),
	FCML_IA_INSTRUCTION( F_VFMSUBADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADDPS),
	FCML_IA_INSTRUCTION( F_VFMSUBADD213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD213PS),
	FCML_IA_INSTRUCTION( F_VFMSUBADD132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD132PS),
	FCML_IA_INSTRUCTION( F_VFMSUBADD231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBADD231PS),
	FCML_IA_INSTRUCTION( F_VFMSUB213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB213PD),
	FCML_IA_INSTRUCTION( F_VFMSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBPD),
	FCML_IA_INSTRUCTION( F_VFMSUB132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB132PD),
	FCML_IA_INSTRUCTION( F_VFMSUB231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB231PD),
	FCML_IA_INSTRUCTION( F_VFMSUB213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB213PS),
	FCML_IA_INSTRUCTION( F_VFMSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBPS),
	FCML_IA_INSTRUCTION( F_VFMSUB132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB132PS),
	FCML_IA_INSTRUCTION( F_VFMSUB231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB231PS),
	FCML_IA_INSTRUCTION( F_VFMSUBSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBSD),
	FCML_IA_INSTRUCTION( F_VFMSUB231SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB231SD),
	FCML_IA_INSTRUCTION( F_VFMSUB132SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB132SD),
	FCML_IA_INSTRUCTION( F_VFMSUB213SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB213SD),
	FCML_IA_INSTRUCTION( F_VFMSUB231SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB231SS),
	FCML_IA_INSTRUCTION( F_VFMSUB213SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB213SS),
	FCML_IA_INSTRUCTION( F_VFMSUB132SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUB132SS),
	FCML_IA_INSTRUCTION( F_VFMSUBSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFMSUBSS),
	FCML_IA_INSTRUCTION( F_VFNMADD231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD231PD),
	FCML_IA_INSTRUCTION( F_VFNMADDPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADDPD),
	FCML_IA_INSTRUCTION( F_VFNMADD132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD132PD),
	FCML_IA_INSTRUCTION( F_VFNMADD213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD213PD),
	FCML_IA_INSTRUCTION( F_VFNMADD231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD231PS),
	FCML_IA_INSTRUCTION( F_VFNMADD132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD132PS),
	FCML_IA_INSTRUCTION( F_VFNMADD213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD213PS),
	FCML_IA_INSTRUCTION( F_VFNMADDPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADDPS),
	FCML_IA_INSTRUCTION( F_VFNMADD213SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD213SD),
	FCML_IA_INSTRUCTION( F_VFNMADDSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADDSD),
	FCML_IA_INSTRUCTION( F_VFNMADD231SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD231SD),
	FCML_IA_INSTRUCTION( F_VFNMADD132SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD132SD),
	FCML_IA_INSTRUCTION( F_VFNMADD213SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD213SS),
	FCML_IA_INSTRUCTION( F_VFNMADDSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADDSS),
	FCML_IA_INSTRUCTION( F_VFNMADD231SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD231SS),
	FCML_IA_INSTRUCTION( F_VFNMADD132SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMADD132SS),
	FCML_IA_INSTRUCTION( F_VFNMSUB132PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB132PD),
	FCML_IA_INSTRUCTION( F_VFNMSUB213PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB213PD),
	FCML_IA_INSTRUCTION( F_VFNMSUB231PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB231PD),
	FCML_IA_INSTRUCTION( F_VFNMSUBPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUBPD),
	FCML_IA_INSTRUCTION( F_VFNMSUBPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUBPS),
	FCML_IA_INSTRUCTION( F_VFNMSUB213PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB213PS),
	FCML_IA_INSTRUCTION( F_VFNMSUB132PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB132PS),
	FCML_IA_INSTRUCTION( F_VFNMSUB231PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB231PS),
	FCML_IA_INSTRUCTION( F_VFNMSUBSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUBSD),
	FCML_IA_INSTRUCTION( F_VFNMSUB231SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB231SD),
	FCML_IA_INSTRUCTION( F_VFNMSUB213SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB213SD),
	FCML_IA_INSTRUCTION( F_VFNMSUB132SD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB132SD),
	FCML_IA_INSTRUCTION( F_VFNMSUBSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUBSS),
	FCML_IA_INSTRUCTION( F_VFNMSUB132SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB132SS),
	FCML_IA_INSTRUCTION( F_VFNMSUB213SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB213SS),
	FCML_IA_INSTRUCTION( F_VFNMSUB231SS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFNMSUB231SS),
	FCML_IA_INSTRUCTION( F_BEXTR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BEXTR),
	FCML_IA_INSTRUCTION( F_BLCFILL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLCFILL ),
	FCML_IA_INSTRUCTION( F_BLCI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLCI ),
	FCML_IA_INSTRUCTION( F_BLCIC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLCIC ),
	FCML_IA_INSTRUCTION( F_BLCMSK, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLCMSK ),
	FCML_IA_INSTRUCTION( F_BLCS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLCS ),
	FCML_IA_INSTRUCTION( F_BLSFILL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLSFILL ),
	FCML_IA_INSTRUCTION( F_BLSIC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLSIC ),
	FCML_IA_INSTRUCTION( F_ANDN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ANDN ),
	FCML_IA_INSTRUCTION( F_BEXR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BEXR ),
	FCML_IA_INSTRUCTION( F_BLSI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLSI ),
	FCML_IA_INSTRUCTION( F_BLSMSK, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLSMSK ),
	FCML_IA_INSTRUCTION( F_BLSR, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BLSR ),
	FCML_IA_INSTRUCTION( F_BZHI, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_BZHI ),
	FCML_IA_INSTRUCTION( F_LZCNT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_LZCNT ),
	FCML_IA_INSTRUCTION( F_MULX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_MULX),
	FCML_IA_INSTRUCTION( F_PDEP, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PDEP),
	FCML_IA_INSTRUCTION( F_PEXT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_PEXT),
	FCML_IA_INSTRUCTION( F_RORX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RORX),
	FCML_IA_INSTRUCTION( F_SHLX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHLX),
	FCML_IA_INSTRUCTION( F_SHRX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SHRX),
	FCML_IA_INSTRUCTION( F_SARX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_SARX),
	FCML_IA_INSTRUCTION( F_TZCNT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_TZCNT),
	FCML_IA_INSTRUCTION( F_TZMSK, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_TZMSK),
	FCML_IA_INSTRUCTION( F_XABORT, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XABORT),
	FCML_IA_INSTRUCTION( F_XBEGIN, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XBEGIN),
	FCML_IA_INSTRUCTION( F_XEND, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XEND),
	FCML_IA_INSTRUCTION( F_XTEST, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_XTEST),
	FCML_IA_INSTRUCTION( F_ADCX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADCX ),
	FCML_IA_INSTRUCTION( F_ADOX, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_ADOX ),
	FCML_IA_INSTRUCTION( F_RDSEED, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_RDSEED),
	FCML_IA_INSTRUCTION( F_CLAC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_CLAC),
	FCML_IA_INSTRUCTION( F_STAC, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_STAC),
	FCML_IA_INSTRUCTION( F_VFRCZPD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFRCZPD),
	FCML_IA_INSTRUCTION( F_VFRCZPS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFRCZPS),
	FCML_IA_INSTRUCTION( F_VFRCZSD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFRCZSD),
	FCML_IA_INSTRUCTION( F_VFRCZSS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VFRCZSS),
	FCML_IA_INSTRUCTION( F_VPCMOV, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCMOV),
	FCML_IA_INSTRUCTION( F_VPCOMB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMB ),
	FCML_IA_INSTRUCTION( F_VPCOMW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMW ),
	FCML_IA_INSTRUCTION( F_VPCOMD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMD ),
	FCML_IA_INSTRUCTION( F_VPCOMQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMQ ),
	FCML_IA_INSTRUCTION( F_VPCOMUB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMUB ),
	FCML_IA_INSTRUCTION( F_VPCOMUW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMUW ),
	FCML_IA_INSTRUCTION( F_VPCOMUD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMUD ),
	FCML_IA_INSTRUCTION( F_VPCOMUQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPCOMUQ ),
	FCML_IA_INSTRUCTION( F_VPERMIL2PD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMIL2PD),
	FCML_IA_INSTRUCTION( F_VPERMIL2PS, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPERMIL2PS),
	FCML_IA_INSTRUCTION( F_VPHADDBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDBD),
	FCML_IA_INSTRUCTION( F_VPHADDBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDBW),
	FCML_IA_INSTRUCTION( F_VPHADDBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDBQ),
	FCML_IA_INSTRUCTION( F_VPHADDDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDDQ),
	FCML_IA_INSTRUCTION( F_VPHADDUBD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUBD),
	FCML_IA_INSTRUCTION( F_VPHADDUBQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUBQ),
	FCML_IA_INSTRUCTION( F_VPHADDUBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUBW),
	FCML_IA_INSTRUCTION( F_VPHADDUDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUDQ),
	FCML_IA_INSTRUCTION( F_VPHADDUWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUWD),
	FCML_IA_INSTRUCTION( F_VPHADDUWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDUWQ),
	FCML_IA_INSTRUCTION( F_VPHADDWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDWD),
	FCML_IA_INSTRUCTION( F_VPHADDWQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHADDWQ),
	FCML_IA_INSTRUCTION( F_VPHSUBBW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBBW),
	FCML_IA_INSTRUCTION( F_VPHSUBDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBDQ),
	FCML_IA_INSTRUCTION( F_VPHSUBDQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBDQ),
	FCML_IA_INSTRUCTION( F_VPHSUBWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPHSUBWD),
	FCML_IA_INSTRUCTION( F_VPMACSDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSDD),
	FCML_IA_INSTRUCTION( F_VPMACSDQH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSDQH),
	FCML_IA_INSTRUCTION( F_VPMACSDQL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSDQL),
	FCML_IA_INSTRUCTION( F_VPMACSSDD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSSDD),
	FCML_IA_INSTRUCTION( F_VPMACSSDQH, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSSDQH),
	FCML_IA_INSTRUCTION( F_VPMACSSDQL, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSSDQL),
	FCML_IA_INSTRUCTION( F_VPMACSSWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSSWD),
	FCML_IA_INSTRUCTION( F_VPMACSSWW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSSWW),
	FCML_IA_INSTRUCTION( F_VPMACSWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSWD),
	FCML_IA_INSTRUCTION( F_VPMACSWW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMACSWW),
	FCML_IA_INSTRUCTION( F_VPMADCSSWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMADCSSWD),
	FCML_IA_INSTRUCTION( F_VPMADCSWD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPMADCSWD),
	FCML_IA_INSTRUCTION( F_VPPERM, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPPERM),
	FCML_IA_INSTRUCTION( F_VPROTD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPROTD),
	FCML_IA_INSTRUCTION( F_VPROTB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPROTB),
	FCML_IA_INSTRUCTION( F_VPROTQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPROTQ),
	FCML_IA_INSTRUCTION( F_VPROTW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPROTW),
	FCML_IA_INSTRUCTION( F_VPSHAB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHAB),
	FCML_IA_INSTRUCTION( F_VPSHAD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHAD),
	FCML_IA_INSTRUCTION( F_VPSHAQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHAQ),
	FCML_IA_INSTRUCTION( F_VPSHAW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHAW),
	FCML_IA_INSTRUCTION( F_VPSHLB, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHLB),
	FCML_IA_INSTRUCTION( F_VPSHLD, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHLD),
	FCML_IA_INSTRUCTION( F_VPSHLQ, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHLQ),
	FCML_IA_INSTRUCTION( F_VPSHLW, FCML_EMPTY_MNEMONIC, fcml_st_def_addr_mode_desc_VPSHLW),
	FCML_IA_INSTRUCTION( F_UNKNOWN, NULL, NULL )
};

