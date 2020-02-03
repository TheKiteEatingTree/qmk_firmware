#include QMK_KEYBOARD_H

enum layers {
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
    RESET, LGUI(KC_1), LGUI(KC_2),
    KC_F2, LGUI(KC_3), LGUI(KC_4),
    KC_DEL,LGUI(KC_5), LGUI(KC_0),
             KC_ENT
)
};
