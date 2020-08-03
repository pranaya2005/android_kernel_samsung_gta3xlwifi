/*
 * drivers/media/platform/exynos/mfc/regs-mfc-v10.h
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __REGS_MFC_V10_H
#define __REGS_MFC_V10_H __FILE__

/* SYSMMU Register */
#define MFC_MMU_BASE_ADDR					0x12C50000
#define MFC_MMU_SIZE						0x9000

#define MFC_MMU_INTERRUPT_STATUS				0x0060
#define MFC_MMU_FAULT_TRANS_INFO				0x0078
#define MFC_MMU_FAULT_TRANS_INFO_RW_MASK			0x100000
#define MFC_MMU_FAULT_TRANS_INFO_ID_MASK			0x3

/* Codec Common Registers */
#define S5P_FIMV_RISC_ON					0x0000
#define S5P_FIMV_HOST2RISC_INT_COUNTER_CTRL			0x0024
#define S5P_FIMV_HOST2RISC_INT_COUNTER				0x0028
#define S5P_FIMV_RISC2HOST_INT					0x003C
#define S5P_FIMV_HOST2RISC_INT					0x0044
#define S5P_FIMV_RISC_BASE_ADDRESS				0x0054

#define S5P_FIMV_MFC_FW_CLOCK					0x1060
#define S5P_FIMV_MFC_RESET					0x1070

#define S5P_FIMV_HOST2RISC_CMD					0x1100
#define S5P_FIMV_RISC2HOST_CMD					0x1104

#define S5P_FIMV_MFC_BUS_STATUS					0x7018
#define S5P_FIMV_MFC_RPEND					0x7028
#define S5P_FIMV_MFC_WPEND					0x702C
#define S5P_FIMV_MFC_BUS_RESET_CTRL				0x7110
#define S5P_FIMV_MFC_OFF					0x7120
#define S5P_FIMV_MFC_STATE					0x7124

#define S5P_FIMV_FW_VERSION					0xF000
#define S5P_FIMV_INSTANCE_ID					0xF008
#define S5P_FIMV_CODEC_TYPE					0xF00C
#define S5P_FIMV_CONTEXT_MEM_ADDR				0xF014
#define S5P_FIMV_CONTEXT_MEM_SIZE				0xF018
#define S5P_FIMV_SHARED_MEM_ADDR				0xF01C
#define S5P_FIMV_PIXEL_FORMAT					0xF020

#define S5P_FIMV_METADATA_ENABLE				0xF024
#define S5P_FIMV_MFC_VERSION					0xF028
#define S5P_FIMV_DBG_INFO_ENABLE				0xF02C
#define S5P_FIMV_DBG_BUFFER_ADDR				0xF030
#define S5P_FIMV_DBG_BUFFER_SIZE				0xF034

#define S5P_FIMV_HED_CONTROL					0xF038
#define S5P_FIMV_DEC_TIMEOUT_VALUE				0xF03C
#define S5P_FIMV_HED_SHARED_MEM_ADDR				0xF040

/* NAL QUEUE */
#define S5P_FIMV_NAL_QUEUE_INPUT_ADDR				0xF044
#define S5P_FIMV_NAL_QUEUE_INPUT_SIZE				0xF048
#define S5P_FIMV_NAL_QUEUE_OUTPUT_ADDR				0xF04C
#define S5P_FIMV_NAL_QUEUE_OUTPUT_SIZE				0xF050
#define S5P_FIMV_NAL_QUEUE_INPUT_COUNT				0xF054

#define S5P_FIMV_RET_INSTANCE_ID				0xF070
#define S5P_FIMV_ERROR_CODE					0xF074
#define S5P_FIMV_DBG_BUFFER_OUTPUT_SIZE				0xF078
#define S5P_FIMV_METADATA_STATUS				0xF07C

#define S5P_FIMV_DBG_INFO_STAGE_COUNTER				0xF088

/* NAL QUEUE */
#define S5P_FIMV_NAL_QUEUE_OUTPUT_COUNT				0xF08C
#define S5P_FIMV_NAL_QUEUE_INPUT_EXE_COUNT			0xF090
#define S5P_FIMV_NAL_QUEUE_INFO					0xF094

/* Decoder Registers */
#define S5P_FIMV_D_CRC_CTRL					0xF0B0
#define S5P_FIMV_D_DEC_OPTIONS					0xF0B4

#define S5P_FIMV_D_DISPLAY_DELAY				0xF0B8

#define S5P_FIMV_D_SET_FRAME_WIDTH				0xF0BC
#define S5P_FIMV_D_SET_FRAME_HEIGHT				0xF0C0

#define S5P_FIMV_D_SEI_ENABLE					0xF0C4

#define S5P_FIMV_D_FORCE_PIXEL_VAL				0xF0C8

/* Buffer setting registers */
/* Session return */
#define S5P_FIMV_D_MIN_NUM_DPB					0xF0F0
#define S5P_FIMV_D_MIN_FIRST_PLANE_DPB_SIZE			0xF0F4
#define S5P_FIMV_D_MIN_SECOND_PLANE_DPB_SIZE			0xF0F8
#define S5P_FIMV_D_MIN_THIRD_PLANE_DPB_SIZE			0xF0FC
#define S5P_FIMV_D_MIN_NUM_MV					0xF100
#define S5P_FIMV_D_MVC_NUM_VIEWS				0xF104
#define S5P_FIMV_D_MIN_SCRATCH_BUFFER_SIZE			0xF108
#define S5P_FIMV_D_MIN_FIRST_PLANE_2BIT_DPB_SIZE		0xF10C
#define S5P_FIMV_D_MIN_SECOND_PLANE_2BIT_DPB_SIZE		0xF110
#define S5P_FIMV_D_POST_FILTER_LUMA_DPB0			0xF120
#define S5P_FIMV_D_POST_FILTER_LUMA_DPB1			0xF124
#define S5P_FIMV_D_POST_FILTER_CHROMA_DPB0			0xF128
#define S5P_FIMV_D_POST_FILTER_CHROMA_DPB1			0xF12C

/* Buffers */
#define S5P_FIMV_D_NUM_DPB					0xF130
#define S5P_FIMV_D_NUM_MV					0xF134
#define S5P_FIMV_D_FIRST_PLANE_DPB_STRIDE_SIZE			0xF138
#define S5P_FIMV_D_SECOND_PLANE_DPB_STRIDE_SIZE			0xF13C
#define S5P_FIMV_D_THIRD_PLANE_DPB_STRIDE_SIZE			0xF140
#define S5P_FIMV_D_FIRST_PLANE_DPB_SIZE				0xF144
#define S5P_FIMV_D_SECOND_PLANE_DPB_SIZE			0xF148
#define S5P_FIMV_D_THIRD_PLANE_DPB_SIZE				0xF14C
#define S5P_FIMV_D_MV_BUFFER_SIZE				0xF150
#define S5P_FIMV_D_INIT_BUFFER_OPTIONS				0xF154
#define S5P_FIMV_D_FIRST_PLANE_DPB0				0xF160
#define S5P_FIMV_D_SECOND_PLANE_DPB0				0xF260
#define S5P_FIMV_D_THIRD_PLANE_DPB0				0xF360
#define S5P_FIMV_D_MV_BUFFER0					0xF460
#define S5P_FIMV_D_SCRATCH_BUFFER_ADDR				0xF560
#define S5P_FIMV_D_SCRATCH_BUFFER_SIZE				0xF564
#define S5P_FIMV_D_METADATA_BUFFER_ADDR				0xF568
#define S5P_FIMV_D_METADATA_BUFFER_SIZE				0xF56C

#define S5P_FIMV_D_STATIC_BUFFER_ADDR				0xF570
#define S5P_FIMV_D_STATIC_BUFFER_SIZE				0xF574
#define S5P_FIMV_D_FIRST_PLANE_2BIT_DPB_SIZE			0xF578
#define S5P_FIMV_D_SECOND_PLANE_2BIT_DPB_SIZE			0xF57C
#define S5P_FIMV_D_FIRST_PLANE_2BIT_DPB_STRIDE_SIZE		0xF580
#define S5P_FIMV_D_SECOND_PLANE_2BIT_DPB_STRIDE_SIZE		0xF584

#define S5P_FIMV_D_NAL_START_OPTIONS				0xF5AC

/* Nal cmd */
#define S5P_FIMV_D_CPB_BUFFER_ADDR				0xF5B0
#define S5P_FIMV_D_CPB_BUFFER_SIZE				0xF5B4
#define S5P_FIMV_D_AVAILABLE_DPB_FLAG_UPPER			0xF5B8
#define S5P_FIMV_D_AVAILABLE_DPB_FLAG_LOWER			0xF5BC
#define S5P_FIMV_D_CPB_BUFFER_OFFSET				0xF5C0
#define S5P_FIMV_D_SLICE_IF_ENABLE				0xF5C4
#define S5P_FIMV_D_PICTURE_TAG					0xF5C8
#define S5P_FIMV_D_STREAM_DATA_SIZE				0xF5D0
#define S5P_FIMV_D_DYNAMIC_DPB_FLAG_UPPER			0xF5D4
#define S5P_FIMV_D_DYNAMIC_DPB_FLAG_LOWER			0xF5D8

/* Nal return */
#define S5P_FIMV_D_DISPLAY_FRAME_WIDTH				0xF600
#define S5P_FIMV_D_DISPLAY_FRAME_HEIGHT				0xF604
#define S5P_FIMV_D_DISPLAY_STATUS				0xF608
#define S5P_FIMV_D_DISPLAY_FIRST_PLANE_ADDR			0xF60C
#define S5P_FIMV_D_DISPLAY_SECOND_PLANE_ADDR			0xF610
#define S5P_FIMV_D_DISPLAY_THIRD_PLANE_ADDR			0xF614
#define S5P_FIMV_D_DISPLAY_FRAME_TYPE				0xF618
#define S5P_FIMV_D_DISPLAY_CROP_INFO1				0xF61C
#define S5P_FIMV_D_DISPLAY_CROP_INFO2				0xF620
#define S5P_FIMV_D_DISPLAY_PICTURE_PROFILE			0xF624
#define S5P_FIMV_D_DISPLAY_FIRST_PLANE_CRC			0xF628
#define S5P_FIMV_D_DISPLAY_SECOND_PLANE_CRC			0xF62C
#define S5P_FIMV_D_DISPLAY_THIRD_PLANE_CRC			0xF630
#define S5P_FIMV_D_DISPLAY_ASPECT_RATIO				0xF634
#define S5P_FIMV_D_DISPLAY_EXTENDED_AR				0xF638
#define S5P_FIMV_D_DECODED_FRAME_WIDTH				0xF63C
#define S5P_FIMV_D_DECODED_FRAME_HEIGHT				0xF640
#define S5P_FIMV_D_DECODED_STATUS				0xF644
#define S5P_FIMV_D_DECODED_FIRST_PLANE_ADDR			0xF648
#define S5P_FIMV_D_DECODED_SECOND_PLANE_ADDR			0xF64C
#define S5P_FIMV_D_DECODED_THIRD_PLANE_ADDR			0xF650
#define S5P_FIMV_D_DECODED_FRAME_TYPE				0xF654
#define S5P_FIMV_D_DECODED_CROP_INFO1				0xF658
#define S5P_FIMV_D_DECODED_CROP_INFO2				0xF65C
#define S5P_FIMV_D_DECODED_PICTURE_PROFILE			0xF660
#define S5P_FIMV_D_DECODED_NAL_SIZE				0xF664
#define S5P_FIMV_D_DECODED_FIRST_PLANE_CRC			0xF668
#define S5P_FIMV_D_DECODED_SECOND_PLANE_CRC			0xF66C
#define S5P_FIMV_D_DECODED_THIRD_PLANE_CRC			0xF670
#define S5P_FIMV_D_RET_PICTURE_TAG_TOP				0xF674
#define S5P_FIMV_D_RET_PICTURE_TAG_BOT				0xF678
#define S5P_FIMV_D_RET_PICTURE_TIME_TOP				0xF67C
#define S5P_FIMV_D_RET_PICTURE_TIME_BOT				0xF680
#define S5P_FIMV_D_CHROMA_FORMAT				0xF684

#define S5P_FIMV_D_VC1_INFO					0xF688
#define S5P_FIMV_D_MPEG4_INFO					0xF68C
#define S5P_FIMV_D_H264_INFO					0xF690
#define S5P_FIMV_D_HEVC_INFO					0xF6A0

#define S5P_FIMV_D_METADATA_ADDR_CONCEALED_MB			0xF6B0
#define S5P_FIMV_D_METADATA_SIZE_CONCEALED_MB			0xF6B4
#define S5P_FIMV_D_METADATA_ADDR_VC1_PARAM			0xF6B8
#define S5P_FIMV_D_METADATA_SIZE_VC1_PARAM			0xF6BC
#define S5P_FIMV_D_METADATA_ADDR_SEI_NAL			0xF6C0
#define S5P_FIMV_D_METADATA_SIZE_SEI_NAL			0xF6C4
#define S5P_FIMV_D_METADATA_ADDR_VUI				0xF6C8
#define S5P_FIMV_D_METADATA_SIZE_VUI				0xF6CC
#define S5P_FIMV_D_METADATA_ADDR_MVCVUI				0xF6D0
#define S5P_FIMV_D_METADATA_SIZE_MVCVUI				0xF6D4

#define S5P_FIMV_D_MVC_VIEW_ID					0xF6D8

#define S5P_FIMV_D_SEI_AVAIL					0xF6DC
#define S5P_FIMV_D_FRAME_PACK_ARRGMENT_ID			0xF6E0
#define S5P_FIMV_D_FRAME_PACK_SEI_INFO				0xF6E4
#define S5P_FIMV_D_FRAME_PACK_GRID_POS				0xF6E8

#define S5P_FIMV_D_DISPLAY_RECOVERY_SEI_INFO			0xF6EC
#define S5P_FIMV_D_DECODED_RECOVERY_SEI_INFO			0xF6F0

#define S5P_FIMV_D_DISPLAY_FIRST_PLANE_2BIT_CRC			0xF6FC
#define S5P_FIMV_D_DISPLAY_SECOND_PLANE_2BIT_CRC		0xF700
#define S5P_FIMV_D_DECODED_FIRST_PLANE_2BIT_CRC			0xF704
#define S5P_FIMV_D_DECODED_SECOND_PLANE_2BIT_CRC		0xF708

#define S5P_FIMV_D_VIDEO_SIGNAL_TYPE				0xF70C
#define S5P_FIMV_D_CONTENT_LIGHT_LEVEL_INFO_SEI			0xF710
#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_0	0xF714
#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_1	0xF718

#define S5P_FIMV_D_USED_DPB_FLAG_UPPER				0xF720
#define S5P_FIMV_D_USED_DPB_FLAG_LOWER				0xF724

#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_2	0xF728
#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_3	0xF72C
#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_4	0xF730
#define S5P_FIMV_D_MASTERING_DISPLAY_COLOUR_VOLUME_SEI_5	0xF734

#define S5P_FIMV_D_BLACK_BAR_START_POS				0xF738
#define S5P_FIMV_D_BLACK_BAR_IMAGE_SIZE				0xF73C

#define S5P_FIMV_D_DISPLAY_LUMA_ADDR				0xF60C
#define S5P_FIMV_D_DISPLAY_CHROMA_ADDR				0xF610

#define S5P_FIMV_D_DECODED_LUMA_ADDR				0xF648
#define S5P_FIMV_D_DECODED_CHROMA_ADDR				0xF64C

/* Encoder Registers */
#define S5P_FIMV_E_FRAME_WIDTH					0xF770
#define S5P_FIMV_E_FRAME_HEIGHT					0xF774
#define S5P_FIMV_E_CROPPED_FRAME_WIDTH				0xF778
#define S5P_FIMV_E_CROPPED_FRAME_HEIGHT				0xF77C
#define S5P_FIMV_E_FRAME_CROP_OFFSET				0xF780
#define S5P_FIMV_E_ENC_OPTIONS					0xF784
#define S5P_FIMV_E_PICTURE_PROFILE				0xF788
#define S5P_FIMV_E_VBV_BUFFER_SIZE				0xF78C
#define S5P_FIMV_E_VBV_INIT_DELAY				0xF790
#define S5P_FIMV_E_FIXED_PICTURE_QP				0xF794
#define S5P_FIMV_E_RC_CONFIG					0xF798
#define S5P_FIMV_E_RC_QP_BOUND					0xF79C
#define S5P_FIMV_E_RC_QP_BOUND_PB				0xF7A0
#define S5P_FIMV_E_RC_MODE					0xF7A4

#define S5P_FIMV_E_MB_RC_CONFIG					0xF7A8
#define S5P_FIMV_E_PADDING_CTRL					0xF7AC
#define S5P_FIMV_E_AIR_THRESHOLD				0xF7B0

#define S5P_FIMV_E_MV_HOR_RANGE					0xF7B4
#define S5P_FIMV_E_MV_VER_RANGE					0xF7B8
#define S5P_FIMV_E_NUM_DPB					0xF890
#define S5P_FIMV_E_MIN_SCRATCH_BUFFER_SIZE			0xF894

#define S5P_FIMV_E_LUMA_DPB					0xF8C0
#define S5P_FIMV_E_CHROMA_DPB					0xF904
#define S5P_FIMV_E_ME_BUFFER					0xF948

#define S5P_FIMV_E_SCRATCH_BUFFER_ADDR				0xF98C
#define S5P_FIMV_E_SCRATCH_BUFFER_SIZE				0xF990
#define S5P_FIMV_E_TMV_BUFFER0					0xF994
#define S5P_FIMV_E_TMV_BUFFER1					0xF998
#define S5P_FIMV_E_IR_BUFFER_ADDR				0xF99C
#define S5P_FIMV_E_SOURCE_FIRST_ADDR				0xF9E0
#define S5P_FIMV_E_SOURCE_SECOND_ADDR				0xF9E4
#define S5P_FIMV_E_SOURCE_THIRD_ADDR				0xF9E8
#define S5P_FIMV_E_SOURCE_FIRST_STRIDE				0xF9EC
#define S5P_FIMV_E_SOURCE_SECOND_STRIDE				0xF9F0
#define S5P_FIMV_E_SOURCE_THIRD_STRIDE				0xF9F4
#define S5P_FIMV_E_STREAM_BUFFER_ADDR				0xF9F8
#define S5P_FIMV_E_STREAM_BUFFER_SIZE				0xF9FC
#define S5P_FIMV_E_ROI_BUFFER_ADDR				0xFA00

#define S5P_FIMV_E_PARAM_CHANGE					0xFA04
#define S5P_FIMV_E_IR_SIZE					0xFA08
#define S5P_FIMV_E_GOP_CONFIG					0xFA0C
#define S5P_FIMV_E_MSLICE_MODE					0xFA10
#define S5P_FIMV_E_MSLICE_SIZE_MB				0xFA14
#define S5P_FIMV_E_MSLICE_SIZE_BITS				0xFA18
#define S5P_FIMV_E_FRAME_INSERTION				0xFA1C

#define S5P_FIMV_E_RC_FRAME_RATE				0xFA20
#define S5P_FIMV_E_RC_BIT_RATE					0xFA24
#define S5P_FIMV_E_RC_ROI_CTRL					0xFA2C
#define S5P_FIMV_E_PICTURE_TAG					0xFA30
#define S5P_FIMV_E_BIT_COUNT_ENABLE				0xFA34
#define S5P_FIMV_E_MAX_BIT_COUNT				0xFA38
#define S5P_FIMV_E_MIN_BIT_COUNT				0xFA3C

#define S5P_FIMV_E_METADATA_BUFFER_ADDR				0xFA40
#define S5P_FIMV_E_METADATA_BUFFER_SIZE				0xFA44

#define S5P_FIMV_E_ENCODING_ORDER_TIME_INFO			0xFA50
#define S5P_FIMV_E_ENCODING_ORDER_INFO				0xFA54
#define S5P_FIMV_E_STREAM_BUFFER_OFFSET				0xFA58
#define S5P_FIMV_E_GOP_CONFIG2					0xFA5C

#define S5P_FIMV_E_ENCODED_SOURCE_FIRST_ADDR			0xFA70
#define S5P_FIMV_E_ENCODED_SOURCE_SECOND_ADDR			0xFA74
#define S5P_FIMV_E_ENCODED_SOURCE_THIRD_ADDR			0xFA78

#define S5P_FIMV_E_STREAM_SIZE					0xFA80
#define S5P_FIMV_E_SLICE_TYPE					0xFA84
#define S5P_FIMV_E_PICTURE_COUNT				0xFA88
#define S5P_FIMV_E_RET_PICTURE_TAG				0xFA8C

#define S5P_FIMV_E_RECON_LUMA_DPB_ADDR				0xFA9C
#define S5P_FIMV_E_RECON_CHROMA_DPB_ADDR			0xFAA0
#define S5P_FIMV_E_METADATA_ADDR_ENC_SLICE			0xFAA4
#define S5P_FIMV_E_METADATA_SIZE_ENC_SLICE			0xFAA8

#define S5P_FIMV_E_NAL_DONE_INFO				0xFAEC

#define S5P_FIMV_E_MPEG4_OPTIONS				0xFB10
#define S5P_FIMV_E_MPEG4_HEC_PERIOD				0xFB14

#define S5P_FIMV_E_H264_HD_SVC_EXTENSION_0			0xFB44
#define S5P_FIMV_E_H264_HD_SVC_EXTENSION_1			0xFB48
#define S5P_FIMV_E_ASPECT_RATIO					0xFB4C
#define S5P_FIMV_E_EXTENDED_SAR					0xFB50

#define S5P_FIMV_E_H264_OPTIONS					0xFB54
#define S5P_FIMV_E_H264_OPTIONS_2				0xFB58
#define S5P_FIMV_E_H264_LF_ALPHA_OFFSET				0xFB5C
#define S5P_FIMV_E_H264_LF_BETA_OFFSET				0xFB60
#define S5P_FIMV_E_H264_REFRESH_PERIOD				0xFB64

#define S5P_FIMV_E_H264_FMO_SLICE_GRP_MAP_TYPE			0xFB68
#define S5P_FIMV_E_H264_FMO_NUM_SLICE_GRP_MINUS1		0xFB6C
#define S5P_FIMV_E_H264_FMO_SLICE_GRP_CHANGE_DIR		0xFB70
#define S5P_FIMV_E_H264_FMO_SLICE_GRP_CHANGE_RATE_MINUS1	0xFB74
#define S5P_FIMV_E_H264_FMO_RUN_LENGTH_MINUS1_0			0xFB78
#define S5P_FIMV_E_H264_FMO_RUN_LENGTH_MINUS1_1			0xFB7C
#define S5P_FIMV_E_H264_FMO_RUN_LENGTH_MINUS1_2			0xFB80
#define S5P_FIMV_E_H264_FMO_RUN_LENGTH_MINUS1_3			0xFB84

#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_0			0xFB88
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_1			0xFB8C
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_2			0xFB90
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_3			0xFB94
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_4			0xFB98
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_5			0xFB9C
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_6			0xFBA0
#define S5P_FIMV_E_H264_ASO_SLICE_ORDER_7			0xFBA4
#define S5P_FIMV_E_H264_CHROMA_QP_OFFSET			0xFBA8

#define S5P_FIMV_E_NUM_T_LAYER					0xFBAC
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER0			0xFBB0
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER1			0xFBB4
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER2			0xFBB8
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER3			0xFBBC
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER4			0xFBC0
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER5			0xFBC4
#define S5P_FIMV_E_HIERARCHICAL_QP_LAYER6			0xFBC8

/* For backward compatibility */
#define S5P_FIMV_E_H264_FRAME_PACKING_SEI_INFO			0xFC4C

#define S5P_FIMV_E_H264_NAL_CONTROL				0xFD14
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER0			0xFD18
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER1			0xFD1C
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER2			0xFD20
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER3			0xFD24
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER4			0xFD28
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER5			0xFD2C
#define S5P_FIMV_E_HIERARCHICAL_BIT_RATE_LAYER6			0xFD30

#define S5P_FIMV_E_MVC_FRAME_QP_VIEW1				0xFD40
#define S5P_FIMV_E_MVC_RC_FRAME_RATE_VIEW1			0xFD44
#define S5P_FIMV_E_MVC_RC_BIT_RATE_VIEW1			0xFD48
#define S5P_FIMV_E_MVC_RC_QBOUND_VIEW1				0xFD4C
#define S5P_FIMV_E_MVC_RC_MODE_VIEW1				0xFD50
#define S5P_FIMV_E_MVC_INTER_VIEW_PREDICTION_ON			0xFD80

#define S5P_FIMV_E_VP9_OPTION					0xFD90
#define S5P_FIMV_E_VP9_FILTER_OPTIONS				0xFD94
#define S5P_FIMV_E_VP9_GOLDEN_FRAME_OPTION			0xFD98
#define S5P_FIMV_E_VP8_OPTION					0xFDB0
#define S5P_FIMV_E_VP8_FILTER_OPTIONS				0xFDB4
#define S5P_FIMV_E_VP8_GOLDEN_FRAME_OPTION			0xFDB8

#define S5P_FIMV_E_HEVC_OPTIONS					0xFDD4
#define S5P_FIMV_E_HEVC_REFRESH_PERIOD				0xFDD8
#define S5P_FIMV_E_HEVC_CHROMA_QP_OFFSET			0xFDDC
#define S5P_FIMV_E_HEVC_LF_BETA_OFFSET_DIV2			0xFDE0
#define S5P_FIMV_E_HEVC_LF_TC_OFFSET_DIV2			0xFDE4
#define S5P_FIMV_E_HEVC_NAL_CONTROL				0xFDE8

#define S5P_FIMV_E_VP8_NAL_CONTROL				0xFDF0
#define S5P_FIMV_E_VP9_NAL_CONTROL				0xFDF4


#define S5P_FIMV_REG_CLEAR_BEGIN			0xf000
#define S5P_FIMV_REG_CLEAR_COUNT			1024


/* Bit Definitions */
/* 0x1100: S5P_FIMV_HOST2RISC_CMD */
#define S5P_FIMV_H2R_CMD_EMPTY				0
#define S5P_FIMV_H2R_CMD_SYS_INIT			1
#define S5P_FIMV_H2R_CMD_OPEN_INSTANCE			2
#define S5P_FIMV_H2R_CMD_SEQ_HEADER			3
#define S5P_FIMV_H2R_CMD_INIT_BUFFERS			4
#define S5P_FIMV_H2R_CMD_NAL_START			5
#define S5P_FIMV_H2R_CMD_CLOSE_INSTANCE			6
#define S5P_FIMV_H2R_CMD_SLEEP				7
#define S5P_FIMV_H2R_CMD_WAKEUP				8
#define S5P_FIMV_H2R_CMD_LAST_FRAME			9
#define S5P_FIMV_H2R_CMD_DPB_FLUSH			10
#define S5P_FIMV_H2R_CMD_NAL_ABORT			11
#define S5P_FIMV_H2R_CMD_CACHE_FLUSH			12
#define S5P_FIMV_H2R_CMD_NAL_QUEUE			13
#define S5P_FIMV_H2R_CMD_STOP_QUEUE			14


/* 0x1104: S5P_FIMV_RISC2HOST_CMD */
#define S5P_FIMV_RISC2HOST_CMD_MASK			0x1FFFF
#define S5P_FIMV_R2H_CMD_EMPTY				0
#define S5P_FIMV_R2H_CMD_SYS_INIT_RET			1
#define S5P_FIMV_R2H_CMD_OPEN_INSTANCE_RET		2
#define S5P_FIMV_R2H_CMD_SEQ_DONE_RET			3
#define S5P_FIMV_R2H_CMD_INIT_BUFFERS_RET		4
#define S5P_FIMV_R2H_CMD_CLOSE_INSTANCE_RET		6
#define S5P_FIMV_R2H_CMD_SLEEP_RET			7
#define S5P_FIMV_R2H_CMD_WAKEUP_RET			8
#define S5P_FIMV_R2H_CMD_COMPLETE_SEQ_RET		9
#define S5P_FIMV_R2H_CMD_DPB_FLUSH_RET			10
#define S5P_FIMV_R2H_CMD_NAL_ABORT_RET			11
#define S5P_FIMV_R2H_CMD_FW_STATUS_RET			12
#define S5P_FIMV_R2H_CMD_FRAME_DONE_RET			13
#define S5P_FIMV_R2H_CMD_FIELD_DONE_RET			14
#define S5P_FIMV_R2H_CMD_SLICE_DONE_RET			15
#define S5P_FIMV_R2H_CMD_ENC_BUFFER_FULL_RET		16
#define S5P_FIMV_R2H_CMD_QUEUE_DONE_RET			17
#define S5P_FIMV_R2H_CMD_COMPLETE_QUEUE_RET		18
#define S5P_FIMV_R2H_CMD_CACHE_FLUSH_RET		20
#define S5P_FIMV_R2H_CMD_ERR_RET			32


/* 0xF000: S5P_FIMV_FW_VERSION */
#define S5P_FIMV_FW_VER_INFO_MASK			0xFF
#define S5P_FIMV_FW_VER_INFO_SHFT			24
#define S5P_FIMV_FW_VER_YEAR_MASK			0xFF
#define S5P_FIMV_FW_VER_YEAR_SHFT			16
#define S5P_FIMV_FW_VER_MONTH_MASK			0xFF
#define S5P_FIMV_FW_VER_MONTH_SHFT			8
#define S5P_FIMV_FW_VER_DATE_MASK			0xFF
#define S5P_FIMV_FW_VER_DATE_SHFT			0
#define S5P_FIMV_FW_VER_ALL_MASK			0xFFFFFF
#define S5P_FIMV_FW_VER_ALL_SHFT			0


/* 0xF00C: S5P_FIMV_CODEC_TYPE */
#define MFC_FORMATS_NO_CODEC				-1
/* Decoder */
#define S5P_FIMV_CODEC_H264_DEC				0
#define S5P_FIMV_CODEC_H264_MVC_DEC			1
#define S5P_FIMV_CODEC_MPEG4_DEC			3
#define S5P_FIMV_CODEC_FIMV1_DEC			4
#define S5P_FIMV_CODEC_FIMV2_DEC			5
#define S5P_FIMV_CODEC_FIMV3_DEC			6
#define S5P_FIMV_CODEC_FIMV4_DEC			7
#define S5P_FIMV_CODEC_H263_DEC				8
#define S5P_FIMV_CODEC_VC1_RCV_DEC			9
#define S5P_FIMV_CODEC_VC1_DEC				10
#define S5P_FIMV_CODEC_MPEG2_DEC			13
#define S5P_FIMV_CODEC_VP8_DEC				14
#define S5P_FIMV_CODEC_HEVC_DEC				17
#define S5P_FIMV_CODEC_VP9_DEC				18
/* Encoder */
#define S5P_FIMV_CODEC_H264_ENC				20
#define S5P_FIMV_CODEC_H264_MVC_ENC			21
#define S5P_FIMV_CODEC_MPEG4_ENC			23
#define S5P_FIMV_CODEC_H263_ENC				24
#define S5P_FIMV_CODEC_VP8_ENC				25
#define S5P_FIMV_CODEC_HEVC_ENC				26
#define S5P_FIMV_CODEC_VP9_ENC				27


/* 0xF028: S5P_FIMV_MFC_VERSION */
#define S5P_FIMV_MFC_VER_MASK				0xFFFFFFFF
#define S5P_FIMV_MFC_VER_SHFT				0


/* 0xF074: S5P_FIMV_ERROR_CODE */
#define S5P_FIMV_ERR_STATUS_MASK			0xFFFF
#define S5P_FIMV_ERR_STATUS_SHIFT			0
#define S5P_FIMV_WARN_STATUS_MASK			0xFFFF
#define S5P_FIMV_WARN_STATUS_SHIFT			16
/* Error number */
#define S5P_FIMV_ERR_NO_KEY_FRAME			34
#define S5P_FIMV_ERR_VPS_ONLY_ERROR			42
#define S5P_FIMV_ERR_NULL_SCRATCH			61

#define S5P_FIMV_ERR_UNSUPPORTED_FEATURE		100
#define S5P_FIMV_ERR_UNSUPPORTED_RESOLUTION		101
#define S5P_FIMV_ERR_HEADER_NOT_FOUND			102
#define S5P_FIMV_ERR_INVAILD_NAL_TYPE			103
#define S5P_FIMV_ERR_SEQUENCE_HEADER			104
#define S5P_FIMV_ERR_FRAME_CONCEAL			150
#define S5P_FIMV_ERR_WARNINGS_START			160
#define S5P_FIMV_ERR_BROKEN_LINK			161
#define S5P_FIMV_ERR_SYNC_POINT_NOT_RECEIVED		190
#define S5P_FIMV_ERR_NON_PAIRED_FIELD			191
#define S5P_FIMV_ERR_WARNINGS_END			222


/* 0xF0B4: S5P_FIMV_D_DEC_OPTIONS */
#define S5P_FIMV_D_DEC_OPT_DISPLAY_DELAY_EN_SHIFT	3
#define S5P_FIMV_D_DEC_OPT_FMO_ASO_CTRL_MASK		0x1
#define S5P_FIMV_D_DEC_OPT_FMO_ASO_CTRL_SHIFT		4
#define S5P_FIMV_D_DEC_OPT_IDR_DECODING_MASK		0x1
#define S5P_FIMV_D_DEC_OPT_IDR_DECODING_SHIFT		6
#define S5P_FIMV_D_DEC_OPT_DISCARD_RCV_HEADER_SHIFT	7
#define S5P_FIMV_D_DEC_OPT_CONCEAL_CONTROL_SHIFT	8
#define S5P_FIMV_D_DEC_OPT_PARALLEL_PROCESSING_SHIFT	11
#define S5P_FIMV_D_DEC_OPT_REALLOC_CONTROL_SHIFT	13
#define S5P_FIMV_D_DEC_OPT_SPECIAL_PARSING_SHIFT	15


/* 0xF0C4: S5P_FIMV_D_SEI_ENABLE */
#define S5P_FIMV_D_SEI_ENABLE_NEED_INIT_BUFFER_SHIFT	1
#define S5P_FIMV_D_SEI_ENABLE_RECOVERY_PARSING_SHIFT	2
#define S5P_FIMV_D_SEI_ENABLE_CONTENT_LIGHT_SHIFT	4
#define S5P_FIMV_D_SEI_ENABLE_MASTERING_DISPLAY_SHIFT	5


/* 0xF154: S5P_FIMV_D_INIT_BUFFER_OPTIONS */
#define S5P_FIMV_D_INIT_BUF_OPT_LF_CTRL_MASK		0x3
#define S5P_FIMV_D_INIT_BUF_OPT_LF_CTRL_SHIFT		1
#define S5P_FIMV_D_INIT_BUF_OPT_DYNAMIC_DPB_SET_SHIFT	3
#define S5P_FIMV_D_INIT_BUF_OPT_COPY_NOT_CODED_SHIFT	4
#define S5P_FIMV_D_INIT_BUF_OPT_DITHERING_EN_SHIFT	6


/* 0xF5AC: S5P_FIMV_D_NAL_START_OPTIONS */
#define S5P_FIMV_D_NAL_START_OPT_BLACK_BAR_SHIFT	3


/* 0xF608: S5P_FIMV_D_DISPLAY_STATUS */
#define S5P_FIMV_DISP_STATUS_DISPLAY_STATUS_MASK	0x7
#define S5P_FIMV_DISP_STATUS_INTERLACE_MASK		0x1
#define S5P_FIMV_DISP_STATUS_INTERLACE_SHIFT		3
#define S5P_FIMV_DISP_STATUS_RES_CHANGE_MASK		0x3
#define S5P_FIMV_DISP_STATUS_RES_CHANGE_SHIFT		4
#define S5P_FIMV_DISP_STATUS_NEED_DPB_CHANGE_MASK	0x1
#define S5P_FIMV_DISP_STATUS_NEED_DPB_CHANGE_SHIFT	9
#define S5P_FIMV_DISP_STATUS_NEED_SCRATCH_CHANGE_MASK	0x1
#define S5P_FIMV_DISP_STATUS_NEED_SCRATCH_CHANGE_SHIFT	10
#define S5P_FIMV_DISP_STATUS_NEED_EMPTY_DPB_MASK	0x1
#define S5P_FIMV_DISP_STATUS_NEED_EMPTY_DPB_SHIFT	12
#define S5P_FIMV_DISP_STATUS_BLACK_BAR_DETECT_MASK	0x3
#define S5P_FIMV_DISP_STATUS_BLACK_BAR_DETECT_SHIFT	13
#define S5P_FIMV_DISP_STATUS_NOT_DETECTED		0x0
#define S5P_FIMV_DISP_STATUS_BLACK_BAR			0x1
#define S5P_FIMV_DISP_STATUS_BLACK_SCREEN		0x2


/* 0xF618: S5P_FIMV_D_DISPLAY_FRAME_TYPE */
#define S5P_FIMV_DISPLAY_FRAME_MASK			0x7
#define S5P_FIMV_DISPLAY_TEMP_INFO_MASK			0x1
#define S5P_FIMV_DISPLAY_TEMP_INFO_SHIFT		7
#define S5P_FIMV_DISPLAY_FRAME_NOT_CODED		0
#define S5P_FIMV_DISPLAY_FRAME_I			1
#define S5P_FIMV_DISPLAY_FRAME_P			2
#define S5P_FIMV_DISPLAY_FRAME_B			3


/* 0xF61C: S5P_FIMV_D_DISPLAY_CROP_INFO1 */
#define S5P_FIMV_D_SHARED_CROP_LEFT_MASK		0xFFFF
#define S5P_FIMV_D_SHARED_CROP_RIGHT_SHIFT		16


/* 0xF620: S5P_FIMV_D_DISPLAY_CROP_INFO2 */
#define S5P_FIMV_D_SHARED_CROP_TOP_MASK			0xFFFF
#define S5P_FIMV_D_SHARED_CROP_BOTTOM_SHIFT		16


/* 0xF644: S5P_FIMV_D_DECODED_STATUS */
#define S5P_FIMV_DEC_STATUS_DECODED_STATUS_MASK		0x7
#define S5P_FIMV_DEC_STATUS_DECODING_ONLY		0
#define S5P_FIMV_DEC_STATUS_DECODING_DISPLAY		1
#define S5P_FIMV_DEC_STATUS_DISPLAY_ONLY		2
#define S5P_FIMV_DEC_STATUS_DECODING_EMPTY		3


/* 0xF654: S5P_FIMV_D_DECODED_FRAME_TYPE */
#define S5P_FIMV_DECODED_FRAME_MASK			0x7
#define S5P_FIMV_DECODED_FRAME_NOT_CODED		0
#define S5P_FIMV_DECODED_FRAME_I			1
#define S5P_FIMV_DECODED_FRAME_P			2
#define S5P_FIMV_DECODED_FRAME_B			3


/* 0xF660: S5P_FIMV_D_DECODED_PICTURE_PROFILE */
#define S5P_FIMV_D_DECODED_PIC_PROFILE_MASK		0x1F
#define S5P_FIMV_D_BIT_DEPTH_LUMA_MINUS8_MASK		0x7
#define S5P_FIMV_D_BIT_DEPTH_LUMA_MINUS8_SHIFT		16
#define S5P_FIMV_D_PROFILE_HEVC_MAIN			1
#define S5P_FIMV_D_PROFILE_HEVC_MAIN_10			2
#define S5P_FIMV_D_PROFILE_HEVC_RANGE_EXT		4


/* 0xF6D8: S5P_FIMV_D_MVC_VIEW_ID */
#define S5P_FIMV_D_MVC_VIEW_ID_DISP_MASK		0xFFFF


/* 0xF6DC: S5P_FIMV_D_SEI_AVAIL */
#define S5P_FIMV_D_SEI_AVAIL_FRAME_PACK_MASK		0x1
#define S5P_FIMV_D_SEI_AVAIL_CONTENT_LIGHT_MASK		0x1
#define S5P_FIMV_D_SEI_AVAIL_CONTENT_LIGHT_SHIFT	1
#define S5P_FIMV_D_SEI_AVAIL_MASTERING_DISPLAY_MASK	0x1
#define S5P_FIMV_D_SEI_AVAIL_MASTERING_DISPLAY_SHIFT	2


/* 0xF6A0: S5P_FIMV_D_HEVC_INFO */
#define S5P_FIMV_D_HEVC_INFO_SHIFT			2
#define S5P_FIMV_D_HEVC_INFO_MAIN_12_MASK		0x1FF
#define S5P_FIMV_D_HEVC_INFO_MAIN_12_VAL		0x119
#define S5P_FIMV_D_HEVC_INFO_MAIN_422_10_INTRA_MASK	0xFF
#define S5P_FIMV_D_HEVC_INFO_MAIN_422_10_INTRA_VAL	0x4B


/* 0xF70C: S5P_FIMV_D_VIDEO_SIGNAL_TYPE */
#define S5P_FIMV_D_VIDEO_SIGNAL_TYPE_FLAG_MASK		0x1
#define S5P_FIMV_D_VIDEO_SIGNAL_TYPE_FLAG_SHIFT		29
#define S5P_FIMV_D_COLOUR_DESCRIPTION_FLAG_MASK		0x1
#define S5P_FIMV_D_COLOUR_DESCRIPTION_FLAG_SHIFT	24


/* 0xF738: S5P_FIMV_D_BLACK_BAR_START_POS */
#define S5P_FIMV_D_BLACK_BAR_START_X_SHIFT		0
#define S5P_FIMV_D_BLACK_BAR_START_X_MASK		0xFFFF
#define S5P_FIMV_D_BLACK_BAR_START_Y_SHIFT		16
#define S5P_FIMV_D_BLACK_BAR_START_Y_MASK		0xFFFF


/* 0xF73C: S5P_FIMV_D_BLACK_BAR_IMAGE_SIZE */
#define S5P_FIMV_D_BLACK_BAR_IMAGE_W_SHIFT		0
#define S5P_FIMV_D_BLACK_BAR_IMAGE_W_MASK		0xFFFF
#define S5P_FIMV_D_BLACK_BAR_IMAGE_H_SHIFT		16
#define S5P_FIMV_D_BLACK_BAR_IMAGE_H_MASK		0xFFFF


/* 0xF784: S5P_FIMV_E_ENC_OPTIONS */
#define S5P_FIMV_E_ENC_OPT_FRAME_SKIP_EN_MASK		0x3
#define S5P_FIMV_E_ENC_OPT_SEQ_HEADER_CONTROL_MASK	0x1
#define S5P_FIMV_E_ENC_OPT_SEQ_HEADER_CONTROL_SHIFT	2
#define S5P_FIMV_E_ENC_OPT_IR_MODE_SHIFT		4
#define S5P_FIMV_E_ENC_OPT_NON_REFERENCE_EN_SHIFT	9
#define S5P_FIMV_E_ENC_OPT_PARALLEL_DIS_SHIFT		18


/* 0xF788: S5P_FIMV_E_PICTURE_PROFILE */
#define S5P_FIMV_E_PROFILE_H264_BASELINE		0
#define S5P_FIMV_E_PROFILE_H264_MAIN			1
#define S5P_FIMV_E_PROFILE_H264_HIGH			2
#define S5P_FIMV_E_PROFILE_H264_CONSTRAINED_BASELINE	3
#define S5P_FIMV_E_PROFILE_H264_CONSTRAINED_HIGH	5
#define S5P_FIMV_E_PROFILE_MPEG4_SIMPLE			0
#define S5P_FIMV_E_PROFILE_MPEG4_ADVANCED_SIMPLE	1
#define S5P_FIMV_E_PROFILE_HEVC_422_10_INTRA		2


/* 0xF7A4: S5P_FIMV_E_RC_MODE */
#define S5P_FIMV_E_RC_CBR_FIX				0
#define S5P_FIMV_E_RC_CBR_VAR				1
#define S5P_FIMV_E_RC_VBR				2
#define S5P_FIMV_E_RC_CBR_I_LIMIT			3


/* 0xFA84: S5P_FIMV_E_SLICE_TYPE */
#define S5P_FIMV_E_SLICE_TYPE_NOT_CODED			0
#define S5P_FIMV_E_SLICE_TYPE_I				1
#define S5P_FIMV_E_SLICE_TYPE_P				2
#define S5P_FIMV_E_SLICE_TYPE_B				3
#define S5P_FIMV_E_SLICE_TYPE_SKIPPED			4


#endif /* __REGS_MFC_V10_H */
