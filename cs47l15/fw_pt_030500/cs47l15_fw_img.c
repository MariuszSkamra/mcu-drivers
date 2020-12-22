/**
 * @file cs47l15_fw_img.c
 *
 * @brief CS47L15 FW IMG Source File
 *
 * @copyright
 * Copyright (c) Cirrus Logic 2020 All Rights Reserved, http://www.cirrus.com/
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * firmware_converter.py version: 3.1.0
 * Command:  ../../tools/firmware_converter/firmware_converter.py fw_img_v2 cs47l15 gaines_passthru_030500.wmfw --sym-input ../cs47l15_sym.h --generic-sym
 *
 */

/***********************************************************************************************************************
 * INCLUDES
 **********************************************************************************************************************/
#include "cs47l15_fw_img.h"

/***********************************************************************************************************************
 * FW_IMG
 **********************************************************************************************************************/

/**
 * @defgroup CS47L15_FW_IMG
 * @brief Firmware image
 *
 * @{
 */

const uint8_t cs47l15_fw_img[] = {
// Header
0xFF,0x98,0xB9,0x54, // IMG_MAGIC_NUMBER_1
0x02,0x00,0x00,0x00, // IMG_FORMAT_REV
0x88,0x0B,0x00,0x00, // IMG_SIZE
0x14,0x00,0x00,0x00, // SYM_TABLE_SIZE
0x02,0x00,0x00,0x00, // ALG_LIST_SIZE
0x20,0x00,0x0D,0x00, // FW_ID
0x00,0x05,0x03,0x00, // FW_VERSION
0x05,0x00,0x00,0x00, // DATA_BLOCKS
0x2C,0x10,0x00,0x00, // MAX_BLOCK_SIZE
0x00,0x00,0x00,0x00, // FW_IMG_VERSION
// Symbol Linking Table
0x01,0x00,0x00,0x00, // FIRMWARE_SYSTEM_CONFIG_XM_STRUCT_T
0x1C,0x00,0x0A,0x00, // 0xa001c
0x02,0x00,0x00,0x00, // FIRMWARE_SYS_ENABLE
0x1C,0x00,0x0A,0x00, // 0xa001c
0x03,0x00,0x00,0x00, // FIRMWARE_PLUGIN_VISIBLE_FIRMWARE_ID
0x1E,0x00,0x0A,0x00, // 0xa001e
0x04,0x00,0x00,0x00, // FIRMWARE_PLUGIN_VISIBLE_FIRMWARE_VERSION
0x20,0x00,0x0A,0x00, // 0xa0020
0x05,0x00,0x00,0x00, // FIRMWARE_ADSP2_STATE
0x22,0x00,0x0A,0x00, // 0xa0022
0x06,0x00,0x00,0x00, // FIRMWARE_ADSP2_WATCHDOG
0x24,0x00,0x0A,0x00, // 0xa0024
0x07,0x00,0x00,0x00, // FIRMWARE_DMA_BUFFER_SIZE
0x26,0x00,0x0A,0x00, // 0xa0026
0x08,0x00,0x00,0x00, // FIRMWARE_RDMA_CONTROL_TABLE
0x28,0x00,0x0A,0x00, // 0xa0028
0x09,0x00,0x00,0x00, // FIRMWARE_WDMA_CONTROL_TABLE
0x34,0x00,0x0A,0x00, // 0xa0034
0x0A,0x00,0x00,0x00, // FIRMWARE_BUILD_JOB_NAME
0x44,0x00,0x0A,0x00, // 0xa0044
0x0B,0x00,0x00,0x00, // FIRMWARE_BUILD_JOB_NUMBER
0x4A,0x00,0x0A,0x00, // 0xa004a
0x0C,0x00,0x00,0x00, // FIRMWARE_SYSTEM_CONFIG_ZM_STRUCT_T
0x00,0x00,0x0E,0x00, // 0xe0000
0x0D,0x00,0x00,0x00, // FIRMWARE_MAX_SYSTEM_GAIN
0x00,0x00,0x0E,0x00, // 0xe0000
0x01,0x10,0x00,0x00, // EG_ALGORITHM_EG_ALGORITHM_XM_STRUCT_T
0x4C,0x00,0x0A,0x00, // 0xa004c
0x02,0x10,0x00,0x00, // EG_ALGORITHM_EG_ALGORITHM_ENABLE
0x4C,0x00,0x0A,0x00, // 0xa004c
0x03,0x10,0x00,0x00, // EG_ALGORITHM_DUMMY_XM_CONFIG
0x4E,0x00,0x0A,0x00, // 0xa004e
0x04,0x10,0x00,0x00, // EG_ALGORITHM_EG_ALGORITHM_YM_STRUCT_T
0x00,0x00,0x0C,0x00, // 0xc0000
0x05,0x10,0x00,0x00, // EG_ALGORITHM_DUMMY_YM_CONFIG
0x00,0x00,0x0C,0x00, // 0xc0000
0x06,0x10,0x00,0x00, // EG_ALGORITHM_EG_ALGORITHM_ZM_STRUCT_T
0x02,0x00,0x0E,0x00, // 0xe0002
0x07,0x10,0x00,0x00, // EG_ALGORITHM_EG_ALGORITHM_GAIN
0x02,0x00,0x0E,0x00, // 0xe0002
// Algorithm ID List
0x20,0x00,0x0D,0x00, // FIRMWARE
0x01,0xF0,0x00,0x00, // EG_ALGORITHM
// Firmware Data
0xB0,0x00,0x00,0x00, // FW_BLOCK_SIZE_0
0x00,0x00,0x0A,0x00, // FW_BLOCK_ADDR_0
0x00,0x02,0x00,0x00,0x00,0x00,0x05,0x01,0x00,0x0D,0x00,0x20,0x00,0x03,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,
0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x01,0x00,0x00,0xF0,0x01,0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x26,
0x00,0x00,0x00,0x00,0x00,0xBE,0xDE,0xAD,0x00,0x00,0x00,0x01,0x00,0x0D,0x00,0x20,0x00,0x03,0x05,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x8C,0x00,0x00,0x00,0x98,0x00,0x00,0x00,0xA4,0x00,0x00,0x00,0xB0,
0x00,0x00,0x00,0xBC,0x00,0x00,0x00,0xC8,0x00,0x00,0x00,0x2C,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x44,0x00,0x00,0x00,0x50,
0x00,0x00,0x00,0x5C,0x00,0x00,0x00,0x68,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x80,0x00,0x4D,0x61,0x6E,0x00,0x75,0x61,0x6C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x12,
0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
0x18,0x00,0x00,0x00, // FW_BLOCK_SIZE_1
0xAA,0x01,0x0A,0x00, // FW_BLOCK_ADDR_1
0x00,0x00,0x00,0x09,0x00,0x00,0x00,0x12,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x49,0x00,0x00,0x00,0x93,0x00,0x00,0x00,0x00,
0x08,0x00,0x00,0x00, // FW_BLOCK_SIZE_2
0x00,0x00,0x0C,0x00, // FW_BLOCK_ADDR_2
0x00,0x10,0x00,0x00,0x00,0x20,0x00,0x00,
0xB0,0x09,0x00,0x00, // FW_BLOCK_SIZE_3
0x00,0x00,0x08,0x00, // FW_BLOCK_ADDR_3
0x00,0x40,0x01,0x14,0x00,0x03,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x7A,0x80,0x08,0x00,0x79,0x00,0x40,0x02,0x00,0x08,0xE5,
0x00,0x34,0x00,0x04,0x80,0x00,0x00,0x00,0x11,0x04,0x00,0x26,0x00,0x82,0x06,0x42,0x1C,0x04,0x00,0x08,0x80,0x53,0x40,0x06,
0x00,0x40,0x02,0x68,0x20,0x64,0x00,0x01,0x7F,0xF0,0x00,0x00,0x00,0x48,0x00,0x00,0x01,0xE6,0x00,0x35,0x03,0x03,0x50,0x30,
0x00,0x23,0x02,0x50,0xA8,0x06,0x00,0x34,0x00,0x54,0x00,0x26,0x00,0x82,0x06,0x40,0x17,0xFF,0x00,0x60,0x00,0x00,0x00,0x00,
0x00,0x40,0x01,0x00,0x0A,0x30,0x00,0x48,0x00,0x00,0x01,0x26,0x00,0x00,0x00,0x03,0x50,0x11,0x00,0x23,0x02,0x51,0x00,0x14,
0x00,0x83,0x02,0x43,0x50,0x12,0x00,0x23,0x02,0x51,0x00,0x0C,0x00,0x35,0x00,0x62,0x1C,0xC4,0x00,0x08,0x00,0x53,0x40,0x01,
0x00,0x40,0x02,0x68,0x20,0x64,0x00,0x01,0x7F,0xF0,0x00,0x00,0x00,0x60,0x80,0x50,0x00,0x00,0x00,0x40,0x02,0x00,0x09,0xE5,
0x00,0x7A,0x00,0x10,0x00,0x86,0x00,0x40,0x02,0x00,0x09,0xE4,0x00,0x7A,0x00,0x08,0x00,0x00,0x00,0x40,0x02,0x00,0x09,0xE4,
0x00,0x40,0x02,0x00,0x09,0xA4,0x00,0x40,0x01,0x00,0x06,0xB0,0x00,0x40,0x01,0x00,0x05,0x31,0x00,0x48,0x00,0x00,0x02,0x14,
0x00,0x7A,0x80,0x08,0x00,0x00,0x00,0x48,0x00,0x00,0x00,0xBE,0x00,0x60,0x00,0x00,0x30,0x04,0x00,0x40,0x02,0x00,0x09,0xA5,
0x00,0x40,0x01,0x00,0x06,0xB0,0x00,0x40,0x01,0x00,0x05,0x31,0x00,0x48,0x00,0x00,0x02,0xAA,0x00,0x36,0x00,0x03,0x40,0x02,
0x00,0x48,0x00,0x00,0x03,0x12,0x00,0x40,0x02,0x00,0x08,0xE4,0x00,0x40,0x01,0x00,0x23,0x32,0x00,0x83,0x07,0xA8,0x30,0x24,
0x00,0x40,0x01,0x00,0x0B,0x32,0x00,0x83,0x00,0x54,0x80,0x00,0x00,0x00,0x31,0xC8,0x30,0xBA,0x00,0x40,0x02,0x00,0x09,0x25,
0x00,0x70,0xD3,0x28,0x29,0x14,0x00,0x40,0x0B,0xFF,0xFF,0xFD,0x00,0x71,0x81,0x28,0x30,0x98,0x00,0x83,0x05,0xA6,0x88,0x02,
0x00,0x83,0x03,0x44,0x00,0x20,0x00,0x00,0x96,0x43,0x40,0x00,0x00,0x40,0x02,0x00,0x09,0x64,0x00,0x78,0x00,0x00,0x40,0xC1,
0x00,0x83,0x0B,0x98,0x01,0x10,0x00,0x80,0x12,0x08,0x30,0xF9,0x00,0x83,0x12,0x88,0x31,0x7A,0x00,0x60,0x00,0x00,0x01,0x00,
0x00,0x40,0x02,0x00,0x09,0xA4,0x00,0x40,0x01,0x00,0x00,0x77,0x00,0x40,0x01,0x00,0x35,0x33,0x00,0x48,0x00,0x00,0x00,0xE8,
0x00,0x83,0x1B,0x88,0x31,0x08,0x00,0x70,0xD3,0x00,0x30,0xD9,0x00,0x70,0xE4,0x20,0x31,0x5A,0x00,0x83,0x19,0x88,0x44,0x61,
0x00,0x84,0x06,0x08,0x48,0x62,0x00,0x83,0x0F,0x96,0x8B,0xF5,0x00,0x83,0x12,0x48,0x31,0x7A,0x00,0x7A,0x80,0x20,0x30,0x5A,
0x00,0x83,0x01,0x48,0x48,0xC2,0x00,0x82,0xCB,0x18,0x40,0xC0,0x00,0x80,0x12,0x08,0x30,0x78,0x00,0x83,0x0F,0x98,0x31,0x3A,
0x00,0x40,0x01,0x80,0x02,0xE5,0x00,0x40,0x01,0x3F,0xFF,0xF1,0x00,0x40,0x01,0x00,0x00,0x77,0x00,0x40,0x01,0x00,0x35,0x33,
0x00,0x48,0x00,0x00,0x00,0xE8,0x00,0x40,0x02,0x00,0x09,0xA4,0x00,0x40,0x01,0x80,0x02,0xA4,0x00,0x70,0xD3,0x60,0x31,0x1A,
0x00,0x7A,0x00,0x40,0x30,0x58,0x00,0x71,0x81,0x60,0x48,0x62,0x00,0x68,0xBF,0x48,0x40,0x60,0x00,0x83,0x07,0x88,0x30,0xD8,
0x00,0x83,0x09,0xA8,0x42,0xC0,0x00,0x60,0xBD,0x30,0x4A,0xC2,0x00,0x60,0x00,0x00,0x30,0x78,0x00,0x40,0x01,0x00,0x00,0x37,
0x00,0x72,0x00,0x00,0x00,0x7F,0x00,0x80,0x00,0x54,0x00,0x20,0x00,0x00,0x95,0x48,0x30,0x20,0x00,0x40,0x01,0x00,0x35,0x30,
0x00,0x40,0x01,0x00,0x00,0x77,0x00,0x48,0x00,0x00,0x00,0xD8,0x00,0x70,0xC1,0x78,0x29,0x26,0x00,0x21,0xC0,0x41,0x00,0x05,
0x00,0x83,0x00,0x04,0x00,0x26,0x00,0x82,0x06,0x40,0x17,0xFF,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x80,0x04,0x10,0x00,0x00,
0x00,0x34,0x01,0x12,0x30,0x34,0x00,0x08,0x00,0x37,0xA7,0xFF,0x00,0x80,0x08,0x38,0x02,0xA0,0x00,0x34,0x00,0x18,0x02,0xA0,
0x00,0x7A,0x03,0x20,0x00,0x05,0x00,0x71,0x81,0xE8,0x00,0x25,0x00,0x00,0x00,0x12,0x3D,0x25,0x00,0x60,0x00,0x00,0x00,0x00,
0x00,0x40,0x02,0x00,0x13,0x20,0x00,0x21,0xC0,0x00,0x80,0x06,0x00,0x80,0x60,0x32,0x1C,0x00,0x00,0x70,0x05,0x78,0x00,0x84,
0x00,0x71,0xE5,0x78,0x00,0x00,0x00,0x40,0x08,0x80,0x00,0x05,0x00,0x82,0xC4,0x84,0x00,0x80,0x00,0x7F,0xFF,0x92,0x30,0x01,
0x00,0x10,0x00,0xD2,0x40,0x01,0x00,0x48,0x00,0x1C,0x01,0x02,0x00,0x88,0x11,0x00,0x00,0x00,0x00,0x88,0x00,0x07,0x15,0x00,
0x00,0x88,0x11,0x02,0xB0,0x05,0x00,0x89,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x48,0x00,0x1C,0x01,0x0C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x88,0x00,0x02,0xB0,0x05,0x00,0x89,0x02,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x40,0x02,0x60,0x00,0x24,0x00,0x40,0x08,0x03,0x1B,0x80,0x00,0x23,0x02,0x01,0x08,0x09,0x00,0x34,0x00,0x14,0x00,0x26,
0x00,0x00,0x0A,0x02,0x1C,0x00,0x00,0x09,0x00,0x44,0x00,0x80,0x00,0x7F,0xFF,0x92,0x30,0x01,0x00,0x09,0x80,0x30,0x00,0x01,
0x00,0x34,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x68,0x00,0x24,
0x00,0x78,0x00,0x58,0x40,0x71,0x00,0x71,0x39,0x00,0x00,0x14,0x00,0x21,0xCC,0x43,0x00,0x03,0x00,0x40,0x08,0x06,0x08,0x9D,
0x00,0x40,0x08,0x06,0x08,0x11,0x00,0x71,0xB9,0x00,0x2C,0x60,0x00,0x23,0xD2,0x92,0x2B,0x2C,0x00,0x82,0x93,0x10,0x00,0x00,
0x00,0x80,0x22,0x92,0x18,0x25,0x00,0x88,0x60,0x07,0x0E,0x03,0x00,0x02,0xC2,0x20,0x80,0x07,0x00,0x23,0x02,0xE0,0x88,0x03,
0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x02,0x30,0x10,0x00,0x09,0x7F,0x50,0x00,0x01,0x00,0x34,0x00,0x00,0x00,0x00,
0x00,0x78,0x00,0x28,0x00,0x24,0x00,0x80,0x2A,0x08,0x02,0xA1,0x00,0x40,0x02,0x68,0x03,0x24,0x00,0x21,0x66,0x42,0x30,0x20,
0x00,0x12,0x80,0x88,0x29,0x14,0x00,0x40,0x01,0x00,0x35,0x71,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x80,0x11,0x08,0x02,0x01,
0x00,0x80,0x28,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x68,0x00,0xE5,0x00,0x01,0x00,0x73,0x40,0x64,
0x00,0x40,0x02,0x68,0x03,0x20,0x00,0x21,0x64,0x02,0x30,0x05,0x00,0x70,0xDF,0x20,0x0A,0x85,0x00,0x21,0xBE,0x42,0x1C,0x04,
0x00,0x12,0xFF,0x72,0x1A,0x64,0x00,0x21,0xBE,0x42,0x1C,0x04,0x00,0x11,0x00,0x43,0x40,0x01,0x00,0x00,0x00,0x10,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x34,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x68,0x04,0x24,0x00,0x30,0x03,0xF2,0x36,0x20,
0x00,0x35,0x3E,0x82,0x17,0x8C,0x00,0x2B,0x00,0x50,0x00,0x01,0x00,0x70,0xBC,0x00,0x02,0x88,0x00,0x60,0x00,0x00,0x02,0x81,
0x00,0x40,0x02,0x60,0x91,0x20,0x00,0x21,0xC0,0x00,0x88,0x04,0x00,0x48,0x00,0x01,0x01,0x48,0x00,0x60,0x00,0x00,0x00,0x00,
0x00,0x48,0x00,0x01,0x01,0x74,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x70,0xE0,0x28,0x00,0x20,0x00,0x40,0x02,0x00,0x6A,0xA1,
0x00,0x11,0x00,0x57,0xB0,0x00,0x00,0x00,0x07,0xE2,0x30,0x29,0x00,0x64,0xC0,0xF0,0x00,0x00,0x00,0x71,0x81,0x48,0x00,0x2E,
0x00,0x11,0x80,0x54,0x00,0x20,0x00,0x06,0xB2,0x12,0x30,0x29,0x00,0x11,0x81,0x73,0x60,0x01,0x00,0x23,0x02,0x91,0x18,0x04,
0x00,0x40,0x02,0x00,0x6B,0xA1,0x00,0x23,0x02,0x90,0x98,0x0F,0x00,0x23,0x02,0x90,0x98,0x04,0x00,0x40,0x02,0x00,0x6C,0x21,
0x00,0x23,0x02,0x90,0x98,0x07,0x00,0x40,0x02,0x00,0x6C,0xA2,0x00,0x71,0x81,0x50,0x00,0x39,0x00,0x7B,0x00,0x20,0x00,0x84,
0x00,0x23,0xCF,0x10,0x10,0x02,0x00,0x36,0x00,0x33,0x60,0x02,0x00,0x21,0xDC,0x61,0x00,0x0B,0x00,0x34,0x00,0x17,0x0C,0x17,
0x00,0x03,0x02,0x04,0x80,0x00,0x00,0x00,0x15,0xC8,0x30,0x65,0x00,0x40,0x01,0x80,0x00,0xA6,0x00,0x78,0x00,0x00,0x30,0x00,
0x00,0x34,0x00,0x12,0x1D,0xC6,0x00,0x00,0x00,0x12,0x3C,0x60,0x00,0x60,0x00,0x00,0x00,0x42,0x00,0x40,0x02,0x68,0x01,0x65,
0x00,0x01,0x00,0x63,0x40,0x64,0x00,0x40,0x02,0x68,0x04,0x20,0x00,0x23,0x00,0x57,0x0D,0xF2,0x00,0x00,0xA8,0x52,0x1B,0xE4,
0x00,0x21,0xC0,0x41,0x2F,0xF8,0x00,0x21,0xA6,0x42,0x1B,0xE4,0x00,0x21,0xC0,0x41,0x10,0x04,0x00,0x34,0x00,0x10,0x00,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x13,0x40,0x00,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x21,0x38,0x63,0x64,0x18,
0x00,0x21,0x3A,0xD2,0xB0,0x06,0x00,0x48,0x00,0x01,0x01,0xC6,0x00,0x71,0x5B,0x40,0x00,0x00,0x00,0x48,0x00,0x01,0x01,0xEA,
0x00,0x7B,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x60,0x91,0x20,0x00,0x70,0xE0,0x00,0x00,0x7D,0x00,0x83,0x0A,0x56,0x84,0x04,
0x00,0x83,0x02,0x08,0x30,0x66,0x00,0x48,0x00,0x00,0x01,0x8C,0x00,0x00,0x00,0x02,0x1C,0x04,0x00,0x10,0x80,0xA3,0x00,0x01,
0x00,0x01,0x00,0x70,0x00,0x00,0x00,0x48,0x00,0x00,0x01,0xDE,0x00,0x83,0x04,0x62,0x1C,0x04,0x00,0x10,0x80,0x23,0x00,0x01,
0x00,0x30,0x00,0x02,0x1C,0x00,0x00,0x40,0x00,0x08,0x00,0x09,0x00,0x10,0x00,0x74,0x00,0x00,0x00,0x80,0x01,0x04,0x80,0x00,
0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x01,0x00,0x40,0x00,0x00,0x00,0x30,0x00,0x04,0x00,0x18,0x00,0x00,0x16,0x08,0x30,0x00,
0x00,0x00,0x00,0x18,0x30,0x84,0x00,0x60,0x00,0x00,0x00,0x43,0x00,0x70,0x92,0x20,0x00,0x7E,0x00,0x31,0x00,0x04,0x00,0x18,
0x00,0x00,0x0E,0x14,0x00,0x80,0x00,0x7F,0xFF,0xA4,0x00,0x80,0x00,0x40,0x00,0x44,0x80,0x80,0x00,0x80,0x25,0xD7,0x20,0x00,
0x00,0x83,0x02,0x84,0x00,0x80,0x00,0x68,0x08,0x08,0x83,0x00,0x00,0x23,0x01,0xA1,0x00,0x34,0x00,0x37,0x00,0x02,0x37,0xDA,
0x00,0x23,0x03,0xC4,0x00,0x80,0x00,0x80,0x00,0x11,0x10,0x0E,0x00,0x21,0x83,0x74,0x00,0xFF,0x00,0x97,0xF8,0x27,0x15,0x41,
0x00,0x00,0x02,0xF7,0x11,0x5D,0x00,0x03,0x04,0x72,0x38,0xBA,0x00,0x40,0x0F,0xFC,0x00,0x07,0x00,0x71,0x5F,0xB8,0x30,0x6A,
0x00,0x40,0x08,0x07,0xFF,0xFA,0x00,0x23,0x65,0x92,0x38,0xFC,0x00,0x21,0xC0,0x12,0x3C,0x5F,0x00,0x21,0xC0,0x50,0x80,0x17,
0x00,0x21,0xC0,0x11,0x08,0x0C,0x00,0x78,0x80,0x00,0x29,0xB2,0x00,0x40,0x01,0x80,0x00,0x26,0x00,0x48,0x00,0x1E,0x02,0x4A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x89,0x12,0x00,0x10,0x0C,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x40,0x01,0x80,0x00,0x26,
0x00,0x48,0x00,0x1E,0x02,0x54,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x8B,0x12,0x00,0x10,0x02,0x00,0x00,0x00,0x03,0x10,0x00,
0x00,0x70,0xC1,0xD8,0x00,0x00,0x00,0x70,0xD2,0x00,0x28,0x32,0x00,0x00,0x00,0x08,0x02,0xBA,0x00,0x40,0x01,0x80,0x00,0xA0,
0x00,0x40,0x01,0x80,0x00,0xE1,0x00,0x48,0x08,0x06,0x02,0xA1,0x00,0x40,0x02,0x68,0x19,0x60,0x00,0x40,0x08,0x06,0x81,0x00,
0x00,0x88,0x31,0x02,0x30,0x1A,0x00,0x10,0x03,0x33,0x70,0x00,0x00,0x23,0x7D,0xA2,0x30,0x3C,0x00,0x40,0x08,0x08,0x00,0x01,
0x00,0x11,0x00,0xE2,0x18,0x37,0x00,0x40,0x0F,0xF9,0x7F,0x02,0x00,0x71,0x54,0x10,0x00,0x2F,0x00,0x71,0x15,0xD0,0x30,0x47,
0x00,0x23,0x8B,0xA4,0x00,0xFF,0x00,0xC0,0x00,0x77,0x15,0xFB,0x00,0x83,0x06,0xA4,0x00,0x80,0x00,0x7F,0xFF,0xA2,0x36,0x59,
0x00,0x23,0x8F,0xC2,0x1C,0x01,0x00,0x23,0xC5,0xF2,0x1C,0x05,0x00,0x08,0x01,0x62,0x1C,0x01,0x00,0x10,0x80,0xB7,0x88,0x00,
0x00,0x02,0x9B,0x04,0x00,0x18,0x00,0x00,0x02,0x64,0x80,0x01,0x00,0xE0,0x28,0xF0,0x00,0x00,0x00,0x00,0x00,0x08,0x91,0x00,
0x00,0x01,0x00,0xB0,0x00,0x00,0x00,0x40,0x01,0x80,0x00,0x26,0x00,0x48,0x00,0x1E,0x02,0x98,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x8B,0x10,0x00,0x10,0x02,0x00,0x00,0x00,0x03,0x10,0x00,0x00,0x70,0xC1,0xD8,0x00,0x00,0x00,0x70,0xD2,0x00,0x28,0x30,
0x00,0x00,0x00,0x08,0x02,0xB8,0x00,0x40,0x01,0x80,0x00,0xA5,0x00,0x40,0x02,0x68,0x1A,0xE5,0x00,0x00,0x00,0x18,0x00,0x42,
0x00,0x40,0x02,0x68,0x1C,0x61,0x00,0x72,0x00,0x00,0x00,0x7D,0x00,0x40,0x02,0x68,0x1A,0x54,0x00,0x70,0xE2,0x30,0x30,0x25,
0x00,0x40,0x02,0x68,0x18,0xD4,0x00,0x10,0x00,0x54,0x00,0x26,0x00,0x81,0x85,0x40,0x10,0x06,0x00,0x40,0x02,0x68,0x1B,0x54,
0x00,0x78,0x00,0x08,0x00,0x00,0x00,0x40,0x02,0x68,0x1B,0x60,0x00,0x72,0x00,0x08,0x00,0x20,0x00,0x7B,0x80,0x30,0x00,0x2E,
0x00,0x40,0x08,0x07,0xFF,0xF9,0x00,0x40,0x08,0x06,0x80,0xFA,0x00,0x40,0x0F,0xF9,0x7F,0x03,0x00,0x35,0x00,0x18,0x84,0x10,
0x00,0x23,0x02,0x10,0x80,0x0F,0x00,0x22,0xB2,0xA7,0x15,0x91,0x00,0x82,0x93,0x22,0x23,0x34,0x00,0x80,0x23,0xA2,0x1C,0x07,
0x00,0x10,0x80,0x73,0x70,0x06,0x00,0x40,0x02,0x68,0x1A,0xA6,0x00,0x23,0x7B,0x47,0x0E,0x03,0x00,0x00,0x02,0xE0,0x80,0x05,
0x00,0x23,0x80,0x42,0x30,0x2F,0x00,0x11,0x7E,0xC2,0x1A,0x6D,0x00,0x34,0x00,0x02,0x1C,0x04,0x00,0x08,0x82,0xF4,0x00,0x18,
0x00,0x00,0x16,0x04,0x00,0x18,0x00,0x00,0x0E,0x47,0xB8,0x04,0x00,0x00,0x02,0x04,0x00,0x80,0x00,0x68,0x07,0xA4,0x00,0xFF,
0x00,0x97,0xF8,0x33,0x50,0x01,0x00,0x88,0x40,0x02,0x30,0x21,0x00,0x08,0x00,0xF2,0x2B,0x2A,0x00,0x71,0x59,0x18,0x29,0x31,
0x00,0x22,0x33,0x48,0x02,0x39,0x00,0x21,0xC0,0x71,0x08,0x07,0x00,0x37,0x00,0x84,0x00,0x26,0x00,0x81,0x92,0x62,0x37,0xB4,
0x00,0x70,0xE0,0x30,0x00,0x2E,0x00,0x08,0x00,0x72,0x38,0x04,0x00,0x23,0x02,0xF1,0x17,0xEC,0x00,0x70,0xD3,0x68,0x00,0x00,
0x00,0x40,0x01,0x80,0x00,0xA4,0x00,0x70,0xE0,0x20,0x30,0x86,0x00,0x10,0x80,0x98,0x30,0x05,0x00,0x40,0x02,0x68,0x18,0x65,
0x00,0x40,0x02,0x68,0x18,0xE0,0x00,0x40,0x02,0x68,0x1A,0x66,0x00,0x40,0x02,0x00,0x6D,0x65,0x00,0x00,0x00,0x18,0x00,0x43,
0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x40,0x02,0x70,0x00,0x20,0x00,0x50,0x00,0x00,0x10,0x00,0x00,0x40,0x02,0x00,0x6D,0x24,
0x00,0x60,0x00,0x08,0x00,0x20,0x00,0x23,0xC6,0x00,0x00,0x00,0x00,0x21,0xC0,0x50,0x88,0x0A,0x00,0x40,0x02,0x70,0x00,0x24,
0x00,0x50,0x04,0x00,0x10,0x00,0x00,0x08,0x80,0xD6,0x00,0x01,0x00,0x00,0x00,0x00,0x10,0x0A,0x00,0x60,0x00,0x00,0x00,0x00,
0x00,0x40,0x02,0x70,0x00,0x24,0x00,0x50,0x04,0x00,0x10,0x00,0x00,0x64,0xC0,0x10,0x00,0x00,0x00,0x60,0x00,0x10,0x00,0x00,
0x00,0x40,0x02,0x70,0x00,0x25,0x00,0x50,0x05,0x00,0x10,0x00,0x00,0x40,0x02,0x00,0x6D,0x24,0x00,0x60,0x00,0x08,0x00,0x25,
0x00,0x23,0xC6,0x50,0x00,0x00,0x00,0x00,
0x08,0x00,0x00,0x00, // FW_BLOCK_SIZE_4
0x00,0x00,0x0E,0x00, // FW_BLOCK_ADDR_4
0x00,0x70,0x00,0x00,0x00,0x08,0x00,0x00,

// Footer
0xA6,0xE2,0x6B,0x93, // IMG_MAGIC_NUMBER_2
0x35,0x72,0x87,0x66, // IMG_CHECKSUM
};

/** @} */

/**********************************************************************************************************************/
