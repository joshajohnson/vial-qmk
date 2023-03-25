/*
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

/* Key matrix configuration. */
#define MATRIX_ROW_PINS         { GP3, GP15, GP28, GP26, GP24 } 
#define MATRIX_COL_PINS         { GP1, GP0, GP2, GP7, GP6, GP5, GP4, GP10 } // GP10 is a dummy to keep QMK happy
#define MATRIX_ROW_PINS_RIGHT   { GP27, GP25, GP9, GP10, GP11 }
#define MATRIX_COL_PINS_RIGHT   { GP17, GP18, GP20, GP21, GP5, GP3, GP4, GP0 }

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN GP13

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

#define SPLIT_HAND_PIN GP16
#define SPLIT_HAND_PIN_LOW_IS_LEFT

#define RGB_DI_PIN GP12
#define RGBLED_NUM 18
#define RGBLED_SPLIT {9, 9}