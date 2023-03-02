/*
Copyright 2022 Josh Johnson

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, GPeither version 2 of the License, GPor
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
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS { 28, 29, 26, 13, 12 }
#define MATRIX_COL_PINS { 25, 24, 23, 22, 21, 20, 27, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP,KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1

#define RGB_DI_PIN GP14
#define RGBLED_NUM 45
#define RGBLIGHT_ANIMATIONS

#define LEFT_1 45
#define LEFT_2 44
#define LEFT_3 43
#define LEFT_4 42
#define LEFT_5 41

#define LEFT_6 40
#define LEFT_7 39
#define LEFT_8 38

#define RIGHT_1 37