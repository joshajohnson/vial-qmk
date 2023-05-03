/*
Copyright 2023 QMK

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 19

#define MATRIX_COL_PINS { A5, A4, A3, A2, A1, A0, C6, B12, A10, C9, B8, B5, A14, C1, C0, C12, C11, C10, C3 }
#define MATRIX_ROW_PINS { C4, C5, B0, C7, B9, C2, A8, A6, B10, A7 }
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN B15
#define RGBLED_NUM 20
#define RGBLIGHT_ANIMATIONS

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE