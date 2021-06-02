// SPDX-License-Identifier: Apache-2.0
// ----------------------------------------------------------------------------
// Copyright 2011-2021 Arm Limited
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy
// of the License at:
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.
// ----------------------------------------------------------------------------

/**
 * @brief Data tables for quantization transfer.
 */

#include "astcenc_internal.h"

#define _ 0 // Using _ to indicate an entry that will not be used.

const quantization_and_transfer_table quant_and_xfer_tables[12] = {
	// Quantization method 0, range 0..1
	{
		QUANT_2,
		{0, 64, 255},
		{0, 1},
		{0, 64},
		{0x01004000,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
		 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
		 0x01004000}
	},
	// Quantization method 1, range 0..2
	{
		QUANT_3,
		{0, 32, 64, 255},
		{0, 1, 2},
		{0, 32, 64},
		{0x01002000,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
		 _,_,0x02004000,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,
		 _,_,_,_,0x02014020}
	},
	// Quantization method 2, range 0..3
	{
		QUANT_4,
		{0, 21, 43, 64, 255},
		{0, 1, 2, 3},
		{0, 21, 43, 64},
		{0x01001500,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,0x02002b00,_,_,_,_,
		 _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,0x03014015,_,_,_,_,_,_,_,_,_,_,_,_,
		 _,_,_,_,_,_,_,_,0x0302402b}
	},
	// Quantization method 3, range 0..4
	{
		QUANT_5,
		{0, 16, 32, 48, 64, 255},
		{0, 1, 2, 3, 4},
		{0, 16, 32, 48, 64},
		{0x01001000,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,0x02002000,_,_,_,_,_,_,_,_,_,
		 _,_,_,_,_,_,0x03013010,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,0x04024020,_,_,_,
		 _,_,_,_,_,_,_,_,_,_,_,_,0x04034030}
	},
	// Quantization method 4, range 0..5
	{
		QUANT_6,
		{0, 12, 25, 39, 52, 64, 255},
		{0, 2, 4, 5, 3, 1},
		{0, 64, 12, 52, 25, 39},
		{0x02000c00,_,_,_,_,_,_,_,_,_,_,_,0x04001900,_,_,_,_,_,_,_,_,_,_,_,_,
		 0x0502270c,_,_,_,_,_,_,_,_,_,_,_,_,_,0x03043419,_,_,_,_,_,_,_,_,_,_,
		 _,_,0x01054027,_,_,_,_,_,_,_,_,_,_,_,0x01034034}
	},
	// Quantization method 5, range 0..7
	{
		QUANT_8,
		{0, 9, 18, 27, 37, 46, 55, 64, 255},
		{0, 1, 2, 3, 4, 5, 6, 7},
		{0, 9, 18, 27, 37, 46, 55, 64},
		{0x01000900,_,_,_,_,_,_,_,_,0x02001200,_,_,_,_,_,_,_,_,0x03011b09,_,_,
		 _,_,_,_,_,_,0x04022512,_,_,_,_,_,_,_,_,_,0x05032e1b,_,_,_,_,_,_,_,_,
		 0x06043725,_,_,_,_,_,_,_,_,0x0705402e,_,_,_,_,_,_,_,_,0x07064037}
	},
	// Quantization method 6, range 0..9
	{
		QUANT_10,
		{0, 7, 14, 21, 28, 36, 43, 50, 57, 64, 255},
		{0, 2, 4, 6, 8, 9, 7, 5, 3, 1},
		{0, 64, 7, 57, 14, 50, 21, 43, 28, 36},
		{0x02000700,_,_,_,_,_,_,0x04000e00,_,_,_,_,_,_,0x06021507,_,_,_,_,_,_,
		 0x08041c0e,_,_,_,_,_,_,0x09062415,_,_,_,_,_,_,_,0x07082b1c,_,_,_,_,_,
		 _,0x05093224,_,_,_,_,_,_,0x0307392b,_,_,_,_,_,_,0x01054032,_,_,_,_,_,
		 _,0x01034039}
	},
	// Quantization method 7, range 0..11
	{
		QUANT_12,
		{0, 5, 11, 17, 23, 28, 36, 41, 47, 53, 59, 64, 255},
		{0, 4, 8, 2, 6, 10, 11, 7, 3, 9, 5, 1},
		{0, 64, 17, 47, 5, 59, 23, 41, 11, 53, 28, 36},
		{0x04000500,_,_,_,_,0x08000b00,_,_,_,_,_,0x02041105,_,_,_,_,_,
		 0x0608170b,_,_,_,_,_,0x0a021c11,_,_,_,_,0x0b062417,_,_,_,_,_,_,_,
		 0x070a291c,_,_,_,_,0x030b2f24,_,_,_,_,_,0x09073529,_,_,_,_,_,
		 0x05033b2f,_,_,_,_,_,0x01094035,_,_,_,_,0x0105403b}
	},
	// Quantization method 8, range 0..15
	{
		QUANT_16,
		{0, 4, 8, 12, 17, 21, 25, 29, 35, 39, 43, 47, 52, 56, 60, 64, 255},
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
		{0, 4, 8, 12, 17, 21, 25, 29, 35, 39, 43, 47, 52, 56, 60, 64},
		{0x01000400,_,_,_,0x02000800,_,_,_,0x03010c04,_,_,_,0x04021108,_,_,_,_,
		 0x0503150c,_,_,_,0x06041911,_,_,_,0x07051d15,_,_,_,0x08062319,_,_,_,_,
		 _,0x0907271d,_,_,_,0x0a082b23,_,_,_,0x0b092f27,_,_,_,0x0c0a342b,_,_,_,
		 _,0x0d0b382f,_,_,_,0x0e0c3c34,_,_,_,0x0f0d4038,_,_,_,0x0f0e403c}
	},
	// Quantization method 9, range 0..19
	{
		QUANT_20,
		{0, 3, 6, 9, 13, 16, 19, 23, 26, 29, 35, 38, 41, 45, 48, 51, 55, 58,
		 61, 64, 255},
		{0, 4, 8, 12, 16, 2, 6, 10, 14, 18, 19, 15, 11, 7, 3, 17, 13, 9, 5, 1},
		{0, 64, 16, 48, 3, 61, 19, 45, 6, 58, 23, 41, 9, 55, 26, 38, 13, 51,
		 29, 35},
		{0x04000300,_,_,0x08000600,_,_,0x0c040903,_,_,0x10080d06,_,_,_,
		 0x020c1009,_,_,0x0610130d,_,_,0x0a021710,_,_,_,0x0e061a13,_,_,
		 0x120a1d17,_,_,0x130e231a,_,_,_,_,_,0x0f12261d,_,_,0x0b132923,_,_,
		 0x070f2d26,_,_,_,0x030b3029,_,_,0x1107332d,_,_,0x0d033730,_,_,_,
		 0x09113a33,_,_,0x050d3d37,_,_,0x0109403a,_,_,0x0105403d}
	},
	// Quantization method 10, range 0..23
	{
		QUANT_24,
		{0, 2, 5, 8, 11, 13, 16, 19, 22, 24, 27, 30, 34, 37, 40, 42, 45, 48,
		 51, 53, 56, 59, 62, 64, 255},
		{0, 8, 16, 2, 10, 18, 4, 12, 20, 6, 14, 22, 23, 15, 7, 21, 13, 5, 19,
		 11, 3, 17, 9, 1},
		{0, 64, 8, 56, 16, 48, 24, 40, 2, 62, 11, 53, 19, 45, 27, 37, 5, 59,
		 13, 51, 22, 42, 30, 34},
		{0x08000200,_,0x10000500,_,_,0x02080802,_,_,0x0a100b05,_,_,0x12020d08,
		 _,0x040a100b,_,_,0x0c12130d,_,_,0x14041610,_,_,0x060c1813,_,
		 0x0e141b16,_,_,0x16061e18,_,_,0x170e221b,_,_,_,0x0f16251e,_,_,
		 0x07172822,_,_,0x150f2a25,_,0x0d072d28,_,_,0x0515302a,_,_,0x130d332d,
		 _,_,0x0b053530,_,0x03133833,_,_,0x110b3b35,_,_,0x09033e38,_,_,
		 0x0111403b,_,0x0109403e}
	},
	// Quantization method 11, range 0..31
	{
		QUANT_32,
		{0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 34, 36, 38,
		 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 255},
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
		 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31},
		{0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 34, 36, 38,
		 40, 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64},
		{0x01000200,_,0x02000400,_,0x03010602,_,0x04020804,_,0x05030a06,_,
		 0x06040c08,_,0x07050e0a,_,0x0806100c,_,0x0907120e,_,0x0a081410,_,
		 0x0b091612,_,0x0c0a1814,_,0x0d0b1a16,_,0x0e0c1c18,_,0x0f0d1e1a,_,
		 0x100e221c,_,_,_,0x110f241e,_,0x12102622,_,0x13112824,_,0x14122a26,_,
		 0x15132c28,_,0x16142e2a,_,0x1715302c,_,0x1816322e,_,0x19173430,_,
		 0x1a183632,_,0x1b193834,_,0x1c1a3a36,_,0x1d1b3c38,_,0x1e1c3e3a,_,
		 0x1f1d403c,_,0x1f1e403e}
	}
};
