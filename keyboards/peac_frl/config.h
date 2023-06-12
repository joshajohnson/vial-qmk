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
#define MATRIX_COLS 18

#define MATRIX_ROW_PINS { 6, 5, 29, 17, 16 }
#define MATRIX_COL_PINS { 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 4, 3, 2, 1, 13, 14, 15}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP,KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Use 1000hz polling */
#define USB_POLLING_INTERVAL_MS 1