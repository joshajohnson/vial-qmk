/* Copyright 2020 joshajohnson
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
#include QMK_KEYBOARD_H

#define MO_NLCK LT(1, KC_NUM) // Numlock on tap, layer change on hold

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
                 KC_MUTE,  KC_MPLY,
       KC_PMNS,  KC_PAST,  KC_PSLS,    MO_NLCK,
       KC_PPLS,    KC_P7,    KC_P8,      KC_P9,
       KC_PPLS,    KC_P4,    KC_P5,      KC_P6,
       KC_PENT,    KC_P1,    KC_P2,      KC_P3,
       KC_PENT,  KC_PDOT,    KC_P0,      KC_P0
),
    [1] = LAYOUT_all(
                 QK_BOOT,  _______,
       RGB_TOG, RGB_RMOD,  RGB_MOD,    _______,
       _______,  RGB_VAD,  RGB_VAI,    _______,
       _______,  RGB_HUD,  RGB_HUI,    _______,
       _______,  RGB_SAD,  RGB_SAI,    _______,
       _______,  _______,  _______,    _______
),
    [2] = LAYOUT_all(
                 _______,  _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______
),
    [3] = LAYOUT_all(
                 _______,  _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______,
       _______,  _______,  _______,    _______
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_MNXT, KC_MPRV),         ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] =   { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),         ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] =   { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),         ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] =   { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),        ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
    //                  Encoder 1                                     Encoder 2
};
#endif
