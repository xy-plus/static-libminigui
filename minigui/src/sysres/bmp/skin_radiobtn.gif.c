///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 *   This file is part of MiniGUI, a mature cross-platform windowing 
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 * 
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 * 
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 * 
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 * 
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *   Or,
 * 
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 * 
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 * 
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/en/about/licensing-policy/>.
 */

#include "common.h"

#ifdef _MGINCORE_RES

//data of "skin_radiobtn.gif"

const unsigned char _mgir_gif_skin_radiobtn_data[]={
	0x47,0x49,0x46,0x38,0x39,0x61,0x0D,0x00,	0x68,0x00,0xE7,0xEA,0x00,0x00,0x01,0x00,
	0x0F,0x0E,0x03,0x0C,0x0F,0x0B,0x17,0x14,	0x04,0x14,0x15,0x13,0x1A,0x16,0x00,0x18,
	0x18,0x10,0x21,0x1B,0x01,0x19,0x1B,0x18,	0x23,0x1E,0x07,0x23,0x24,0x13,0x2E,0x22,
	0x00,0x22,0x24,0x21,0x2C,0x26,0x0C,0x2C,	0x2D,0x1C,0x3B,0x33,0x14,0x3C,0x3C,0x25,
	0x57,0x44,0x06,0x58,0x45,0x00,0x43,0x45,	0x42,0x44,0x46,0x43,0x57,0x4A,0x12,0x56,
	0x4A,0x19,0x48,0x4A,0x47,0x66,0x51,0x01,	0x68,0x52,0x04,0x4F,0x51,0x4E,0x51,0x51,
	0x49,0x65,0x51,0x14,0x50,0x52,0x4F,0x57,	0x52,0x41,0x51,0x53,0x50,0x52,0x54,0x51,
	0x5A,0x54,0x3D,0x53,0x54,0x52,0x56,0x58,	0x55,0x71,0x5A,0x02,0x62,0x58,0x37,0x57,
	0x59,0x56,0x5C,0x59,0x4C,0x78,0x5A,0x00,	0x5A,0x5C,0x59,0x7B,0x5D,0x00,0x5D,0x5D,
	0x55,0x6E,0x5F,0x27,0x5D,0x5F,0x5C,0x7E,	0x60,0x01,0x66,0x5F,0x48,0x6C,0x60,0x33,
	0x7A,0x61,0x0D,0x5F,0x61,0x5E,0x60,0x62,	0x5F,0x6E,0x62,0x3C,0x72,0x63,0x31,0x75,
	0x65,0x27,0x62,0x64,0x61,0x62,0x66,0x57,	0x84,0x65,0x00,0x86,0x66,0x00,0x64,0x65,
	0x63,0x65,0x67,0x64,0x72,0x68,0x46,0x74,	0x68,0x41,0x82,0x69,0x16,0x67,0x68,0x66,
	0x6D,0x68,0x56,0x8A,0x69,0x02,0x68,0x69,	0x67,0x6E,0x6B,0x4D,0x88,0x6D,0x04,0x6D,
	0x6F,0x4A,0x8E,0x6D,0x00,0x6A,0x6C,0x69,	0x6B,0x6D,0x6A,0x91,0x6F,0x00,0x70,0x72,
	0x4D,0x6F,0x70,0x5C,0x7F,0x6F,0x36,0x84,	0x70,0x24,0x92,0x70,0x00,0x6D,0x6F,0x6C,
	0x6E,0x70,0x6D,0x75,0x70,0x5D,0x95,0x73,	0x02,0x78,0x77,0x46,0x89,0x75,0x29,0x99,
	0x75,0x00,0x72,0x74,0x71,0x7F,0x74,0x52,	0x78,0x75,0x67,0x8B,0x77,0x2B,0x87,0x76,
	0x3D,0x83,0x76,0x4E,0x75,0x77,0x74,0x9D,	0x79,0x00,0x80,0x77,0x5A,0x76,0x78,0x75,
	0x9F,0x7A,0x00,0x85,0x7A,0x57,0xA1,0x7C,	0x03,0x79,0x7B,0x78,0x7F,0x7F,0x53,0x7F,
	0x7E,0x64,0x7F,0x80,0x6C,0x7D,0x7F,0x7C,	0xA1,0x82,0x0A,0xA8,0x82,0x00,0xA9,0x83,
	0x00,0x92,0x81,0x4E,0x80,0x82,0x7F,0xAB,	0x84,0x00,0x85,0x84,0x6A,0x9A,0x84,0x31,
	0x81,0x83,0x80,0xAC,0x85,0x02,0x87,0x8A,	0x51,0x82,0x84,0x81,0xAD,0x86,0x04,0xA3,
	0x85,0x25,0x9C,0x86,0x33,0x98,0x85,0x45,	0x83,0x85,0x82,0x84,0x86,0x83,0x85,0x87,
	0x84,0x8B,0x8D,0x54,0x9E,0x88,0x3C,0xB2,	0x8A,0x00,0x86,0x88,0x85,0xA2,0x8A,0x30,
	0x94,0x88,0x65,0xB4,0x8C,0x00,0xB5,0x8D,	0x00,0x8A,0x8C,0x89,0xA6,0x8E,0x34,0xB7,
	0x8F,0x02,0x8B,0x8D,0x8A,0x9C,0x8D,0x5E,	0xB9,0x90,0x00,0x8C,0x8E,0x8B,0xBB,0x91,
	0x00,0x8D,0x8F,0x8C,0xA6,0x90,0x43,0xB2,	0x91,0x20,0xBC,0x92,0x00,0xA4,0x90,0x50,
	0x8E,0x90,0x8D,0xBD,0x93,0x00,0x8F,0x91,	0x8E,0x94,0x93,0x79,0x90,0x92,0x8F,0xA3,
	0x92,0x5D,0xB4,0x93,0x2C,0x91,0x93,0x90,	0xAF,0x95,0x34,0x92,0x94,0x91,0xB1,0x97,
	0x36,0x99,0x9C,0x61,0xB3,0x99,0x38,0x9A,	0x9E,0x69,0x96,0x98,0x95,0x9E,0x9F,0x5E,
	0x97,0x99,0x96,0xB5,0x9B,0x3A,0x98,0x9A,	0x97,0xB8,0x9D,0x3C,0xA1,0xA2,0x61,0xAB,
	0x9B,0x6C,0xBC,0xA0,0x37,0xA1,0xA2,0x7A,	0xA3,0xA3,0x75,0x9D,0x9F,0x9C,0xA4,0xA6,
	0x6B,0x9E,0xA0,0x9D,0xBF,0xA3,0x3A,0xA7,	0xA7,0x66,0x9F,0xA1,0x9E,0xB5,0xA2,0x67,
	0xB1,0xA2,0x78,0xC2,0xA5,0x3C,0xA3,0xA5,	0xA2,0xA4,0xA6,0xA3,0xA7,0xAA,0x88,0xC6,
	0xAA,0x41,0xA6,0xA8,0xA5,0xB1,0xB0,0x68,	0xA8,0xAA,0xA7,0xB3,0xB1,0x6A,0xA9,0xAB,
	0xA8,0xCC,0xAE,0x3D,0xB3,0xAF,0x8E,0xB6,	0xB4,0x6D,0xB5,0xB3,0x85,0xB8,0xB7,0x6F,
	0xD1,0xB3,0x42,0xCD,0xB2,0x57,0xB9,0xB8,	0x70,0xB0,0xB2,0xAE,0xD3,0xB4,0x44,0xB1,
	0xB3,0xAF,0xD7,0xB7,0x3F,0xD6,0xB7,0x47,	0xBE,0xBC,0x74,0xB7,0xB9,0xB6,0xBD,0xC2,
	0x78,0xB9,0xBB,0xB8,0xBF,0xC4,0x7A,0xE0,	0xBF,0x47,0xE1,0xC1,0x49,0xC5,0xC8,0x78,
	0xE3,0xC2,0x4A,0xE5,0xC3,0x43,0xBE,0xC1,	0xBD,0xE7,0xC5,0x45,0xE3,0xC4,0x5A,0xE2,
	0xC4,0x61,0xCA,0xCD,0x7C,0xCE,0xCD,0x8A,	0xC5,0xC7,0xC4,0xEE,0xCC,0x4C,0xC8,0xCA,
	0xC7,0xD0,0xD3,0x82,0xD1,0xD4,0x83,0xF1,	0xCE,0x4E,0xF3,0xCF,0x47,0xF2,0xCF,0x4F,
	0xF4,0xD0,0x48,0xD4,0xD6,0x85,0xF5,0xD1,	0x49,0xF6,0xD2,0x4A,0xCD,0xCF,0xCB,0xCE,
	0xD0,0xCC,0xD6,0xD9,0x87,0xF8,0xD3,0x4C,	0xCF,0xD1,0xCE,0xD0,0xD2,0xCF,0xFA,0xD5,
	0x4D,0xFC,0xD7,0x50,0xFD,0xD9,0x51,0xDF,	0xE0,0x88,0xE1,0xE1,0x89,0xDE,0xE3,0x97,
	0xE2,0xE1,0x9D,0xE3,0xE4,0x8B,0xE4,0xE5,	0x8C,0xE5,0xE6,0x8D,0xE7,0xE8,0x8F,0xF1,
	0xF0,0x90,0xF1,0xF1,0x98,0xF3,0xF2,0x92,	0xF5,0xF3,0x94,0xF8,0xF6,0x96,0xF9,0xF8,
	0x97,0xFB,0xF9,0x99,0xFD,0xFB,0x9B,0xFF,	0xFD,0x9D,0xFF,0xFE,0x9E,0x21,0xFE,0x15,
	0x43,0x72,0x65,0x61,0x74,0x65,0x64,0x20,	0x77,0x69,0x74,0x68,0x20,0x54,0x68,0x65,
	0x20,0x47,0x49,0x4D,0x50,0x00,0x2C,0x00,	0x00,0x00,0x00,0x0D,0x00,0x68,0x00,0x00,
	0x08,0xFE,0x00,0xCD,0x09,0x9C,0x36,0xEB,	0xD5,0x2B,0x5A,0xBB,0xB2,0x09,0x34,0xA7,
	0x2E,0xDD,0xAB,0x36,0x44,0x6A,0xD8,0x68,	0x22,0x46,0xD1,0x2E,0x75,0x18,0xFF,0xBC,
	0xA8,0xE1,0x04,0xD0,0x26,0x52,0x99,0xFA,	0x7C,0x19,0xA5,0x6E,0xD7,0x09,0x1B,0x70,
	0x48,0x15,0x8B,0x16,0xCD,0x19,0xB2,0x4B,	0x59,0x94,0x75,0xA1,0x01,0x67,0xA5,0x37,
	0x74,0x38,0xC1,0x45,0x83,0xB4,0x47,0x84,	0x96,0x4B,0xD1,0xD0,0xB1,0x1B,0x3A,0x14,
	0x1D,0xB2,0x21,0x1B,0xEC,0x20,0x63,0xB7,	0x8E,0x28,0x51,0x70,0x3B,0x44,0x5C,0x72,
	0xE6,0x94,0xE9,0xD0,0x68,0x3B,0xAE,0x34,	0x8A,0xB6,0xAE,0x69,0x55,0x61,0x7A,0x68,
	0x89,0xD1,0x56,0xD5,0x6A,0x20,0x63,0xE9,	0xC8,0x58,0xB2,0xEA,0x14,0x16,0xA6,0x86,
	0xE9,0x26,0x99,0xAA,0x46,0xD4,0x5A,0xAC,	0x51,0xE9,0xE0,0xAA,0x33,0x46,0xEB,0xD5,
	0xAD,0x57,0xBB,0x98,0xE5,0x35,0x97,0x57,	0x1D,0x41,0x83,0xB7,0x76,0x6D,0xC3,0x88,
	0xD1,0x61,0x1B,0x29,0x58,0xB8,0x88,0x39,	0xC3,0x28,0x97,0x3A,0x86,0x7B,0x82,0xF4,
	0xE0,0xC3,0x09,0xD7,0x30,0x5D,0xA6,0xCE,	0x90,0xDC,0xB5,0x82,0x0B,0xA7,0x64,0xDD,
	0xE4,0xC9,0x73,0x27,0xCE,0x57,0x17,0x99,	0x44,0x56,0x25,0xA3,0x77,0xAF,0x5F,0x3F,
	0x7D,0xF7,0xE8,0x99,0xEA,0xC9,0x07,0x1A,	0xBD,0x7E,0xFE,0xFE,0x09,0xFF,0x77,0x2F,
	0xDE,0x8E,0x0E,0xA5,0xC4,0xE1,0x1B,0x3E,	0x7C,0x5F,0xBE,0x16,0x22,0x7C,0xFD,0x66,
	0x2E,0x7C,0xDF,0xBD,0xAC,0x9E,0xEA,0xED,	0xA3,0x2E,0x1C,0x5B,0x1E,0x5A,0x67,0xEC,
	0xFE,0x6D,0xFF,0x37,0x5E,0x38,0x25,0xB4,	0x68,0x50,0xED,0x2B,0x2F,0xFC,0xD7,0xA4,
	0xCB,0xDB,0x14,0xD5,0xA2,0x37,0x1C,0x5E,	0xAF,0x4F,0xE9,0x18,0x62,0x34,0xF6,0x6A,
	0x94,0xC1,0x5C,0xCC,0x34,0xC4,0x98,0x61,	0x7D,0x1D,0x94,0x10,0x46,0x0C,0xA5,0xA3,
	0x4A,0x1C,0x25,0x44,0x20,0x01,0x07,0x3D,	0x28,0x62,0x59,0x43,0x7F,0x78,0x10,0x41,
	0x06,0x28,0x08,0x71,0x84,0x0B,0x31,0xF4,	0x40,0x52,0x2E,0x1E,0x48,0x90,0xE1,0x18,
	0x6A,0x94,0x38,0x86,0x10,0x41,0x28,0x03,	0x86,0x05,0x28,0x4C,0x21,0x87,0x20,0x86,
	0x3C,0x62,0x88,0x20,0x6A,0x38,0xD1,0x53,	0x06,0x47,0xD4,0x11,0xA3,0x24,0x3C,0x3E,
	0xF2,0xC8,0x18,0x43,0x88,0xE0,0xC2,0x18,	0x82,0xF0,0xD8,0xA3,0x8F,0x82,0x40,0x27,
	0xC4,0x1A,0x46,0x36,0xF9,0x88,0x1F,0x3B,	0x44,0xF1,0x43,0x1D,0x4D,0x1A,0xF9,0x88,
	0x1D,0x79,0xCC,0xE2,0x83,0x1A,0x83,0x54,	0xC9,0xA3,0x18,0xE8,0x6D,0x61,0x88,0x97,
	0x78,0xBC,0x97,0x4E,0x7C,0x6C,0x38,0x62,	0xE4,0x25,0x88,0x68,0x52,0x18,0x43,0xC4,
	0xF4,0xF7,0x9F,0x60,0x97,0x31,0x76,0x98,	0x81,0x8B,0x31,0xA6,0x60,0x1B,0x22,0x88,
	0x30,0x81,0x08,0x3B,0x48,0x58,0x67,0x4F,	0x7F,0x02,0x0A,0xC4,0x0E,0x3B,0x00,0x31,
	0x9A,0x08,0x14,0x88,0x30,0x04,0x1A,0x71,	0xD0,0x81,0x06,0x19,0x43,0x0C,0xA1,0x22,
	0x05,0x3B,0x80,0xA1,0x07,0x23,0x93,0x74,	0x4A,0xC8,0x1F,0x43,0xF4,0xE4,0xA8,0x1E,
	0x91,0x54,0x82,0xC9,0xA9,0x98,0x54,0x42,	0x47,0x90,0x3B,0xA0,0xA1,0x88,0xA9,0xFE,
	0xA8,0xA6,0x4A,0x48,0x54,0x3B,0xC4,0x31,	0x49,0xAC,0xA8,0x1E,0xB2,0x43,0xA5,0x7B,
	0xC0,0x8A,0xAB,0x1E,0x71,0xD0,0xB2,0x43,	0x1E,0xB7,0xE2,0x8A,0x49,0x17,0x68,0x91,
	0xD1,0x05,0x23,0xBE,0x9E,0xAA,0xC7,0x7B,	0xEA,0x6C,0x43,0x88,0xAD,0xB0,0x6A,0xA2,
	0x08,0x7E,0xFA,0xA9,0x43,0x0C,0x2B,0xFE,	0xA9,0x72,0x4B,0x80,0x85,0x61,0x74,0x27,
	0x42,0xD9,0x20,0xD8,0x90,0x2A,0x6D,0xF4,	0x20,0x11,0x45,0x82,0x52,0xB8,0x91,0x13,
	0x76,0x7C,0x74,0x89,0x48,0x1F,0x9E,0xD4,	0x07,0x29,0xC8,0xB0,0x84,0xCC,0x4B,0x31,
	0x81,0x41,0x93,0x2C,0xD1,0x80,0x53,0x14,	0x3A,0x3B,0xF5,0xF4,0x53,0x34,0x43,0xC9,
	0x22,0x14,0x3B,0xE0,0x1C,0x95,0x54,0x50,	0xEC,0x3C,0x00,0x40,0x02,0x64,0x31,0x1C,
	0x15,0x50,0xE8,0x14,0x03,0xC0,0xC6,0x9B,	0x5C,0x15,0x25,0x24,0xD4,0xB0,0x83,0xCE,
	0x02,0x00,0x18,0x10,0xF2,0x3A,0x60,0xD1,	0xC2,0x05,0xC4,0xEC,0x28,0x6C,0x16,0x5A,
	0x6D,0x58,0xB2,0x70,0x5B,0x9A,0x34,0xB4,	0xCD,0x21,0x73,0x59,0x65,0x57,0x28,0x79,
	0x15,0xC6,0xDF,0x28,0xB3,0xCC,0x12,0xD8,	0x60,0x76,0xF6,0xC5,0x8A,0xD0,0x79,0x36,
	0xC6,0x4A,0x1C,0x90,0x49,0x46,0x99,0x65,	0x0C,0xE9,0xA1,0x19,0x67,0x9E,0x81,0x26,
	0x5A,0x49,0xA5,0x9D,0xC6,0xCD,0x3B,0xAB,	0xB5,0xF6,0x5A,0x17,0xB1,0xCD,0x56,0xDB,
	0x6D,0xB9,0xED,0x26,0x42,0x6F,0xF5,0xF4,	0xF3,0xCF,0x35,0xFC,0x08,0x57,0xDC,0x71,
	0xC9,0xE1,0xD3,0x0F,0x04,0x00,0x28,0x90,	0x0F,0x79,0xCF,0x45,0xF7,0x1B,0xFE,0x37,
	0x1B,0x03,0x80,0x0B,0x79,0xD7,0x5D,0x91,	0xDD,0x3F,0xF9,0x38,0x50,0x72,0x3D,0xDD,
	0x7D,0x77,0xC6,0x74,0xFF,0x40,0xD3,0xB6,	0x79,0xE8,0xA1,0x72,0x0F,0x79,0x6A,0xB7,
	0xF7,0x9E,0x39,0xF1,0xD5,0x02,0x4F,0x7D,	0xF7,0xE5,0xC7,0xD8,0xCF,0x73,0x0A,0x58,
	0xB4,0x41,0xE4,0x9A,0x9B,0x0E,0x2B,0x74,	0x34,0xF8,0x60,0x84,0x13,0xA6,0x53,0xE1,
	0x85,0x19,0x6E,0xD8,0xE1,0x87,0x21,0x8E,	0x58,0xA2,0x1A,0x27,0xA6,0xB8,0x62,0x8B,
	0x2F,0xC6,0x38,0x63,0x8D,0x37,0xE6,0x18,	0xA3,0x17,0x63,0xFA,0x08,0xA4,0x90,0x44,
	0x1A,0x42,0x72,0x01,0x75,0xF8,0x38,0x88,	0x92,0x4C,0x86,0xD1,0xB7,0x10,0x92,0x3C,
	0x19,0xE5,0x94,0x92,0x08,0x72,0x00,0x00,	0x01,0x50,0x79,0x65,0x96,0x5B,0x26,0xC2,
	0xA3,0x12,0xE2,0x7F,0x19,0xA6,0x97,0x92,	0x94,0x69,0x33,0x21,0x69,0xAE,0xD9,0x66,
	0x61,0xF9,0x6D,0x1B,0xCA,0x9C,0x44,0x8B,	0x5B,0x10,0x9E,0x03,0xA6,0x33,0x0A,0x9F,
	0x7E,0x02,0x2A,0x68,0xD4,0xFD,0x33,0x14,	0xA2,0x14,0x55,0x12,0x46,0x39,0x0A,0x52,
	0x92,0xA2,0x94,0xA5,0xC0,0x80,0xA9,0x2E,	0xEC,0x41,0x11,0x9D,0x9A,0xC4,0xA7,0x42,
	0xD5,0xA7,0x21,0x90,0xAA,0x12,0x5D,0x88,	0xC4,0xA9,0x54,0xC5,0x2A,0x57,0x45,0x82,
	0x01,0x00,0x20,0x00,0x21,0x64,0x45,0x2B,	0x5B,0x91,0xA1,0x6F,0x3B,0x38,0x95,0xAE,
	0x78,0x55,0x09,0x45,0x20,0x60,0x63,0x7B,	0x70,0x56,0xB0,0x86,0x75,0x2B,0x4D,0x5C,
	0xA1,0x12,0x9A,0x38,0x15,0xB2,0xD2,0xB2,	0x2C,0x1C,0xFA,0xEA,0x59,0x11,0x18,0x91,
	0x16,0xB5,0x4E,0x65,0x2D,0x6C,0x31,0x66,	0x5B,0xDD,0xFA,0x96,0x80,0x02,0x02,0x00,
	0x3B
};
#endif //_MGINCORE_RES

