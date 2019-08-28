/* --COPYRIGHT--,BSD
 * Copyright (c) 2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * --/COPYRIGHT--*/
//*****************************************************************************
//
// This file is generated by ftrasterize; DO NOT EDIT BY HAND!
//
//*****************************************************************************

#include <ti/grlib/grlib.h>

//*****************************************************************************
//
// Details of this font:
//     Style: cmtt
//     Size: 26 point
//     Bold: no
//     Italic: no
//     Memory usage: 2776 bytes
//
//*****************************************************************************

//*****************************************************************************
//
// The compressed data for the 26 point Cmtt font.
//
//*****************************************************************************
static const uint8_t g_pucCmtt26Data[2574] =
{
    4,  14,   0,  42,  23,  14, 240, 240,  66, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 240, 178, 194, 194,
    0,  11,  32,  22,  14, 240, 240,  34,  34, 130,  34, 130,
    34, 130,  34, 130,  34, 130,  34, 130,  34, 130,  34,   0,
    25,  35,  14, 240, 240,  50,  33, 146,  33, 145,  49, 145,
    49, 106,  74,  98,  34, 130,  34, 130,  34, 130,  34, 106,
    74,  97,  49, 145,  49, 145,  34, 145,  34,   0,  11,  16,
    41,  14,  98, 194, 180, 136,  98,  18,  19,  66,  34,  34,
    66,  34,  34,  66,  34,  34,  67,  18, 149, 166, 165, 146,
    34,  66,  34,  34,  66,  34,  34,  67,  18,  19,  88, 132,
    178, 194,   0,   7,  96,  42,  14,  50,  81,  84,  50,  84,
    50,  84,  49, 100,  49, 100,  34, 114,  49, 209, 194, 193,
    209, 194, 193, 209,  35, 113,  37,  97,  34,  18,  97,  34,
    18,  81,  50,  18,  81,  53,  81,  67,   0,   7,  32,  40,
    14, 240, 240,  35, 180, 146,  18, 146,  18, 146,  18, 146,
    23,  68,  21,  82,  49, 130,  49, 115,  34,  98,  17,  33,
    114,  35, 114,  34,  50,  50,  35,  34,  68,  21,  67,  51,
    0,  10,  96,  15,  14, 240, 240,  66, 195, 179, 209, 209,
    193, 194, 178,   0,  25,  48,  25,  14, 145, 194, 178, 178,
    178, 194, 194, 178, 194, 194, 194, 194, 194, 210, 194, 194,
    210, 210, 195, 209,   0,   7,  64,  25,  14,  65, 211, 194,
    210, 210, 194, 210, 194, 194, 194, 194, 194, 194, 194, 178,
    194, 178, 178, 179, 177,   0,   8,  16,  25,  14,   0,   9,
    82, 194, 130,  34,  33,  83,  18,  18, 117, 163, 151,  99,
    21,  82,  34,  18, 146, 194,   0,  14,  80,  19,  14,   0,
    7,  98, 194, 194, 194, 194, 138,  74, 130, 194, 194, 194,
    194,   0,  14,  96,  14,  14,   0,  27,   2, 195, 179, 209,
    194, 178, 193, 240, 240,  80,   8,  14,   0,  16,  25,  89,
    0,  23,  10,  14,   0,  27,   3, 179, 179,   0,  11,  16,
    25,  14, 177, 194, 193, 194, 194, 193, 194, 193, 194, 194,
    178, 194, 193, 194, 193, 194, 194, 193, 194, 193,   0,   8,
    32,  35,  14, 240, 240,  52, 150, 115,  35,  98,  66,  98,
    67,  66,  98,  66,  98,  66,  98,  66,  98,  66,  98,  66,
    98,  82,  67,  82,  66,  99,  35, 118, 148,   0,  11,  16,
    24,  14, 240, 240,  81, 194, 179, 149, 146,  18, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 152, 104,   0,  10, 112,
    28,  14, 240, 240,  37, 136,  98,  51,  82,  83,  66,  98,
    81,  98, 194, 178, 194, 178, 178, 163, 162, 178,  82,  74,
    74,   0,  10,  96,  28,  14, 240, 240,  52, 150, 114,  51,
    98,  66, 194, 178, 148, 165, 210, 210, 194,  66,  98,  66,
    98,  67,  66, 104, 117,   0,  11,  16,  31,  14, 240, 240,
    83, 164, 161,  18, 146,  18, 145,  34, 130,  34, 130,  34,
    114,  50, 114,  50,  98,  66, 107,  59, 146, 194, 166, 134,
    0,  10,  96,  28,  14, 240, 240,  24, 104,  98, 194, 194,
    194, 194,  20, 120,  98,  66, 210, 194,  66,  98,  66,  98,
    67,  66, 104, 132,   0,  11,  16,  31,  14, 240, 240,  84,
    150, 114,  50,  98,  66,  98, 178, 194,  20, 120,  99,  51,
    82,  82,  82,  97,  82,  97,  98,  66,  98,  50, 134, 148,
    0,  11,  23,  14, 240, 250,  74,  66,  97, 193, 194, 193,
    194, 193, 194, 194, 193, 194, 194, 194, 194, 194,   0,  11,
    48,  33,  14, 240, 240,  52, 136,  83,  67,  66,  98,  66,
    98,  82,  66, 118, 134, 114,  66,  82,  98,  66,  98,  66,
    98,  66,  98,  82,  66, 104, 132,   0,  11,  16,  32,  14,
    240, 240,  52, 150, 114,  51,  82,  82,  81, 114,  65, 114,
    65, 114,  66,  98,  82,  67,  89, 115,  34, 178, 194,  82,
    66, 103, 133,   0,  11,  32,  15,  14,   0,  13,   3, 179,
    179,   0,  10,  19, 179, 179,   0,  11,  16,  19,  14,   0,
    13,  18, 179, 179,   0,  10,  19, 179, 179, 209, 194, 178,
    193, 240, 240,  80,  20,  14,   0,   8,  34, 179, 163, 147,
    163, 163, 162, 211, 195, 195, 211, 195, 194,   0,  12,  64,
    13,  14,   0,  12,  74,  74, 240, 240,  42,  74,   0,  19,
    64,  20,  14,   0,   7,  50, 195, 195, 211, 195, 195, 210,
    163, 163, 163, 147, 163, 178,   0,  13,  48,  26,  14, 240,
    240,  38, 120,  83,  67,  66,  98,  66,  98, 163, 163, 178,
    178, 194, 194, 194, 240, 178, 194, 194,   0,  11,  32,  41,
    14, 240, 240,  68, 150, 114,  50,  98,  34,  18,  82,  22,
    66,  34,  19,  66,  18,  50,  66,  18,  50,  66,  18,  50,
    66,  18,  50,  66,  19,  19,  82,  21,  98,  35, 130,  66,
    103, 148,   0,  11,  32,  14, 240, 240,  66, 194, 194, 180,
    164, 161,  33, 161,  33, 161,  33, 146,  34, 130,  34, 134,
    134, 129,  65, 114,  66,  84,  36,  68,  36,   0,  10,  96,
    31,  14, 240, 248, 105,  98,  67,  82,  82,  82,  82,  82,
    82,  82,  66, 103, 119, 114,  66,  98,  82,  82,  82,  82,
    82,  82,  67,  73,  88,   0,  11,  31,  14, 240, 240,  67,
    18, 104,  98,  51,  82,  82,  82,  82,  66,  98,  66, 194,
    194, 194, 194, 210,  82,  82,  82,  83,  50, 119, 147,   0,
    11,  16,  34,  14, 240, 247, 120, 114,  51,  98,  66,  98,
    67,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,  82,
    82,  82,  67,  82,  66,  98,  51,  88, 103,   0,  11,  16,
    28,  14, 240, 251,  44,  66,  98,  66,  98,  66, 194, 194,
    50, 119, 119, 114,  50, 114, 194, 194,  98,  66,  98,  59,
    44,   0,  10,  80,  26,  14, 240, 251,  59,  82,  82,  82,
    82,  82, 194, 194,  50, 119, 119, 114,  50, 114, 194, 194,
    194, 166, 134,   0,  11,  32,  34,  14, 240, 240,  51,  18,
    119,  99,  35,  98,  66,  98,  66,  82,  82,  82, 194, 194,
    194,  68,  66,  68,  67,  66,  98,  66,  99,  35, 119, 131,
    18,   0,  10, 112,  36,  14, 240, 244,  36,  68,  36,  82,
    66,  98,  66,  98,  66,  98,  66,  98,  66, 104, 104,  98,
    66,  98,  66,  98,  66,  98,  66,  98,  66,  84,  36,  68,
    36,   0,  10,  96,  23,  14, 240, 240,  24, 104, 146, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 152, 104,
    0,  10, 112,  25,  14, 240, 240,  70, 134, 162, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 114,  50, 114,  50, 118,
    148,   0,  11,  32,  37,  14, 240, 244,  52,  52,  52,  66,
    66,  98,  65, 114,  50, 114,  34, 130,  18, 146,  18, 150,
    131,  33, 130,  50, 114,  65, 114,  66,  98,  81,  84,  52,
    52,  52,   0,  10,  80,  25,  14, 240, 246, 134, 162, 194,
    194, 194, 194, 194, 194, 194, 194, 194,  82,  82,  82,  82,
    82,  59,  59,   0,  10,  80,  48,  14, 240, 228,  83,  36,
    68,  51,  67,  68,  51,  66,  17,  33,  18,  66,  17,  33,
    18,  66,  17,  33,  18,  66,  20,  18,  66,  34,  34,  66,
    34,  34,  66,  34,  34,  66,  98,  66,  98,  66,  98,  52,
    68,  36,  68,   0,  10,  80,  46,  14, 240, 243,  52,  68,
    36,  83,  50,  99,  50,  98,  17,  34,  98,  17,  34,  98,
    17,  34,  98,  17,  34,  98,  33,  18,  98,  33,  18,  98,
    33,  18,  98,  33,  18,  98,  51,  98,  51,  84,  35,  84,
    35,   0,  10, 112,  34,  14, 240, 240,  38, 120,  83,  67,
    66,  98,  66,  98,  66,  98,  66,  98,  66,  98,  66,  98,
    66,  98,  66,  98,  66,  98,  66,  98,  67,  67,  88, 118,
    0,  11,  29,  14, 240, 240,  24,  90,  98,  66,  98,  82,
    82,  82,  82,  82,  82,  82,  82,  66, 104, 103, 114, 194,
    194, 194, 180, 149,   0,  11,  48,  40,  14, 240, 240,  38,
    120,  83,  67,  66,  98,  66,  98,  66,  98,  66,  98,  66,
    98,  66,  98,  66,  98,  66,  98,  66,  98,  66,  49,  34,
    67,  34,  18,  88, 118, 194, 210, 195, 194, 240, 240,  34,
    14, 240, 247, 120, 114,  51,  98,  66,  98,  66,  98,  66,
    98,  50, 119, 119, 114,  51,  98,  66,  98,  66,  98,  66,
    98,  68,  52,  52,  52,  66,   0,  10,  96,  31,  14, 240,
    240,  36,  34,  89,  67,  52,  66,  83,  66,  83,  66,  97,
    99, 197, 181, 195, 194,  66,  98,  66,  98,  67,  66,  89,
    82,  21,   0,  11,  26,  14, 240, 250,  74,  66,  34,  34,
    66,  34,  34, 130, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 180, 164,   0,  11,  16,  36,  14, 240, 244,  37,  37,
    37,  66,  66,  98,  66,  98,  66,  98,  66,  98,  66,  98,
    66,  98,  66,  98,  66,  98,  66,  98,  66,  98,  66, 114,
    34, 134, 148,   0,  11,  16,  36,  14, 240, 244,  52,  52,
    52,  66,  82,  97,  81, 113,  81, 114,  50, 114,  50, 129,
    49, 145,  49, 146,  18, 146,  18, 146,  18, 161,  17, 177,
    17, 179, 179,   0,  11,  16,  50,  14, 240, 243,  83,  51,
    83,  65, 113,  81, 113,  81, 113,  82,  97,  82,  33,  34,
    82,  19,  17, 113,  17,  17,  17, 113,  17,  17,  17, 113,
    17,  17,  17, 113,  17,  17,  17, 113,  17,  17,  17, 115,
    19, 114,  50, 114,  50,   0,  10, 112,  33,  14, 240, 244,
    20,  84,  20, 113,  50, 130,  33, 161,  18, 163, 194, 194,
    194, 179, 177,  18, 146,  33, 145,  50, 114,  65, 100,  36,
    68,  36,   0,  10,  96,  29,  14, 240, 228,  68,  36,  68,
    66,  66,  98,  66, 114,  34, 130,  34, 146,  17, 164, 178,
    194, 194, 194, 194, 194, 180, 164,   0,  11,  16,  27,  14,
    240, 250,  74,  66,  82,  82,  82, 178, 179, 178, 178, 194,
    178, 178, 194,  66,  82,  82,  81,  98,  74,  74,   0,  10,
    96,  25,  14,  70, 134, 130, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 198, 134,   0,
    7,  64,  25,  14,  49, 210, 209, 210, 194, 210, 194, 209,
    210, 194, 210, 194, 209, 210, 194, 210, 194, 209, 210, 209,
    0,   7,  32,  25,  14,  70, 134, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 134,
    134,   0,   7,  64,  13,  14, 240, 240,  82, 180, 131,  34,
    114,  65,   0,  31, 112,   9,  14,   0,  31, 121,  89,   0,
    7,  32,  13,  14, 240,  98, 178, 194, 178, 194, 195, 179,
    194,   0,  27,  23,  14,   0,  12, 101, 135, 114,  51, 194,
    134, 104,  83,  66,  82,  82,  83,  66, 106,  84,  35,   0,
    10,  80,  31,  14, 240, 244, 164, 194, 194, 194, 194,  19,
    136,  99,  50,  98,  67,  82,  82,  82,  82,  82,  82,  82,
    82,  83,  50, 100,  19,  98,  19,   0,  11,  21,  14,   0,
    13,   4, 135, 114,  50,  99, 178, 194, 194, 195,  65, 114,
    50, 118, 163,   0,  11,  16,  32,  14, 240, 240,  84, 164,
    194, 194, 194, 131,  18, 119,  98,  51,  83,  66,  82,  82,
    82,  82,  82,  82,  83,  66,  98,  51, 106,  99,  20,   0,
    10,  80,  21,  14,   0,  12, 117, 135,  98,  66,  82,  98,
    74,  74,  66, 195,  97,  83,  66, 103, 133,   0,  11,  24,
    14, 240, 240,  99, 165, 130,  34, 130, 194, 152, 104, 146,
    194, 194, 194, 194, 194, 194, 152, 104,   0,  10, 112,  32,
    14,   0,  12,  99,  35,  90,  51,  34, 114,  66,  98,  66,
    114,  35, 103, 114,  19, 130, 216,  90,  51,  99,  34, 130,
    34, 130,  35,  84,  58, 102,  64,  30,  14, 240, 228, 164,
    194, 194, 194, 194,  20, 120,  99,  50,  98,  66,  98,  66,
    98,  66,  98,  66,  98,  66,  98,  66,  76,  44,   0,  10,
    80,  23,  14, 240, 240,  66, 194, 194, 240, 240, 117, 149,
    194, 194, 194, 194, 194, 194, 194, 152, 104,   0,  10, 112,
    28,  14, 240, 240, 114, 194, 194, 240, 240, 102, 134, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,  98,
    51, 103, 133,  80,  32,  14, 240, 228, 164, 194, 194, 194,
    194,  37,  82,  37,  82,  50, 114,  34, 130,  18, 149, 147,
    33, 130,  50, 114,  66,  70,  21,  38,  21,   0,  10,  80,
    22,  14, 240, 246, 134, 194, 194, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 138,  74,   0,  10,  96,  33,  14,
    0,  12,  54,  19,  75,  67,  19,  18,  66,  34,  34,  66,
    34,  34,  66,  34,  34,  66,  34,  34,  66,  34,  34,  66,
    34,  34,  60,  44,   0,  10,  80,  26,  14,   0,  12,  52,
    20,  90,  99,  50,  98,  66,  98,  66,  98,  66,  98,  66,
    98,  66,  98,  66,  76,  44,   0,  10,  80,  25,  14,   0,
    12, 116, 150, 114,  66,  83,  67,  66,  98,  66,  98,  66,
    98,  67,  67,  83,  50, 118, 148,   0,  11,  16,  31,  14,
    0,  12,  68,  19, 106,  99,  50,  98,  82,  82,  82,  82,
    82,  82,  82,  82,  82,  83,  50, 103, 114,  19, 130, 194,
    194, 194, 166, 134,  96,  30,  14,   0,  12, 115,  18, 119,
    98,  51,  83,  66,  82,  82,  82,  82,  82,  82,  83,  66,
    98,  51, 104, 131,  18, 194, 194, 194, 194, 166, 134,  20,
    14,   0,  12,  69,  35,  69,  21, 100,  34,  99, 178, 194,
    194, 194, 194, 152, 104,   0,  11,  22,  14,   0,  12, 118,
    119,  98,  66,  98,  66, 101, 182, 195,  82,  82,  83,  51,
    88,  98,  20,   0,  11,  22,  14,   0,   7,  82, 194, 194,
    153,  89, 130, 194, 194, 194, 194, 194,  50, 114,  50, 118,
    148,   0,  11,  28,  14,   0,  12,  52,  36,  68,  36,  98,
    66,  98,  66,  98,  66,  98,  66,  98,  66,  98,  66,  98,
    51, 106,  84,  20,   0,  10,  80,  28,  14,   0,  12,  69,
    36,  52,  52,  81,  81, 113,  81, 114,  50, 129,  49, 145,
    49, 146,  18, 161,  17, 177,  17, 179,   0,  11,  16,  34,
    14,   0,  12,  68,  52,  52,  52,  66,  82,  82,  82,  97,
    33,  33, 113,  19,  17, 113,  19,  17, 113,  17,  17,  17,
    115,  17,  17, 115,  19, 130,  33,   0,  11,  26,  14,   0,
    12,  68,  36,  68,  36,  98,  34, 145,  18, 178, 194, 194,
    177,  33, 145,  50, 100,  36,  68,  36,   0,  10,  96,  31,
    14,   0,  12,  68,  36,  68,  36,  82,  66, 113,  65, 130,
    49, 145,  34, 145,  33, 162,  17, 179, 178, 194, 194, 194,
    193, 146,  18, 148, 178, 144,  21,  14,   0,  12,  74,  74,
    66,  82, 178, 178, 178, 178, 178,  66,  82,  82,  74,  74,
    0,  10,  96,  25,  14, 132, 149, 130, 194, 194, 194, 194,
    194, 179, 133, 149, 195, 194, 194, 194, 194, 194, 194, 198,
    164,   0,   7,  32,  25,  14,  98, 194, 194, 194, 194, 194,
    194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194, 194,
    194, 194,   0,   7,  96,  24,  14,  36, 166, 194, 194, 194,
    194, 194, 194, 195, 197, 149, 131, 178, 194, 194, 194, 194,
    194, 134, 132,   0,   8,  13,  14, 240, 240,  50,  49, 116,
    18,  98,  34,   0,  33, 112,
};

//*****************************************************************************
//
// The font definition for the 26 point Cmtt font.
//
//*****************************************************************************
const Graphics_Font g_sFontCmtt26 =
{
    //
    // The format of the font.
    //
    FONT_FMT_PIXEL_RLE,

    //
    // The maximum width of the font.
    //
    11,

    //
    // The height of the font.
    //
    24,

    //
    // The baseline of the font.
    //
    18,

    //
    // The offset to each character in the font.
    //
    {
        0,    4,   27,   49,   84,  125,  167,  207,
        222,  247,  272,  297,  316,  330,  338,  348,
        373,  408,  432,  460,  488,  519,  547,  578,
        601,  634,  666,  681,  700,  720,  733,  753,
        779,  820,  852,  883,  914,  948,  976, 1002,
        1036, 1072, 1095, 1120, 1157, 1182, 1230, 1276,
        1310, 1339, 1379, 1413, 1444, 1470, 1506, 1542,
        1592, 1625, 1654, 1681, 1706, 1731, 1756, 1769,
        1778, 1791, 1814, 1845, 1866, 1898, 1919, 1943,
        1975, 2005, 2028, 2056, 2088, 2110, 2143, 2169,
        2194, 2225, 2255, 2275, 2297, 2319, 2347, 2375,
        2409, 2435, 2466, 2487, 2512, 2537, 2561,
    },

    //
    // A pointer to the actual font data
    //
    g_pucCmtt26Data
};
