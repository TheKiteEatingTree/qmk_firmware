#include QMK_KEYBOARD_H

enum planck_layers {
  _MAIN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Main
 * ,---------------------
 * | Tab  |   Q  |   W  |
 * |------+------+------+
 * | Esc  |   A  |   S  |
 * |------+------+------+
 * | Shift|   Z  |   X  |
 * |------+------+------+
 * |      | Ctrl   Alt  |
 * `---------------------
 */
[_MAIN] = LAYOUT(
    RESET, KC_1, KC_2,
    KC_F2, KC_3, KC_4,
    KC_DEL,KC_5, KC_6,
             KC_ENT
)
};
