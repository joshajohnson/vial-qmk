#include "plasticbird.h"

void keyboard_pre_init_kb(void) {
    setPinOutput(0);
    setPinOutput(28);

    keyboard_pre_init_user();
}

bool led_update_kb(led_t led_state) {
    if (led_update_user(led_state)) {
        writePin(0, led_state.num_lock);
        writePin(28, led_state.caps_lock);
    }
    return true;
}
