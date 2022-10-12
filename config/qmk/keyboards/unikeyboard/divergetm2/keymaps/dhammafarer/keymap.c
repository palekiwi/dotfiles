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

//enum layer_names {};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     KC_DEL,     KC_Z,       KC_W,       KC_F,       KC_P,       KC_B,              KC_J,       KC_L,       KC_U,       KC_Y,       KC_Q,       XXXXXXX,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_BSPC,    KC_A,    LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,           KC_K,   RSFT_T(KC_N), RCTL_T(KC_E), LALT_T(KC_I), KC_O,     KC_ENT,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_F13,    LT(1, KC_ESC), KC_X,    KC_C,       KC_D,       KC_V,               KC_M,       KC_H, LT(3,KC_SLSH), LT(4,KC_DOT), LT(5,KC_COMM), KC_QUOT,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     KC_PSCR,    OSL(5),    XXXXXXX,    KC_PAUS,    LGUI_T(KC_TAB),                 LT(2,KC_SPC),           KC_CAPS,    KC_VOLD,    KC_VOLU,    XXXXXXX
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[1] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
     _______,    _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,           _______,    KC_AMPR,    KC_LBRC,    KC_RBRC,    KC_RPRN,    KC_BSPC,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_SPC,            _______,    KC_LPRN,    KC_LCBR,    KC_RCBR,    KC_RPRN,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
     _______,    _______,    KC_COPY,    KC_PSTE,    KC_ENT,     KC_PGDN,           _______,    _______,    _______,    _______,    _______,    _______,
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

// SHIFT + BACKSPACE = DELETE
// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Store the current modifier state in the variable for later reference
    mod_state = get_mods();
    switch (keycode) {

    case KC_BSPC:
        {
        // Initialize a boolean variable that keeps track
        // of the delete key status: registered or not?
        static bool delkey_registered;
        if (record->event.pressed) {
            // Detect the activation of either shift keys
            if (mod_state & MOD_MASK_SHIFT) {
                // First temporarily canceling both shifts so that
                // shift isn't applied to the KC_DEL keycode
                del_mods(MOD_MASK_SHIFT);
                register_code(KC_DEL);
                // Update the boolean variable to reflect the status of KC_DEL
                delkey_registered = true;
                // Reapplying modifier state so that the held shift key(s)
                // still work even after having tapped the Backspace/Delete key.
                set_mods(mod_state);
                return false;
            }
        } else { // on release of KC_BSPC
            // In case KC_DEL is still being sent even after the release of KC_BSPC
            if (delkey_registered) {
                unregister_code(KC_DEL);
                delkey_registered = false;
                return false;
            }
        }
        // Let QMK process the KC_BSPC keycode as usual outside of shift
        return true;
    }

    }
    return true;
};