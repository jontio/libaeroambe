/*
 * Copyright (C) 2010 mbelib Author
 * GPG Key ID: 0xEA5EFE2C (9E7A 5527 9CDC EBF7 BF1B  D772 4F98 E863 EA5E FE2C)
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND ISC DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS.  IN NO EVENT SHALL ISC BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
 * OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _AMBE4800x1200_CONST_H
#define _AMBE4800x1200_CONST_H

/*
 * V/UV Quantization Vectors
 */
/*
 * Log Magnitude Prediction Residual Block Lengths
 */


const int AmbeAeroLmprbl[57][8] = {

    /*L9*/  {1,1,1,1,1,1,1,2},
    /*L=10*/{1,1,1,1,1,1,2,2},
    /*L=11*/{1,1,1,1,1,2,2,2},
    /*L=12*/{1,1,1,1,2,2,2,2},
    /*L=13*/{1,1,1,2,2,2,2,2},
    /*L=14*/{1,1,2,2,2,2,2,2},
    /*L=15*/{1,2,2,2,2,2,2,2},
    /*L=16*/{2,2,2,2,2,2,2,2},
    /*L=17*/{2,2,2,2,2,2,2,3},
    /*L=18*/{2,2,2,2,2,2,3,3},
    /*L=19*/{2,2,2,2,2,3,3,3},
    /*L=20*/{2,2,2,2,3,3,3,3},
    /*L=21*/{2,2,2,3,3,3,3,3},
    /*L=22*/{2,2,2,3,3,3,3,4},
    /*L=23*/{2,2,2,3,3,3,4,4},
    /*L=24*/{2,2,2,3,3,4,4,4},
    /*L=25*/{2,2,3,3,3,4,4,4},
    /*L=26*/{2,3,3,3,3,4,4,4},
    /*L=27*/{3,3,3,3,3,4,4,4},
    /*L=28*/{3,3,3,3,4,4,4,4},
    /*L=29*/{3,3,3,4,4,4,4,4},
    /*L=30*/{3,3,3,4,4,4,4,5},
    /*L=31*/{3,3,3,4,4,4,5,5},
    /*L=32*/{3,3,3,4,4,5,5,5},
    /*L=33*/{3,3,4,4,4,5,5,5},
    /*L=34*/{3,4,4,4,4,5,5,5},
    /*L=35*/{4,4,4,4,4,5,5,5},
    /*L=36*/{4,4,4,4,5,5,5,5},
    /*L=37*/{4,4,4,5,5,5,5,5},
    /*L=38*/{4,4,4,5,5,5,5,6},
    /*L=39*/{4,4,4,5,5,5,6,6},
    /*L=40*/{4,4,4,5,5,6,6,6},
    /*L=41*/{4,4,4,5,5,6,6,7},
    /*L=42*/{4,4,4,5,5,6,7,7},
    /*L=43*/{4,4,4,5,5,7,7,7},
    /*L=44*/{4,4,4,5,6,7,7,7},
    /*L=45*/{4,4,4,6,6,7,7,7},
    /*L=46*/{4,4,5,6,6,7,7,7},
    /*L=47*/{4,5,5,6,6,7,7,7},
    /*L=48*/{5,5,5,6,6,7,7,7},
    /*L=49*/{5,5,5,6,6,7,7,8},
    /*L=50*/{5,5,5,6,6,7,8,8},
    /*L=51*/{5,5,5,6,6,8,8,8},
    /*L=52*/{5,5,5,6,7,8,8,8},
    /*L=53*/{5,5,5,7,7,8,8,8},
    /*L=54*/{5,5,6,7,7,8,8,8},
    /*L=55*/{5,5,6,7,8,8,8,8},
    /*L=56*/{5,5,7,7,8,8,8,8}
};


/*
 * Gain Quantizer Levels
 */
const float B2Aero[64] = {  0.064540997, 0.24192201, 0.44222099, 0.64696199,
                        0.81853497, 1.0394599, 1.330333, 1.5782501,
                        1.843715, 2.084475, 2.3006721, 2.4778481,
                        2.6364501, 2.796581, 2.9524369, 3.1147039,
                        3.2825739, 3.4542761, 3.6535971, 3.860647,
                        4.045435, 4.224926, 4.4063988, 4.5737309,
                        4.7275939, 4.8748779, 5.0239849, 5.1867971,
                        5.3546958, 5.5278969, 5.7001119, 5.878746,
                        6.0495601, 6.2103429, 6.3754072, 6.5568128,
                        6.7388902, 6.9197369, 7.10429, 7.2807031,
                        7.4711938, 7.6328092, 7.778048, 7.924521,
                        8.0755615, 8.2335234, 8.3910761, 8.5301628,
                        8.6685686, 8.8263397, 8.9925089, 9.1544933,
                        9.3222313, 9.4754572, 9.6424656, 9.8143053,
                        9.9802904, 10.149387, 10.324112, 10.50513,
                        10.709581, 10.927043, 11.192899, 11.625105
                     };

const int bitalloc[][56] = {

    /*L9*/				{8, 7, 7, 6, 6, 6, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L10*/				{8, 7, 6, 5, 5, 5, 5, 6, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L11*/				{7, 6, 6, 5, 5, 4, 4, 6, 5, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L12*/				{7, 6, 5, 5, 4, 4, 4, 6, 4, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L13*/				{6, 5, 5, 4, 4, 4, 4, 6, 5, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L14*/				{6, 5, 5, 4, 4, 3, 3, 5, 5, 4, 3, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L15*/				{6, 5, 4, 4, 4, 3, 3, 4, 4, 4, 4, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L16*/				{6, 5, 4, 3, 3, 3, 3, 2, 4, 4, 4, 4, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L17*/				{5, 5, 4, 3, 3, 3, 3, 2, 4, 4, 4, 3, 3, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L18*/				{5, 4, 4, 3, 3, 3, 3, 2, 4, 4, 4, 3, 2, 2, 2, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L19*/				{5, 4, 4, 3, 3, 3, 2, 2, 4, 4, 3, 3, 3, 2, 2, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L20*/				{5, 4, 4, 3, 3, 2, 2, 2, 3, 4, 3, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L21*/				{5, 4, 3, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L22*/				{5, 4, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 2, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L23*/				{5, 4, 3, 3, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L24*/				{5, 4, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 2, 2, 2, 1, 2, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L25*/				{4, 4, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L26*/				{4, 3, 3, 2, 2, 2, 1, 2, 3, 2, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 1, 1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L27*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 3, 2, 3, 3, 3, 2, 2, 2, 2, 2, 1, 2, 1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L28*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 3, 2, 3, 2, 3, 2, 3, 2, 1, 2, 1, 1, 2, 1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L29*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 2, 2, 3, 2, 3, 2, 2, 3, 2, 1, 2, 1, 1, 2, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L30*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 2, 2, 3, 2, 3, 2, 1, 3, 2, 1, 2, 1, 1, 2, 1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L31*/				{4,	3, 3, 2, 2, 2, 1, 2, 1, 2, 2, 3, 2, 3, 2, 1, 2, 2, 1, 2, 1, 1, 2, 1, 1,	0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L32*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 2, 2, 3, 2, 3, 2, 1, 2, 2, 1, 2, 2, 1, 0, 2, 1, 1, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L33*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 2, 2, 3, 2, 1, 3, 2, 1, 2, 2, 1, 2, 2, 1, 0, 2, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L34*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 2, 2, 1, 3, 2, 1, 2, 2, 1, 2, 2, 1, 2, 2, 1, 0, 2, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L35*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 2, 1, 3, 2, 1, 2, 2, 1, 2, 2, 1, 2, 1, 1, 0, 2, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L36*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 2, 1, 3, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 0, 2, 1, 0, 0, 1, 1,	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L37*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 2, 1, 1, 2, 1, 1, 0, 2, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L38*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 2, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 0, 2, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L39*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 0, 2, 1, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L40*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 2, 1, 0, 0, 2, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L41*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 0, 0, 2, 1, 1, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L42*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2, 1, 1, 1, 2, 1, 1, 0, 0, 2, 1, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L43*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 2, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 1, 1, 1, 2, 2, 1, 0, 0, 0, 2, 1, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L44*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 0, 2, 1, 1,	2, 2, 1, 2, 1, 1, 1, 2, 2, 1, 1, 0, 2, 2, 1, 0, 0, 0, 2, 1, 1, 0, 0, 0,	2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L45*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 0, 2, 1, 1, 2, 1, 1, 3, 2, 1, 1, 0, 2, 2, 1, 1, 0, 2, 2, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L46*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 0, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 2, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L47*/				{4,	3, 3, 2, 2, 2, 1, 2, 0, 0, 2, 1, 1, 1, 2, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 2, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L48*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 1, 2, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 1, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L49*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 1, 2, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 1, 1, 0, 0, 0, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L50*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 1, 1, 0, 0, 0, 2, 1, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L51*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0, 2, 2, 1, 1, 0, 2, 1, 1, 1, 0, 2, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L52*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0, 2, 1, 1, 1, 0, 2, 2, 1, 1, 0, 0, 2, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L53*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0, 2, 2, 1, 1, 0, 0, 2, 1, 1, 1, 0, 0, 2, 2, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L54*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 1, 0, 2, 2, 1, 1, 0, 0, 2, 1, 1, 1, 0, 0, 2, 1, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    /*L55*/				{4, 3, 3, 2, 2, 2, 1, 2, 0, 0, 0, 2, 1, 1, 1, 0, 2, 2, 1, 1, 0, 2, 2, 1, 1, 0, 0, 2, 1, 1, 1, 0, 0, 2, 1, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0},
    /*L56*/				{4, 3, 3, 2, 2, 2, 1, 2, 1, 0, 0, 0, 2, 1, 1, 1, 0, 2, 2, 1, 0, 0, 2, 2, 1, 1, 0, 0, 2, 1, 1, 1, 0, 0, 2, 1, 1, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0}
};




// bit positions for B1 and up.
const int bitorder[48][65][2] = {

    //9
    {2,5,2,4,2,3,3,7,3,6,4,6,5,6,3,5,4,5,5,5,6,5,7,5,8,5,10,5,3,4,4,4,5,4,6,4,7,4,8,4,9,4,10,4,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,3,2,4,2,5,2,6,2,7,2,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,8,2,9,2,10,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,2,1,2,0},
    //10
    {2,5,2,4,2,3,3,7,3,6,4,6,3,5,4,5,5,5,10,5,3,4,4,4,5,4,6,4,7,4,8,4,9,4,10,4,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,11,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,11,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,2,1,2,0},
    //11
    {2,5,2,4,2,3,3,6,3,5,4,5,5,5,10,5,3,4,4,4,5,4,6,4,7,4,10,4,11,4,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,11,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,11,2,12,2,3,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,2,1,2,0},
    //12
    {2,5,2,4,2,3,3,6,3,5,4,5,10,5,3,4,4,4,5,4,6,4,10,4,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,11,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,11,2,12,2,13,2,3,1,4,1,5,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,2,1,2,0},
    //13
    {2,5,2,4,2,3,3,5,10,5,3,4,4,4,5,4,10,4,11,4,3,3,4,3,5,3,6,3,7,3,8,3,9,3,10,3,11,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,11,2,12,2,13,2,3,1,4,1,5,1,6,1,7,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,8,1,9,1,10,1,11,1,12,1,13,1,14,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,2,1,2,0},
    //14
    {2,5,2,4,2,3,3,5,3,4,4,4,5,4,10,4,11,4,3,3,4,3,5,3,6,3,7,3,10,3,11,3,12,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,11,2,12,2,13,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,10,1,11,1,12,1,13,1,14,1,15,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,2,1,2,0},
    //15
    {2,5,2,4,2,3,3,5,3,4,4,4,3,3,4,3,5,3,6,3,7,3,10,3,11,3,12,3,13,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,10,2,11,2,12,2,13,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,12,1,13,1,14,1,15,1,16,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,2,1,2,0},
    //16
    {2,5,2,4,2,3,3,5,3,4,4,4,3,3,4,3,5,3,11,3,12,3,13,3,14,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,11,2,12,2,13,2,14,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,14,1,15,1,16,1,17,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,2,1,2,0},
    //17
    {2,5,2,4,2,3,3,4,4,4,3,3,4,3,5,3,11,3,12,3,13,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,15,1,16,1,17,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,2,1,2,0},
    //18
    {2,5,2,4,2,3,3,4,3,3,4,3,5,3,11,3,12,3,13,3,3,2,4,2,5,2,6,2,7,2,8,2,9,2,11,2,12,2,13,2,14,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,17,1,18,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,2,1,2,0},
    //19
    {2,5,2,4,2,3,3,4,3,3,4,3,5,3,11,3,12,3,3,2,4,2,5,2,6,2,7,2,8,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,19,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,2,1,2,0},
    //20
    {2,5,2,4,2,3,3,4,3,3,4,3,5,3,12,3,3,2,4,2,5,2,6,2,7,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,20,1,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,2,1,2,0},
    //21
    {2,5,2,4,2,3,3,4,3,3,4,3,3,2,4,2,5,2,6,2,7,2,11,2,12,2,13,2,14,2,15,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,3,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,2,1,2,0},
    //22
    {2,5,2,4,2,3,3,4,3,3,4,3,3,2,4,2,5,2,6,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,21,1,3,0,4,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,2,1,2,0},
    //23
    {2,5,2,4,2,3,3,4,3,3,4,3,3,2,4,2,5,2,6,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,22,1,3,0,4,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,2,1,2,0},
    //24
    {2,5,2,4,2,3,3,4,3,3,4,3,3,2,4,2,5,2,11,2,12,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,20,1,23,1,3,0,4,0,5,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,6,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,2,1,2,0},
    //25
    {2,5,2,4,2,3,3,3,4,3,3,2,4,2,5,2,11,2,12,2,13,2,14,2,3,1,4,1,5,1,6,1,7,1,8,1,9,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,21,1,24,1,3,0,4,0,5,0,6,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,7,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,2,1,2,0},
    //26
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,11,2,13,2,14,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,11,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,20,1,22,1,25,1,3,0,4,0,5,0,6,0,7,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,2,1,2,0},
    //27
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,12,2,14,2,15,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,20,1,21,1,23,1,26,1,3,0,4,0,5,0,6,0,7,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,8,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,26,0,27,0,2,1,2,0},
    //28
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,12,2,14,2,16,2,18,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,21,1,24,1,27,1,3,0,4,0,5,0,6,0,7,0,8,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,9,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,27,0,28,0,2,1,2,0},
    //29
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,14,2,16,2,19,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,18,1,19,1,20,1,22,1,25,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,28,0,29,0,2,1,2,0},
    //30
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,14,2,16,2,19,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,19,1,20,1,22,1,25,1,28,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,10,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,28,0,29,0,2,1,2,0},
    //31
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,14,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,19,1,20,1,22,1,25,1,29,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,11,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,29,0,30,0,2,1,2,0},
    //32
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,14,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,16,1,17,1,19,1,20,1,22,1,23,1,26,1,30,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,10,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,26,0,27,0,28,0,30,0,31,0,2,1,2,0},
    //33
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,14,2,17,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,14,1,15,1,17,1,18,1,20,1,21,1,23,1,24,1,27,1,31,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,10,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,27,0,28,0,31,0,32,0,2,1,2,0},
    //34
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,15,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,12,1,13,1,15,1,16,1,18,1,19,1,21,1,22,1,24,1,25,1,28,1,32,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,12,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,28,0,29,0,32,0,33,0,2,1,2,0},
    //35
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,14,1,16,1,17,1,19,1,20,1,22,1,23,1,25,1,29,1,33,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,13,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,29,0,30,0,33,0,34,0,2,1,2,0},
    //36
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,16,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,14,1,16,1,17,1,19,1,20,1,22,1,23,1,26,1,30,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,14,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,30,0,31,0,34,0,35,0,2,1,2,0},
    //37
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,14,1,16,1,17,1,19,1,20,1,23,1,24,1,27,1,31,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,31,0,32,0,35,0,36,0,2,1,2,0},
    //38
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,14,1,16,1,17,1,19,1,20,1,23,1,27,1,31,1,35,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,31,0,32,0,35,0,36,0,2,1,2,0},
    //39
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,20,1,23,1,27,1,31,1,36,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,31,0,32,0,33,0,36,0,37,0,2,1,2,0},
    //40
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,20,1,23,1,27,1,28,1,32,1,37,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,32,0,33,0,37,0,38,0,2,1,2,0},
    //41
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,20,1,23,1,27,1,32,1,37,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,32,0,33,0,34,0,37,0,38,0,2,1,2,0},
    //42
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,20,1,23,1,27,1,32,1,38,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,32,0,33,0,34,0,38,0,39,0,2,1,2,0},
    //43
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,23,1,27,1,28,1,33,1,39,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,27,0,28,0,29,0,33,0,34,0,35,0,39,0,40,0,2,1,2,0},
    //44
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,19,1,23,1,24,1,28,1,29,1,34,1,40,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,24,0,25,0,26,0,28,0,29,0,30,0,34,0,35,0,36,0,40,0,41,0,2,1,2,0},
    //45
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,19,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,19,1,20,1,24,1,25,1,29,1,30,1,35,1,41,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,13,0,14,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,15,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,24,0,25,0,26,0,27,0,29,0,30,0,31,0,35,0,36,0,41,0,42,0,2,1,2,0},
    //46
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,16,1,17,1,20,1,21,1,25,1,30,1,31,1,36,1,42,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,20,0,21,0,22,0,23,0,25,0,26,0,27,0,28,0,30,0,31,0,32,0,36,0,37,0,42,0,43,0,2,1,2,0},
    //47
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,13,1,17,1,18,1,21,1,22,1,26,1,31,1,32,1,37,1,43,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,13,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,17,0,18,0,19,0,21,0,22,0,23,0,24,0,26,0,27,0,28,0,29,0,31,0,32,0,33,0,37,0,38,0,43,0,44,0,2,1,2,0},
    //48
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,23,1,27,1,32,1,38,1,44,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,16,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,17,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,27,0,28,0,29,0,30,0,32,0,33,0,34,0,38,0,39,0,44,0,45,0,2,1,2,0},
    //49
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,23,1,27,1,32,1,38,1,44,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,16,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,17,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,27,0,28,0,29,0,30,0,32,0,33,0,34,0,38,0,39,0,44,0,45,0,2,1,2,0},
    //50
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,23,1,27,1,32,1,38,1,45,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,16,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,27,0,28,0,29,0,30,0,32,0,33,0,34,0,38,0,39,0,40,0,45,0,46,0,2,1,2,0},
    //51
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,23,1,27,1,32,1,33,1,39,1,46,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,27,0,28,0,29,0,30,0,32,0,33,0,34,0,39,0,40,0,46,0,47,0,2,1,2,0},
    //52
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,27,1,28,1,33,1,34,1,40,1,47,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,27,0,28,0,29,0,30,0,33,0,34,0,35,0,40,0,41,0,47,0,48,0,2,1,2,0},
    //53
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,22,1,23,1,28,1,34,1,35,1,41,1,48,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,16,0,18,0,19,0,20,0,22,0,23,0,24,0,25,0,28,0,29,0,30,0,31,0,34,0,35,0,36,0,41,0,42,0,48,0,49,0,2,1,2,0},
    //54
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,18,1,19,1,23,1,24,1,29,1,35,1,42,1,49,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,14,0,15,0,16,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,18,0,19,0,20,0,21,0,23,0,24,0,25,0,26,0,29,0,30,0,31,0,32,0,35,0,36,0,37,0,42,0,43,0,49,0,50,0,2,1,2,0},
    //55
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,14,1,19,1,20,1,24,1,25,1,30,1,36,1,43,1,50,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,14,0,15,0,16,0,17,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,19,0,20,0,21,0,22,0,24,0,25,0,26,0,27,0,30,0,31,0,32,0,33,0,36,0,37,0,38,0,43,0,44,0,50,0,51,0,2,1,2,0},
    //56
    {2,5,2,4,2,3,3,3,3,2,4,2,5,2,3,1,4,1,5,1,6,1,7,1,8,1,10,1,15,1,20,1,21,1,25,1,26,1,31,1,37,1,44,1,51,1,3,0,4,0,5,0,6,0,7,0,8,0,9,0,10,0,11,0,15,0,16,0,17,0,2,2,1,7,1,6,1,5,1,4,1,3,1,2,1,1,1,0,18,0,20,0,21,0,22,0,25,0,26,0,27,0,28,0,31,0,32,0,33,0,34,0,37,0,38,0,39,0,44,0,45,0,51,0,52,0,2,1,2,0},
};


const int lookupoffset[] = {0, 0, 2, 6, 14};

const float fxlookup[] ={

/*1*/    -0.634166, 0.57873201,
/*2*/    -1.779712, -0.44138399, 0.46759501, 1.793156,
/*3*/    -4.279284, -2.434149, -1.321453, -0.50367099, -0.179827, 0.95061302, 1.948002, 3.5644481,
/*4*/    -8.2962942, -6.1309638, -4.5550928, -3.4606631, -2.5201941, -1.753844, -1.099345, -0.57745999,
         -0.0081839999, 0.57659698, 1.292392, 2.085238, 2.9635129, 4.1180701, 5.794497, 8.2492685
};

const float dq_quantstep[] = { 1.2, 0.85, 0.65, 0.42, 0.28, 0.14, 0.07, 0.035,
        0.0175, 0.00875, 0.005, 0.0025 };

const float dq_prba_mul[] = { 0.383508, 0.241319, 0.192224, 0.142873, 0.120722,
                                0.110561, 0.107348 };
const float dq_prba_add[] = {  0.59876198, -0.212202, -0.020639, -0.167114,
                                 -0.107666, -0.082211003, -0.058773 };

const float dq_hoc_mul[8][9] = {
    { 0.251012, 0.134634, 0.108924, 0.090682, 0.0, 0.0, 0.0, 0.0, 0.0 },
    { 0.28937301, 0.204162, 0.18148801, 0.141091, 0.0, 0.0, 0.0, 0.0, 0.0 },
    { 0.265773, 0.190194, 0.138142, 0.107815, 0.0, 0.0, 0.0, 0.0, 0.0 },
    { 0.27769801, 0.186648, 0.1427, 0.133697, 0.0, 0.0, 0.0, 0.0, 0.0 },
    { 0.26810801, 0.179805, 0.131339, 0.112442, 0.083299004,
      0.080834001, 0.084485002, 0.0, 0.0 },
    { 0.281831, 0.199366, 0.147891, 0.113754, 0.082061999,
      0.109516, 0.096391998, 0.069571003, 0.0 },
    { 0.26216799, 0.169484, 0.12996501, 0.117727, 0.083796002,
      0.10129, 0.073732004, 0.086384997, 0.0 },
    { 0.276337, 0.196631, 0.14203, 0.108686, 0.079484001, 0.09183,
      0.10001, 0.089230999, 0.0 }
};

const float dq_hoc_add[8][9] = {
    { -0.58701801,-0.044727001,-0.061985001, 0.052513, 0.0, 0.0,
      0.0, 0.0, 0.0 },
    {  0.073668003,-0.057243999,-0.012928, 0.0078099999, 0.0, 0.0,
       0.0, 0.0, 0.0 },
    {  0.113336, 0.065157004, 0.030675,-0.035709001, 0.0, 0.0,
       0.0, 0.0, 0.0 },
    {  0.033447001,-0.010879, 0.040254999, 0.00087500003, 0.0,
       0.0, 0.0, 0.0, 0.0 },
    {  0.051784001,-0.0052700001, 0.011678,-0.0027389999,
       0.007216,-0.0092000002, 0.01352, 0.0, 0.0 },
    {  0.038284, 0.016801, 0.0075110001, 0.001014,
       0.0059420001,-0.00029600001,-0.015261,-0.001595, 0.0 },
    {  0.19175699, 0.076344997, 0.019915,
       0.000066000001,-0.0016129999,-0.002261,-0.002116,-0.017459, 0.0 },
    {  0.352494,-0.17348, 0.048409,-0.041475002,
       0.016357999,-0.0053940001,-0.01058,-0.01076, 0.0 }
    };

#endif /* _AMBE4800x1200_CONST_H */
