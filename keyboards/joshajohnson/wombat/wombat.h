/**
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#define _____ KC_NO

// For the bottom section, matrix is split down the middle and translated below due to how QMK handles key scanning. K014 is the break point

// clang-format off
#define LAYOUT_wombat(                                                                                                                                                                                  \
K0000, K0001,        K0002, K0004,        K0006, K0007,        K0009, K0010, K0011,        K0013, K0014,        K0016, K0017,        K0019, K0020, K0021,        K0023, K0024,        K0026, K0027,     \
K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113, K0114, K0115, K0116, K0117, K0118, K0119, K0120, K0121, K0122, K0123, K0124, K0125, K0126, K0127,     \
K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, K0213, K0214, K0215, K0216, K0217, K0218, K0219, K0220, K0221, K0222, K0223, K0224, K0225, K0226, K0227,     \
K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313, K0314, K0315, K0316, K0317, K0318, K0319, K0320, K0321, K0322, K0323, K0324, K0325, K0326, K0327,     \
K0400, K0401, K0402, K0403, K0404, K0405, K0406, K0407, K0408, K0409, K0410, K0411, K0412, K0413, K0414, K0415, K0416, K0417, K0418, K0419, K0420, K0421, K0422, K0423, K0424, K0425, K0426, K0427,     \
K0500, K0501, K0502, K0503, K0504, K0505, K0506, K0507, K0508, K0509, K0510, K0511, K0512, K0513, K0514, K0515, K0516, K0517, K0518, K0519, K0520, K0521, K0522, K0523, K0524, K0525, K0526, K0527,     \
       K0601, K0602, K0603,                      K0607, K0608, K0609, K0610, K0611, K0612, K0613, K0614, K0615, K0616, K0617, K0618,        K0620,                      K0624, K0625, K0626,            \
K0700, K0701, K0702, K0703,        K0705,        K0707, K0708, K0709, K0710, K0711, K0712, K0713, K0714, K0715, K0716,        K0718,        K0720,        K0722,        K0724, K0725, K0726, K0727,     \
       K0801, K0802,        K0804, K0805, K0806, K0807, K0808, K0809,               K0812,                             K0817, K0818,        K0820, K0821, K0822, K0823,        K0825, K0826             \
)                                                                                                                                                                                                       \
{                                                                                                                                                                                                       \
{ K0000, K0001, K0002, _____, K0004, _____, K0006, K0007, _____, K0009, K0010, K0011, _____, K0013 }, \
{ K0100, K0101, K0102, K0103, K0104, K0105, K0106, K0107, K0108, K0109, K0110, K0111, K0112, K0113 }, \
{ K0200, K0201, K0202, K0203, K0204, K0205, K0206, K0207, K0208, K0209, K0210, K0211, K0212, K0213 }, \
{ K0300, K0301, K0302, K0303, K0304, K0305, K0306, K0307, K0308, K0309, K0310, K0311, K0312, K0313 }, \
{ K0400, K0401, K0402, K0403, K0404, K0405, K0406, K0407, K0408, K0409, K0410, K0411, K0412, K0413 }, \
{ K0500, K0501, K0502, K0503, K0504, K0505, K0506, K0507, K0508, K0509, K0510, K0511, K0512, K0513 }, \
{ _____, K0601, K0602, K0603, _____, _____, _____, K0607, K0608, K0609, K0610, K0611, K0612, K0613 }, \
{ K0700, K0701, K0702, K0703, _____, K0705, _____, K0707, K0708, K0709, K0710, K0711, K0712, K0713 }, \
{ _____, K0801, K0802, _____, K0804, K0805, K0806, K0807, K0808, K0809, _____, _____, K0812, _____ }, \
{ K0014, _____, K0016, K0017, _____, K0019, K0020, K0021, _____, K0023, K0024, _____, K0026, K0027 }, \
{ K0114, K0115, K0116, K0117, K0118, K0119, K0120, K0121, K0122, K0123, K0124, K0125, K0126, K0127 }, \
{ K0214, K0215, K0216, K0217, K0218, K0219, K0220, K0221, K0222, K0223, K0224, K0225, K0226, K0227 }, \
{ K0314, K0315, K0316, K0317, K0318, K0319, K0320, K0321, K0322, K0323, K0324, K0325, K0326, K0327 }, \
{ K0414, K0415, K0416, K0417, K0418, K0419, K0420, K0421, K0422, K0423, K0424, K0425, K0426, K0427 }, \
{ K0514, K0515, K0516, K0517, K0518, K0519, K0520, K0521, K0522, K0523, K0524, K0525, K0526, K0527 }, \
{ K0614, K0615, K0616, K0617, K0618, _____, K0620, _____, _____, _____, K0624, K0625, K0626, _____ }, \
{ K0714, K0715, K0716, _____, K0718, _____, K0720, _____, K0722, _____, K0724, K0725, K0726, K0727 }, \
{ _____, _____, _____, K0817, K0818, _____, K0820, K0821, K0822, K0823, _____, K0825, K0826, _____ }, \
}
// clang-format on