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

#define ___ KC_NO

// For the bottom section, matrix is split down the middle and translated below due to how QMK handles key scanning. K50 is the break point

// clang-format off
#define LAYOUT_split60(                                                    \
K00, K01, K02, K03, K04, K05, K06, K50, K51, K52, K53, K54, K55, K56, K57, \
  K10, K12, K13, K14, K15, K16, K60, K61, K62, K63, K64, K65, K66,    K67, \
  K20,     K22, K23, K24, K25, K26, K70, K71, K72, K74, K75, K76,  K77,    \
  K31,       K32, K33, K34, K35, K36, K80, K81, K82, K84, K85,   K86, K87, \
K40,   K42,   K43,    K44, K45,          K90, K91,     K94, K95, K96, K97  \
)                                                                          \
{                                           \
{ K00, K01, K02, K03, K04, K05, K06, ___ }, \
{ K10, ___, K12, K13, K14, K15, K16, ___ }, \
{ K20, ___, K22, K23, K24, K25, K26, ___ }, \
{ ___, K31, K32, K33, K34, K35, K36, ___ }, \
{ K40, ___, K42, K43, K44, K45, ___, ___ }, \
{ K50, K51, K52, K53, K54, K55, K56, K57 }, \
{ K60, K61, K62, K63, K64, K65, K66, K67 }, \
{ K70, K71, K72, ___, K74, K75, K76, K77 }, \
{ K80, K81, K82, ___, K84, K85, K86, K87 }, \
{ K90, K91, ___, ___, K94, K95, K96, K97 }, \
}
// clang-format on