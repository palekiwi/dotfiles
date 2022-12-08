// Unikeybord / Diverge TM2 but flipped around
// Right Hand                                                                     Left hand
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
//    _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//    _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//    _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
//    _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'

#include QMK_KEYBOARD_H

enum layer_names {
  COLEMAK,
  NAV,     // Navigation
  NUM,     // Numbers
  MOU,     // Mouse layer
  SYM,     // Alternative access to symbols
  MED,     // Punctuation
  FUN,     // Function keys
  LHC,     // Left hand only CHARs
  LHN,     // Left hand only NAV
  HSH,     // special characters
};

// mode tap keys
// LEFT
#define HM_A LALT_T(KC_A)
#define HM_Q LALT_T(KC_Q)
#define HM_R LSFT_T(KC_R)
#define HM_S LCTL_T(KC_S)
#define HM_T LGUI_T(KC_T)

#define HM_Z LT(LHN,KC_Z)
#define HM_D LT(MOU,KC_D)

// Right
#define HM_N RGUI_T(KC_N)
#define HM_E RCTL_T(KC_E)
#define HM_I RSFT_T(KC_I)
#define HM_O RALT_T(KC_O)
#define HM_QUOT RALT_T(KC_QUOT)

#define HM_H LT(SYM,KC_H)
#define HM_DOT LT(LHN,KC_DOT)
#define HM_K LT(NUM,KC_K)

// Thumb Keys
// (RGUI | Tab), (MOU | Escape), (NAV | Space)
#define TK_LI LT(LHC, KC_ESC)
#define TK_LC LT(NAV, KC_SPC)
#define TK_LO LT(MOU, KC_TAB)

// (NUM | Backspace), (SYM | Enter), (FUN | Delete)
#define TK_RO LT(SYM, KC_ENT)
#define TK_RC LT(NUM, KC_BSPC)
#define TK_RI LT(FUN, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[COLEMAK] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
       KC_F15,     KC_J,       KC_L,       KC_U,       KC_Y,      KC_QUOT,           KC_Q,     KC_W,       KC_F,       KC_P,       KC_B,      KC_PSCR,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       KC_VOLU,    KC_M,       HM_N,       HM_E,       HM_I,      HM_O,               HM_A,      HM_R,       HM_S,       HM_T,       KC_G,       KC_F13,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       KC_VOLD,    HM_K,       HM_H,       KC_COMM,    HM_DOT,    KC_SLSH,            HM_Z,      KC_X,       KC_C,       HM_D,       KC_V,       KC_F14,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       TK_RO,     TK_RC,      TK_RI,      TG(HSH),            HM_QUOT,                       HM_Q,           KC_F16,     TK_LI,      TK_LC,      TK_LO
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Main Navigation
[NAV] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    KC_BTN1,    KC_BTN2,    KC_BTN3,    _______,           _______,    _______,    XXXXXXX,    XXXXXXX,   XXXXXXX,     _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_CAPS,    KC_LEFT,    KC_DOWN,    KC_UP,    KC_RIGHT,           KC_LALT,    KC_LSFT,    KC_LCTL,    KC_LGUI,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_INS,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END,            _______,    _______,     _______,    XXXXXXX,   XXXXXXX,    XXXXXXX,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Numbers and arithmetic
[NUM] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,          KC_LBRC,     KC_7,        KC_8,       KC_9,     KC_RBRC,     _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    KC_RGUI,    KC_RCTL,    KC_RSFT,    KC_RALT,           KC_SCLN,     KC_1,        KC_2,       KC_3,     KC_EQL,     _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           KC_GRV,      KC_4,        KC_5,       KC_6,     KC_PLUS,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,   _______,    _______,         QK_BOOT,                       _______,          _______,       KC_DOT,    KC_0,       KC_MINS
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Placeholder. Currently not mouse
[MOU] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    KC_LBRC,    KC_RBRC,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    KC_LPRN,    KC_LCBR,    KC_RCBR,    KC_RPRN,           KC_LALT,    KC_LSFT,    KC_LCTL,    KC_LGUI,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    KC_EQL,     KC_LABK,    KC_RABK,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_UNDS,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[SYM] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,           _______,   KC_EXLM,    KC_PERC,    KC_AT,     _______,    _______,
// |------------+-----------+-----------+-----------+-----------+-------------|    |---------+-----------+-----------+------------+-----------+-----------|
      _______,    _______,    KC_RGUI,    KC_RCTL,    KC_RSFT,    KC_RALT,           KC_CIRC,   KC_AMPR,    KC_COLN,    KC_DLR,     KC_PLUS,    _______,
// |------------+-----------+-----------+-----------+-----------+-------------|    |---------+-----------+-----------+------------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           KC_TILD,   KC_HASH,    KC_BSLS,    KC_ASTR,    KC_PIPE,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    KC_MINS,    KC_UNDS
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Left hand only: mirror of right hand characters
[MED] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_LALT,    KC_LSFT,    KC_LCTL,    KC_LGUI,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[FUN] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
       _______,    _______,    _______,    _______,    _______,    _______,           KC_F10,    KC_F7,      KC_F8,      KC_F9,      _______,    _______,
// |------------+-----------+-----------+-----------+-----------+-------------|    |---------+-----------+-----------+------------+-----------+-----------|
       _______,    _______,    KC_RGUI,    KC_RCTL,    KC_RSFT,    KC_RALT,           KC_F11,    KC_F1,      KC_F2,      KC_F3,      _______,    _______,
// |------------+-----------+-----------+-----------+-----------+-------------|    |---------+-----------+-----------+------------+-----------+-----------|
       _______,    _______,    _______,    _______,    _______,    _______,           KC_F12,    KC_F4,      KC_F5,      KC_F6,      _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Left hand only: navigation
[LHN] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    KC_AGIN,    KC_PSTE,    KC_COPY,   KC_CUT,     KC_UNDO,           _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    _______,
// |-----------+-----------+-----------+-----------+-----------+------------|    |-----------+-----------+-----------+-----------+-----------+------------|
      _______,    _______,  S(C(KC_TAB)), C(KC_TAB),   _______,  _______,           _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_SPC,     _______,
// |-----------+-----------+-----------+-----------+-----------+------------|    |-----------+-----------+-----------+-----------+-----------+------------|
      _______,    _______,    KC_ENT,     KC_BSPC,  _______,    _______,            _______,    KC_BSPC,    KC_DEL,     KC_ENT,     KC_PGDN,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       QK_BOOT,          _______,    _______,    _______,   _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Left hand only: mirror of right hand characters
[LHC] = LAYOUT_ortho_4x12_2x2u(
// ,-----------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,        _______,     KC_Y,       KC_U,       KC_L,       KC_J,      _______,
// |------------+-----------+-----------+-----------+-----------+-----------|    |----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,          KC_O,       KC_I,       KC_E,       KC_N,       KC_M,      _______,
// |------------+-----------+-----------+-----------+-----------+-----------|    |----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,         KC_SLSH,     KC_DOT,    KC_COMM,     KC_H,       KC_K,      _______,
// |-----------+-----------+-----------+-----------+-----------+-----------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                     _______,          _______,    _______,    _______,    _______
// `-----------------------+-----------+-----------+-----------+-----------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[HSH] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      XXXXXXX,    S(KC_H),    KC_4,       KC_AT,     S(KC_Q),    XXXXXXX,           KC_QUOT,    KC_RABK,    KC_CIRC,    KC_PLUS,    KC_RCBR,    XXXXXXX,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      XXXXXXX,    KC_BSLS,    KC_SCLN,    KC_UNDS,    KC_HASH,    S(KC_J),           KC_GRV,     KC_PERC,    KC_DQT,     KC_TILD,    KC_COMM,    XXXXXXX,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      XXXXXXX,    KC_EQL,     KC_7,       KC_LBRC,    KC_LPRN,    KC_COLN,           KC_ASTR,    KC_QUES,    KC_8,       KC_LCBR,    KC_SLSH,    XXXXXXX,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    TG(HSH),          XXXXXXX,                       XXXXXXX,          XXXXXXX,    _______,    KC_AMPR,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    // Prevent accidental activation of Layer 6
    case HM_N:
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_RSFT)) {
                unregister_mods(MOD_BIT(KC_RSFT));
                tap_code(KC_N);
                add_mods(MOD_BIT(KC_RSFT));
                return false;
            }
            if (get_mods() & MOD_BIT(KC_RCTL)) {
                unregister_mods(MOD_BIT(KC_RCTL));
                tap_code(KC_E);
                tap_code(KC_N);
                add_mods(MOD_BIT(KC_RCTL));
                return false;
            }
        }
        return true;

    // Prevent accidenal activation of Left Control
    case HM_T:
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_LCTL)) {
                unregister_mods(MOD_BIT(KC_LCTL));
                tap_code(KC_S);
                tap_code(KC_T);
                add_mods(MOD_BIT(KC_LCTL));
                return false;
            }
        }
        return true;

    case HM_S:
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_LALT)) {
                unregister_mods(MOD_BIT(KC_LALT));
                tap_code(KC_R);
                tap_code(KC_S);
                add_mods(MOD_BIT(KC_LALT));
                return false;
            }
        }
        return true;

    // Prevent activation of Layer 2 on outward roll
    case HM_E:
        //if (record->event.pressed && record->tap.count > 0) {
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_RSFT)) {
                unregister_mods(MOD_BIT(KC_RSFT));
                tap_code(KC_I);
                tap_code(KC_E);
                add_mods(MOD_BIT(KC_RSFT));
                return false;
            }
        }
        return true;

    // Prevent activaction of Layer 3 on outward roll
    case HM_A:
        if (record->event.pressed) {
            if (IS_LAYER_ON(5)) {
                layer_off(5);
                tap_code(KC_R);
                tap_code(KC_A);
                return false;
            }
        }
        return true;

    // Prevent activaction of Layer 4 on outward roll
    case HM_O:
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_RSFT)) {
                unregister_mods(MOD_BIT(KC_RSFT));
                tap_code(KC_I);
                tap_code(KC_O);
                add_mods(MOD_BIT(KC_RSFT));
                return false;
            }
        }
        return true;

    case HM_I:
        if (record->event.pressed && record->tap.count > 0) {
            if (get_mods() & MOD_BIT(KC_RGUI)) {
                unregister_mods(MOD_BIT(KC_RGUI));
                tap_code(KC_N);
                tap_code(KC_I);
                add_mods(MOD_BIT(KC_RGUI));
                return false;
            }
            if (get_mods() & MOD_BIT(KC_RALT)) {
                unregister_mods(MOD_BIT(KC_RALT));
                tap_code(KC_O);
                tap_code(KC_I);
                add_mods(MOD_BIT(KC_RALT));
                return false;
            }
        }
        return true;

    }
    return true;
};
