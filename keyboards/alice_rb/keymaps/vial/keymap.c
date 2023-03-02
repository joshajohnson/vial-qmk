/*
Copyright 2022 Josh Johnson

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
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_all(
        KC_ESC, KC_GRV,      KC_1,     KC_2,  KC_3,  KC_4,  KC_5,       KC_6,  KC_7,  KC_8,       KC_9,     KC_0,  KC_MINS,    KC_EQL,  KC_BSPC,  KC_BSPC,  KC_INS,  KC_HOME,  KC_PGUP,
        KC_2,   KC_TAB,      KC_Q,     KC_W,  KC_E,  KC_R,  KC_T,       KC_Y,  KC_U,  KC_I,       KC_O,     KC_P,  KC_LBRC,   KC_RBRC,  KC_BSLS,            KC_DEL,   KC_END,  KC_PGDN,
        KC_3,   KC_CAPS,     KC_A,     KC_S,  KC_D,  KC_F,  KC_G,       KC_H,  KC_J,  KC_K,       KC_L,  KC_SCLN,  KC_QUOT,    KC_ENT,                                  
        KC_4,   KC_LSFT,     KC_Z,     KC_X,  KC_C,  KC_V,  KC_B, KC_B, KC_N,  KC_M,  KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,   KC_RSFT,                                 KC_UP,    
                KC_LCTL,            KC_LALT,    KC_SPC,   KC_SPC,         KC_SPC,          KC_LGUI,                     KC_RCTL,                           KC_LEFT,  KC_DOWN,  KC_RGHT 
    ),

    [1] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,                                  
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,   _______,                                _______,    
                 _______,            _______,    _______,   _______,      _______,         _______,                     _______,                                          _______,  _______,  _______ 
    ),
    
    [2] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,                                  
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,   _______,                                _______,    
                 _______,            _______,    _______,   _______,      _______,         _______,                     _______,                                          _______,  _______,  _______ 
    ),
    
    [3] = LAYOUT_all(
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,  _______,            _______,  _______,  _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______,  _______,  _______,  _______,  _______,   _______,                                  
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______,  _______,  _______,   _______,                                _______,    
                 _______,            _______,    _______,   _______,      _______,         _______,                     _______,                                          _______,  _______,  _______ 
    )
};




// LED Control

void matrix_init_user(void) {
    // rgblight_set_effect_range(0, 36); // Bottom and right alt for rgb animations
    rgblight_set_effect_range(0, 28); // Bottom LEDs for rgb animations
}

// Caps / Num lock indicator
bool led_update_kb(led_t led_state) {

    // Numlock LED is off when Numlock on
    uint8_t numR = led_state.num_lock ? 0 : 32;
    uint8_t numG = led_state.num_lock ? 0 : 32; 
    uint8_t numB = led_state.num_lock ? 0 : 32;
    rgblight_setrgb_at(numR, numG, numB, LEFT_1);

    uint8_t capsR = led_state.caps_lock ? 32 : 0;
    uint8_t capsG = led_state.caps_lock ? 32 : 0;
    uint8_t capsB = led_state.caps_lock ? 32 : 0;
    rgblight_setrgb_at(capsR, capsG, capsB, LEFT_2);

    return true;
}