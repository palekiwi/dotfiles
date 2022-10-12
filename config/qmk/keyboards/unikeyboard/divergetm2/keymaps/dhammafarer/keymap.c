// Unikeybord / Diverge TM2
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
//   _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//   _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//   _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//   _______,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'

#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layer_names {
    _COLEMAK,
    NAVIGATION,
    NUMBERS,
    PUNCTUATION,
    SPECIAL,
    FUNCTIONS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_COLEMAK] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     KC_TAB,     KC_Z,       KC_W,       KC_F,       KC_P,       KC_B,              KC_J,       KC_L,       KC_U,       KC_Y,       KC_Q,       KC_BSPC,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_LGUI,    KC_A,       KC_R,       KC_S,       KC_T,       KC_G,              KC_K,       KC_N,       KC_E,       KC_I,       KC_O,       KC_ENT,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_LSFT,    MO(1),      KC_X,       KC_C,       KC_D,       KC_V,              KC_M,       KC_H,  LT(3,KC_SLSH), LT(4,KC_DOT), LT(5,KC_COMM), KC_RSFT,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_LALT,    KC_ESC,     KC_LALT,    KC_ESC,     KC_LCTL,                       LT(2,KC_SPC),        KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[1] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,           _______,    KC_AMPR,    KC_LBRC,    KC_RBRC,    KC_RPRN,    KC_BSPC,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_SPC,            _______,    KC_LPRN,    KC_LCBR,    KC_RCBR,    KC_RPRN,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_BSPC,    KC_DEL,     KC_ENT,     KC_PGDN,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     QK_BOOT,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[2] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    KC_MENU,    KC_4,       KC_5,       KC_6,       KC_EQL,            _______,    KC_HOME,    KC_UP,      KC_END,     _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    KC_0,       KC_1,       KC_2,       KC_3,       KC_DOT,            _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    KC_UNDS,    KC_7,       KC_8,       KC_9,       KC_MINS,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[3] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    _______,    KC_PIPE,    KC_GRV,     KC_TILD,    _______,           _______,    KC_END,     KC_UP,      KC_HOME,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    KC_EXLM,    KC_SCLN,    KC_DQT,     KC_COLN,    KC_PERC,           _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_RBRC,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_BSLS,    KC_COMM,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[4] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    KC_QUES,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_PLUS,    KC_MINS,           _______,    S(C(KC_TAB)), C(KC_TAB), _______,   _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[5] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    _______,    KC_F4,      KC_F5,      KC_F6,      KC_F10,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F11,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_F7,      KC_F8,      KC_F9,      KC_F12,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    _______,    _______,    _______,                       _______,                _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

};
