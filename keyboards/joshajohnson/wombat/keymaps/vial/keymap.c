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

#include QMK_KEYBOARD_H

enum layer_names {
    _COLEMAK,
    _QWERTY,
    _FN
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_wombat(
    // Knobs
       KC_A,         KC_B,         KC_C,         KC_D,         KC_E,         KC_F,         KC_G,         KC_H,         KC_I,         KC_J,         KC_K,         KC_L,         KC_M,         KC_N,         KC_O,          KC_P,         KC_Q,         KC_R,        KC_S,         KC_T,       \
    // Macro Rows
     KC_F13,  KC_F13,  KC_F13,  KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,      KC_F13,  KC_F13,  KC_F13,TG(_QWERTY), \
     KC_F13,  KC_F13,  KC_F13,  KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,      KC_F13,  KC_F13,  KC_F13,   KC_F13,   \
    // Function Row  
     KC_F13,  KC_F13,  KC_F13,  KC_F13,  KC_PAUS,  KC_SCRL,  KC_PSCR,   KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,    KC_F11,   KC_F12,   KC_F13,   KC_PSCR,  KC_SCRL,  KC_PAUS,      KC_F13,  KC_F13,  KC_F13,   KC_F13,   \
    // Normal Keyboard begins here  
    KC_PMNS, KC_PAST, KC_PSLS,  KC_NUM,  KC_PGUP,  KC_HOME,   KC_INS,   KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_MINS,   KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME,  KC_PGUP,      KC_NUM, KC_PSLS, KC_PAST,  KC_PMNS,   \
    KC_PPLS,   KC_P7,   KC_P8,   KC_P9,  KC_PGDN,   KC_END,   KC_DEL,   KC_TAB,     KC_Q,     KC_W,     KC_F,     KC_P,     KC_G,     KC_J,     KC_L,     KC_U,     KC_Y,  KC_SCLN,   KC_LBRC,  KC_RBRC,  KC_BSLS,    KC_DEL,   KC_END,  KC_PGDN,       KC_P7,   KC_P8,   KC_P9,  KC_PPLS,   \
               KC_P4,   KC_P5,   KC_P6,                                KC_BSPC,     KC_A,     KC_R,     KC_S,     KC_T,     KC_D,     KC_H,     KC_N,     KC_E,     KC_I,     KC_O,   KC_QUOT,        KC_ENT,                                           KC_P4,   KC_P5,   KC_P6,             \
    KC_PENT,   KC_P1,   KC_P2,   KC_P3,              KC_UP,                 KC_LSFT,          KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_K,     KC_M,  KC_COMM,   KC_DOT,   KC_SLSH,       KC_RSFT,                     KC_UP,                KC_P1,   KC_P2,   KC_P3,  KC_PENT,   \
             KC_PDOT,       KC_P0,       KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_LCTL,    KC_LGUI,    KC_LALT,                   LT(_FN, KC_SPACE),                                       KC_RALT,  KC_RGUI,   KC_RCTL,      KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_P0,     KC_PDOT             \
  ),
  [_QWERTY] = LAYOUT_wombat(
    // Knobs
       KC_A,         KC_B,         KC_C,         KC_D,         KC_E,         KC_F,         KC_G,         KC_H,         KC_I,         KC_J,         KC_K,         KC_L,         KC_M,         KC_N,         KC_O,          KC_P,         KC_Q,         KC_R,        KC_S,         KC_T,       \
    // Macro Rows
     KC_F13,  KC_F13,  KC_F13,  KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,      KC_F13,  KC_F13,  KC_F13,  _______,   \
     KC_F13,  KC_F13,  KC_F13,  KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,    KC_F13,   KC_F13,   KC_F13,      KC_F13,  KC_F13,  KC_F13,   KC_F13,   \
    // Function Row  
     KC_F13,  KC_F13,  KC_F13,  KC_F13,  KC_PAUS,  KC_SCRL,  KC_PSCR,   KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,   KC_F10,    KC_F11,   KC_F12,   KC_F13,   KC_PSCR,  KC_SCRL,  KC_PAUS,      KC_F13,  KC_F13,  KC_F13,   KC_F13,   \
    // Normal Keyboard begins here  
    KC_PMNS, KC_PAST, KC_PSLS,  KC_NUM,  KC_PGUP,  KC_HOME,   KC_INS,   KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_MINS,   KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME,  KC_PGUP,      KC_NUM, KC_PSLS, KC_PAST,  KC_PMNS,   \
    KC_PPLS,   KC_P7,   KC_P8,   KC_P9,  KC_PGDN,   KC_END,   KC_DEL,   KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,   KC_LBRC,  KC_RBRC,  KC_BSLS,    KC_DEL,   KC_END,  KC_PGDN,       KC_P7,   KC_P8,   KC_P9,  KC_PPLS,   \
               KC_P4,   KC_P5,   KC_P6,                                KC_BSPC,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,  KC_SCLN,   KC_QUOT,        KC_ENT,                                           KC_P4,   KC_P5,   KC_P6,             \
    KC_PENT,   KC_P1,   KC_P2,   KC_P3,              KC_UP,                 KC_LSFT,          KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,  KC_COMM,   KC_DOT,   KC_SLSH,       KC_RSFT,                     KC_UP,                KC_P1,   KC_P2,   KC_P3,  KC_PENT,   \
             KC_PDOT,       KC_P0,       KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_LCTL,    KC_LGUI,    KC_LALT,                              KC_SPC,                                       KC_RALT,  KC_RGUI,   KC_RCTL,      KC_LEFT,  KC_DOWN,  KC_RGHT,            KC_P0,     KC_PDOT             \
  ),
  [_FN] = LAYOUT_wombat(
    // Knobs
       _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,        \
    // Macro Rows
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,     _______, _______, _______,  _______,   \
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,     _______, _______, _______,  _______,   \
    // Function Row  
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,     _______, _______, _______,  _______,   \
    // Normal   Keyboard begins here                                                                                                                                                                                                                                  
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,     _______, _______, _______,  _______,   \
     _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,   _______,  _______,  _______,     _______, _______, _______,  _______,   \
               _______,  _______,  _______,                                 KC_DEL,  KC_VOLD,  KC_VOLU,  KC_MPRV,  KC_MNXT,  KC_MPLY,  _______,  KC_LEFT,  KC_DOWN,    KC_UP,  KC_RGHT,   _______,       _______,                                         _______, _______, _______,             \
     _______,  _______,  _______,  _______,            _______,                 _______,       _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,       _______,                   _______,              _______, _______, _______,  _______,   \
               _______,      _______,        _______,  _______,  _______,  _______,    _______,    _______,                             _______,                                       _______,  _______,   _______,      _______,  _______,  _______,          _______,    _______              \
  ),

};
// clang-format on