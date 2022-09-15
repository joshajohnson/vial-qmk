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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_encoder(
     KC_L, KC_R  \
  )
};
// clang-format on

bool encoder_update_user(uint8_t index, bool clockwise) {
    // Left encoders are index 0 - 9
    if (index == 0) { 
        if (clockwise) {
            send_string("LEFT 0 CW");
        } else {
            send_string("LEFT 0 CCW");
        }
    } else if (index == 1) {
        if (clockwise) {
            send_string("LEFT 1 CW");
        } else {
            send_string("LEFT 1 CCW");
        }
    } else if (index == 2) {
        if (clockwise) {
            send_string("LEFT 2 CW");
        } else {
            send_string("LEFT 2 CCW");
        }
    } else if (index == 3) {
        if (clockwise) {
            send_string("LEFT 3 CW");
        } else {
            send_string("LEFT 3 CCW");
        }
    } else if (index == 4) {
        if (clockwise) {
            send_string("LEFT 4 CW");
        } else {
            send_string("LEFT 4 CCW");
        }
    } else if (index == 5) {
        if (clockwise) {
            send_string("LEFT 5 CW");
        } else {
            send_string("LEFT 5 CCW");
        }
    } else if (index == 6) {
        if (clockwise) {
            send_string("LEFT 6 CW");
        } else {
            send_string("LEFT 6 CCW");
        }
    } else if (index == 7) {
        if (clockwise) {
            send_string("LEFT 7 CW");
        } else {
            send_string("LEFT 7 CCW");
        }
    } else if (index == 8) {
        if (clockwise) {
            send_string("LEFT 8 CW");
        } else {
            send_string("LEFT 8 CCW");
        }
    } else if (index == 9) {
        if (clockwise) {
            send_string("LEFT 9 CW");
        } else {
            send_string("LEFT 9 CCW");
        }
    }

    // Right encoders are index 10 - 19
    else if (index == 10) { 
        if (clockwise) {
            send_string("RIGHT 10 CW");
        } else {
            send_string("RIGHT 10 CCW");
        }
    } else if (index == 11) {
        if (clockwise) {
            send_string("RIGHT 11 CW");
        } else {
            send_string("RIGHT 11 CCW");
        }
    } else if (index == 12) {
        if (clockwise) {
            send_string("RIGHT 12 CW");
        } else {
            send_string("RIGHT 12 CCW");
        }
    } else if (index == 13) {
        if (clockwise) {
            send_string("RIGHT 13 CW");
        } else {
            send_string("RIGHT 13 CCW");
        }
    } else if (index == 14) {
        if (clockwise) {
            send_string("RIGHT 14 CW");
        } else {
            send_string("RIGHT 14 CCW");
        }
    } else if (index == 15) {
        if (clockwise) {
            send_string("RIGHT 15 CW");
        } else {
            send_string("RIGHT 15 CCW");
        }
    } else if (index == 16) {
        if (clockwise) {
            send_string("RIGHT 16 CW");
        } else {
            send_string("RIGHT 16 CCW");
        }
    } else if (index == 17) {
        if (clockwise) {
            send_string("RIGHT 17 CW");
        } else {
            send_string("RIGHT 17 CCW");
        }
    } else if (index == 18) {
        if (clockwise) {
            send_string("RIGHT 18 CW");
        } else {
            send_string("RIGHT 18 CCW");
        }
    } else if (index == 19) {
        if (clockwise) {
            send_string("RIGHT 19 CW");
        } else {
            send_string("RIGHT 19 CCW");
        }
    }
    return true;
}