// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,          KC_Q,     KC_W,     KC_E,     KC_R,    KC_T,      KC_Y,     KC_U,     KC_I,    KC_O,      KC_P,     KC_MINS,  KC_BSPC,
        LCTL_T(KC_TAB),  KC_A,     KC_S,     KC_D,     KC_F,    KC_G,      KC_H,     KC_J,     KC_K,    KC_L,      KC_SCLN,            KC_ENT,
        KC_LSFT,                   KC_Z,     KC_X,     KC_C,    KC_V,      KC_B,     KC_N,     KC_M,    KC_COMM,   KC_DOT,   KC_UP,    RSFT_T(KC_SLSH),
        LCTL_T(KC_DEL),  KC_LGUI,  KC_LALT,  LT(1,KC_SPC),                 RSFT_T(KC_SPC),     LT(2,KC_RALT),      KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [1] = LAYOUT(
        KC_GRV,          KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,     KC_F6,    KC_F7,    KC_F8,   KC_F9,     KC_F10,   KC_F11,   KC_F12,
        KC_TRNS,         KC_1,     KC_2,     KC_3,     KC_4,    KC_5,      KC_6,     KC_7,     KC_8,    KC_9,      KC_0,               KC_EQL,
        KC_TRNS,                   KC_APP,   KC_BSLS,  KC_NO,   KC_NO,     KC_LBRC,  KC_RBRC,  KC_QUOT, KC_TRNS,   KC_TRNS,  KC_PGUP,  KC_TRNS,
        KC_INS,          KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,            KC_NO,              KC_HOME,  KC_PGDN,  KC_END
    ),
    [2] = LAYOUT(
        KC_NO,           RGB_TOG,  RGB_HUI,  RGB_SAI,  RGB_VAI, KC_NO,     KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_PSCR,  KC_SCRL,  KC_PAUS,
        KC_CAPS,         RGB_MOD,  RGB_HUD,  RGB_SAD,  RGB_VAD, KC_NO,     KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO,              KC_NO,
        KC_TRNS,                   KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO,    KC_NO,    KC_NO,   KC_NO,     KC_NO,    KC_NO,    KC_NO,
        KC_LCTL,         KC_TRNS,  KC_TRNS,  KC_NO,                        KC_TRNS,            KC_TRNS,            KC_NO,    KC_NO,    KC_NO
    ),
    [3] = LAYOUT(
        KC_NO,           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,           KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,              KC_NO,
        KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
        KC_NO,           KC_NO,    KC_NO,    KC_NO,                        KC_NO,              KC_NO,              KC_NO,    KC_NO,    KC_NO
    )
};
