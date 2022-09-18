#include QMK_KEYBOARD_H

#define _______ KC_TRANSPARENT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_3x7(
    KC_ESC,  KC_GRV,  KC_Q,    KC_W,    KC_E,          KC_R,            KC_T,               KC_Y,          KC_U,           KC_I,    KC_O,   KC_P,    KC_LBRC,         KC_RBRC,
    KC_PGUP, KC_LCTL, KC_A,    KC_S,    KC_D,          KC_F,            KC_G,               KC_H,          KC_J,           KC_K,    KC_L,   KC_SCLN, RCTL_T(KC_QUOT), KC_PGDN,
             KC_LALT, KC_Z,    KC_X,    KC_C,          KC_V,            KC_B,               KC_N,          KC_M,           KC_COMM, KC_DOT, KC_SLSH, MT(MOD_RALT, KC_BSLS),
                                        LT(2, KC_DEL), MT(MOD_LSFT, KC_BSPC), LT(1, KC_LGUI),     LT(1, KC_ENT), MT(MOD_RSFT, KC_SPC), LT(2, KC_TAB)
    ),

    [1] = LAYOUT_3x7(
    _______, KC_UNDS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,
    _______, KC_PPLS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_EQL,  _______,
             KC_PMNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
                                        MO(3)  , _______, _______,      _______, _______, MO(3)
    ),

    [2] = LAYOUT_3x7(
    KC_MUTE, KC_NLCK, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      _______, KC_HOME, KC_PSCR, KC_PAUS, KC_SLCK, KC_CAPS, KC_END,
    KC_VOLU, KC_PEQL, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      _______, KC_LEFT, KC_UP,   KC_RGHT, KC_INS,  MT(MOD_RCTL, KC_APP), KC_VOLD,
             _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      _______, KC_END, KC_DOWN, _______, _______, _______,
                                        _______, _______, MO(3)  ,      MO(3)  , _______, _______
    ),
    [3] = LAYOUT_3x7(
    _______,  _______, KC_ASUP, KC_ASTG, KC_ASDN, _______,  _______,       KC_WH_U, KC_BTN1, KC_ACL1, KC_BTN2, _______, _______, _______,
    _______,  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,  _______,       KC_WH_D, KC_MS_L, KC_MS_U, KC_MS_R, _______, _______, _______,
              RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,  _______,       _______, KC_ACL0, KC_MS_D, KC_ACL2, _______, _______,
                                         _______, _______,  _______,       _______, _______, _______
    ),
};