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

#ifndef _MBELIB_CONST_H
#define _MBELIB_CONST_H

/*
 * Speech Synthesis Window 8k version
 */
const float Ws[321] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0.02, 0.04, 0.06, 0.08, 0.1, 0.12, 0.14, 0.16, 0.18,
  0.2, 0.22, 0.24, 0.26, 0.28, 0.3, 0.32, 0.34, 0.36, 0.38,
  0.4, 0.42, 0.44, 0.46, 0.48, 0.5, 0.52, 0.54, 0.56, 0.58,
  0.6, 0.62, 0.64, 0.66, 0.68, 0.7, 0.72, 0.74, 0.76, 0.78,
  0.8, 0.82, 0.84, 0.86, 0.88, 0.9, 0.92, 0.94, 0.96, 0.98,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  0.98, 0.96, 0.94, 0.92, 0.9, 0.88, 0.86, 0.84, 0.82, 0.8,
  0.78, 0.76, 0.74, 0.72, 0.7, 0.68, 0.66, 0.64, 0.62, 0.6,
  0.58, 0.56, 0.54, 0.52, 0.5, 0.48, 0.46, 0.44, 0.42, 0.4,
  0.38, 0.36, 0.34, 0.32, 0.3, 0.28, 0.26, 0.24, 0.22, 0.2,
  0.18, 0.16, 0.14, 0.12, 0.1, 0.08, 0.06, 0.04, 0.02, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*
 * Speech Synthesis Window, 48k version
 */
/*
const float Ws48k[1926] = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0.000, 0.003, 0.007,
  0.010, 0.013, 0.017,
  0.020, 0.023, 0.027,
  0.030, 0.033, 0.037,
  0.040, 0.043, 0.047,
  0.050, 0.053, 0.057,
  0.060, 0.063, 0.067,
  0.070, 0.073, 0.077,
  0.080, 0.083, 0.087,
  0.090, 0.093, 0.097,
  0.100, 0.103, 0.107,
  0.110, 0.113, 0.117,
  0.120, 0.123, 0.127,
  0.130, 0.133, 0.137,
  0.140, 0.143, 0.147,
  0.150, 0.153, 0.157,
  0.160, 0.163, 0.167,
  0.170, 0.173, 0.177,
  0.180, 0.183, 0.187,
  0.190, 0.193, 0.197,
  0.200, 0.203, 0.207,
  0.210, 0.213, 0.217,
  0.220, 0.223, 0.227,
  0.230, 0.233, 0.237,
  0.240, 0.243, 0.247,
  0.250, 0.253, 0.257,
  0.260, 0.263, 0.267,
  0.270, 0.273, 0.277,
  0.280, 0.283, 0.287,
  0.290, 0.293, 0.297,
  0.300, 0.303, 0.307,
  0.310, 0.313, 0.317,
  0.320, 0.323, 0.327,
  0.330, 0.333, 0.337,
  0.340, 0.343, 0.347,
  0.350, 0.353, 0.357,
  0.360, 0.363, 0.367,
  0.370, 0.373, 0.377,
  0.380, 0.383, 0.387,
  0.390, 0.393, 0.397,
  0.400, 0.403, 0.407,
  0.410, 0.413, 0.417,
  0.420, 0.423, 0.427,
  0.430, 0.433, 0.437,
  0.440, 0.443, 0.447,
  0.450, 0.453, 0.457,
  0.460, 0.463, 0.467,
  0.470, 0.473, 0.477,
  0.480, 0.483, 0.487,
  0.490, 0.493, 0.497,
  0.500, 0.503, 0.507,
  0.510, 0.513, 0.517,
  0.520, 0.523, 0.527,
  0.530, 0.533, 0.537,
  0.540, 0.543, 0.547,
  0.550, 0.553, 0.557,
  0.560, 0.563, 0.567,
  0.570, 0.573, 0.577,
  0.580, 0.583, 0.587,
  0.590, 0.593, 0.597,
  0.600, 0.603, 0.607,
  0.610, 0.613, 0.617,
  0.620, 0.623, 0.627,
  0.630, 0.633, 0.637,
  0.640, 0.643, 0.647,
  0.650, 0.653, 0.657,
  0.660, 0.663, 0.667,
  0.670, 0.673, 0.677,
  0.680, 0.683, 0.687,
  0.690, 0.693, 0.697,
  0.700, 0.703, 0.707,
  0.710, 0.713, 0.717,
  0.720, 0.723, 0.727,
  0.730, 0.733, 0.737,
  0.740, 0.743, 0.747,
  0.750, 0.753, 0.757,
  0.760, 0.763, 0.767,
  0.770, 0.773, 0.777,
  0.780, 0.783, 0.787,
  0.790, 0.793, 0.797,
  0.800, 0.803, 0.807,
  0.810, 0.813, 0.817,
  0.820, 0.823, 0.827,
  0.830, 0.833, 0.837,
  0.840, 0.843, 0.847,
  0.850, 0.853, 0.857,
  0.860, 0.863, 0.867,
  0.870, 0.873, 0.877,
  0.880, 0.883, 0.887,
  0.890, 0.893, 0.897,
  0.900, 0.903, 0.907,
  0.910, 0.913, 0.917,
  0.920, 0.923, 0.927,
  0.930, 0.933, 0.937,
  0.940, 0.943, 0.947,
  0.950, 0.953, 0.957,
  0.960, 0.963, 0.967,
  0.970, 0.973, 0.977,
  0.980, 0.983, 0.987,
  0.990, 0.993, 0.997,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  0.997, 0.993, 0.990,
  0.987, 0.983, 0.980,
  0.977, 0.973, 0.970,
  0.967, 0.963, 0.960,
  0.957, 0.953, 0.950,
  0.947, 0.943, 0.940,
  0.937, 0.933, 0.930,
  0.927, 0.923, 0.920,
  0.917, 0.913, 0.910,
  0.907, 0.903, 0.900,
  0.897, 0.893, 0.890,
  0.887, 0.883, 0.880,
  0.877, 0.873, 0.870,
  0.867, 0.863, 0.860,
  0.857, 0.853, 0.850,
  0.847, 0.843, 0.840,
  0.837, 0.833, 0.830,
  0.827, 0.823, 0.820,
  0.817, 0.813, 0.810,
  0.807, 0.803, 0.800,
  0.797, 0.793, 0.790,
  0.787, 0.783, 0.780,
  0.777, 0.773, 0.770,
  0.767, 0.763, 0.760,
  0.757, 0.753, 0.750,
  0.747, 0.743, 0.740,
  0.737, 0.733, 0.730,
  0.727, 0.723, 0.720,
  0.717, 0.713, 0.710,
  0.707, 0.703, 0.700,
  0.697, 0.693, 0.690,
  0.687, 0.683, 0.680,
  0.677, 0.673, 0.670,
  0.667, 0.663, 0.660,
  0.657, 0.653, 0.650,
  0.647, 0.643, 0.640,
  0.637, 0.633, 0.630,
  0.627, 0.623, 0.620,
  0.617, 0.613, 0.610,
  0.607, 0.603, 0.600,
  0.597, 0.593, 0.590,
  0.587, 0.583, 0.580,
  0.577, 0.573, 0.570,
  0.567, 0.563, 0.560,
  0.557, 0.553, 0.550,
  0.547, 0.543, 0.540,
  0.537, 0.533, 0.530,
  0.527, 0.523, 0.520,
  0.517, 0.513, 0.510,
  0.507, 0.503, 0.500,
  0.497, 0.493, 0.490,
  0.487, 0.483, 0.480,
  0.477, 0.473, 0.470,
  0.467, 0.463, 0.460,
  0.457, 0.453, 0.450,
  0.447, 0.443, 0.440,
  0.437, 0.433, 0.430,
  0.427, 0.423, 0.420,
  0.417, 0.413, 0.410,
  0.407, 0.403, 0.400,
  0.397, 0.393, 0.390,
  0.387, 0.383, 0.380,
  0.377, 0.373, 0.370,
  0.367, 0.363, 0.360,
  0.357, 0.353, 0.350,
  0.347, 0.343, 0.340,
  0.337, 0.333, 0.330,
  0.327, 0.323, 0.320,
  0.317, 0.313, 0.310,
  0.307, 0.303, 0.300,
  0.297, 0.293, 0.290,
  0.287, 0.283, 0.280,
  0.277, 0.273, 0.270,
  0.267, 0.263, 0.260,
  0.257, 0.253, 0.250,
  0.247, 0.243, 0.240,
  0.237, 0.233, 0.230,
  0.227, 0.223, 0.220,
  0.217, 0.213, 0.210,
  0.207, 0.203, 0.200,
  0.197, 0.193, 0.190,
  0.187, 0.183, 0.180,
  0.177, 0.173, 0.170,
  0.167, 0.163, 0.160,
  0.157, 0.153, 0.150,
  0.147, 0.143, 0.140,
  0.137, 0.133, 0.130,
  0.127, 0.123, 0.120,
  0.117, 0.113, 0.110,
  0.107, 0.103, 0.100,
  0.097, 0.093, 0.090,
  0.087, 0.083, 0.080,
  0.077, 0.073, 0.070,
  0.067, 0.063, 0.060,
  0.057, 0.053, 0.050,
  0.047, 0.043, 0.040,
  0.037, 0.033, 0.030,
  0.027, 0.023, 0.020,
  0.017, 0.013, 0.010,
  0.007, 0.003, 0.000,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
*/

#endif
