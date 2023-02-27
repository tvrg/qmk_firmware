#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_60_iso_split_rshift(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
        MO(3),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT,
        KC_LSFT, KC_ESC,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, DF(1),
        KC_LCTL, MO(4),   KC_LALT,                C(KC_BSPC), KC_LGUI, KC_SPC,           KC_RALT, XXXXXXX,  MO(4),  KC_RCTL
    ),

    LAYOUT_60_iso_split_rshift(
        KC_DLR, KC_AMPR, KC_LBRC, KC_LCBR, KC_RCBR, KC_LPRN, KC_EQL, KC_ASTR, KC_RPRN, KC_PLUS, KC_RBRC, KC_EXLM, KC_HASH, KC_BSPC,
        KC_TAB,  KC_SCLN, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, LSFT(KC_2),
        MO(3),   KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS, KC_BSLS, KC_ENT,
        MO(2), KC_ESC,  KC_QUOT, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    MO(2), DF(0),
        KC_LCTL, MO(4),   KC_LALT,                C(KC_BSPC), KC_LGUI, KC_SPC,           KC_RALT, XXXXXXX,  MO(4),  KC_RCTL
    ),

    LAYOUT_60_iso_split_rshift(
        KC_TILD, KC_PERC, KC_7, KC_5, KC_3, KC_1, KC_9, KC_0, KC_2, KC_4, KC_6, KC_8, KC_GRV, KC_BSPC,
        KC_TAB, KC_COLN, KC_LT, KC_GT, LSFT(KC_P), LSFT(KC_Y), LSFT(KC_F), LSFT(KC_G), LSFT(KC_C), LSFT(KC_R), LSFT(KC_L), KC_QUES, KC_CIRC,
        MO(3), LSFT(KC_A), LSFT(KC_O), LSFT(KC_E), LSFT(KC_U), LSFT(KC_I), LSFT(KC_D), LSFT(KC_H), LSFT(KC_T), LSFT(KC_N), LSFT(KC_S), KC_UNDS, KC_PIPE, KC_ENT,
        KC_LSFT, KC_ESC, KC_DQUO, LSFT(KC_Q), LSFT(KC_J), LSFT(KC_K), LSFT(KC_X), LSFT(KC_B), LSFT(KC_M), LSFT(KC_W), LSFT(KC_V), LSFT(KC_Z), KC_RSFT, XXXXXXX,
        KC_LCTL, MO(4), KC_LALT, C(KC_BSPC), KC_LGUI, KC_SPC, KC_RALT, XXXXXXX, MO(4), KC_RCTL
    ),

    LAYOUT_60_iso_split_rshift(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_UP,   KC_END,  _______, _______, _______,
        _______, _______, _______, _______, KC_PGUP, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS,  _______, _______, _______,
        _______, _______, _______,                 C(KC_DEL), _______, _______,                   _______, _______, _______, _______
    ),

    LAYOUT_60_iso_split_rshift(
        DF(1),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_BRIU, _______, _______, _______, QK_BOOT,
        _______, _______, _______, _______, _______, _______, _______, KC_VOLD, KC_BRID, KC_VOLU, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______
    ),
};
