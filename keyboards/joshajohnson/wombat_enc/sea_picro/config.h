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
#define MATRIX_ROW_PINS { GP29 }
#define MATRIX_COL_PINS { GP28 }
#define MATRIX_ROW_PINS_RIGHT { GP7 }
#define MATRIX_COL_PINS_RIGHT { GP6 }

#define ENCODERS_PAD_A { GP22, GP20, GP21, GP15, GP13, GP8, GP6, GP4, GP2, GP0 }
#define ENCODERS_PAD_B { GP26, GP23, GP16, GP14, GP12, GP9, GP7, GP5, GP3, GP1 }

#define ENCODERS_PAD_A_RIGHT { GP0, GP3, GP4, GP29, GP27, GP22, GP23, GP16, GP12, GP14}
#define ENCODERS_PAD_B_RIGHT { GP1, GP2, GP5, GP28, GP26, GP20, GP21, GP15, GP9,  GP13}

/* Handedness. */
#define MASTER_RIGHT

/* serial.c configuration (for split keyboard). */
#define SOFT_SERIAL_PIN GP25

/* CRC. */
#define CRC8_USE_TABLE
#define CRC8_OPTIMIZE_SPEED

// /* Reset. */
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
