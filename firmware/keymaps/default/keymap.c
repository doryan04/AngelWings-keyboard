#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _RAISE,
    _ADJUST,
};

#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_LOWER KC_LWR
#define KC_RAISE KC_RSE
#define KC_LTOG  RGB_TOG
#define KC_LHUI  RGB_HUI
#define KC_LHUD  RGB_HUD
#define KC_LSAI  RGB_SAI
#define KC_LSAD  RGB_SAD
#define KC_LVAI  RGB_VAI
#define KC_LVAD  RGB_VAD
#define KC_LMOD  RGB_MOD
#define KC_LWR MO(_LOWER)
#define KC_RSE MO(_RAISE)
#define BSL_RAL MT(MOD_RALT, KC_BSLS)
#define BSP_LSH MT(MOD_LSFT, KC_BSPC)
#define SPC_RSH MT(MOD_RSFT, KC_SPC)
#define DEL_RSE LT(_RAISE, KC_DEL)
#define TAB_RSE LT(_RAISE, KC_TAB)
#define GUI_LWR LT(_LOWER, KC_LGUI)
#define ENT_LWR LT(_LOWER, KC_ENT)
#define PUP_ADJ LT(_ADJUST, KC_PGUP)
#define PDN_ADJ LT(_ADJUST, KC_PGDN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_3x7(
    KC_ESC,  KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC,         KC_RBRC,
    KC_PGUP, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, RCTL_T(KC_QUOT), KC_PGDN,
             KC_LALT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, BSL_RAL,
                                        DEL_RSE, BSP_LSH, GUI_LWR,      ENT_LWR, SPC_RSH, TAB_RSE
    ),

    [_LOWER] = LAYOUT_3x7(
    KC_MUTE, KC_UNDS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,
    _______, KC_PPLS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_EQL,  _______,
             KC_PMNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
                                        _______, _______, _______,      _______, _______, _______
    ),

    [_RAISE] = LAYOUT_3x7(
    _______, KC_NLCK, KC_PSLS, KC_P7,   KC_P8,   KC_P9,   KC_PMNS,      _______, KC_END,  KC_HOME,   KC_PSCR, KC_SLCK, KC_CAPS, _______,
    KC_VOLU, KC_PEQL, KC_PAST, KC_P4,   KC_P5,   KC_P6,   KC_PPLS,      _______, KC_LEFT, KC_UP,     KC_RGHT, KC_INS,  KC_APP,  KC_VOLD,
             _______, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_PCMM,      _______, KC_END,  KC_DOWN,   KC_PGDN, KC_PAUS, _______,
                                        _______, _______, _______,      _______, _______, _______
    ),
    [_ADJUST] = LAYOUT_3x7(
    _______,  _______, KC_ASUP, KC_ASTG, KC_ASDN, _______, _______,      KC_WH_U, KC_BTN1, KC_ACL1, KC_BTN2, _______, _______, _______,
    _______,  RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______,      KC_WH_D, KC_MS_L, KC_MS_U, KC_MS_R, _______, _______, _______,
              RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______,      _______, KC_ACL0, KC_MS_D, KC_ACL2, _______, _______,
                                         _______, _______, _______,      _______, _______, _______
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}