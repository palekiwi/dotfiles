// Unikeybord / Diverge TM2
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
  NAV,     // 1: Navigation
  NUM,     // 2: Numbers
  PRG,     // 3: Programming
  SPC,     // 4: Special characters
  FUN,     // 5: Function keys
  PNC,     // 6: Punctuation
  LHN,     // 7: Left hand only NAV
  LHC,     // 8: Left hand only CHARs
};

// custom key to toggle NUM layer for switch statement
enum custom_keycodes {
  T_NUM = SAFE_RANGE
};

// mode tap keys
#define HM_A LSFT_T(KC_A)
#define HM_R LT(3,KC_R)
#define HM_S LCTL_T(KC_S)
#define HM_T LT(1,KC_T)

#define HM_Z LT(7,KC_Z)
#define HM_X LALT_T(KC_X)

#define HM_N LT(2,KC_N)
#define HM_E RCTL_T(KC_E)
#define HM_I LT(4,KC_I)
#define HM_O RSFT_T(KC_O)

#define HM_U LT(6,KC_U)
#define HM_DOT RALT_T(KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
       KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,      XXXXXXX,           QK_BOOT,    KC_J,       KC_L,       HM_U,       KC_Y,      KC_CAPS,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       HM_A,       HM_R,       HM_S,       HM_T,       KC_G,      T_NUM,             XXXXXXX,    KC_K,       HM_N,      HM_E,         HM_I,       HM_O,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       HM_Z,       HM_X,       KC_C,       KC_D,       KC_V,      XXXXXXX,           XXXXXXX,    KC_M,       KC_H,     KC_SLSH,      HM_DOT,     KC_COMM,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      OSL(5),     XXXXXXX,    XXXXXXX,  LGUI_T(KC_ESC),     KC_SPC,                       KC_SPC,        LT(9,KC_TAB),   XXXXXXX,    XXXXXXX,    XXXXXXX
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Main Navigation
[1] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    KC_HOME,     KC_UP,     KC_END,     _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    KC_VOLU,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    KC_VOLD,    KC_PGUP,    KC_ENT,     KC_PGDN,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Numbers and arithmetic
[2] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,     KC_4,        KC_5,       KC_6,     KC_EQL,     _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_PLUS,     KC_1,        KC_2,       KC_3,     KC_DOT,     _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_UNDS,     KC_7,        KC_8,       KC_9,     KC_MINS,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,      KC_0,           _______,                       _______,          _______,    _______,   _______,     _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Programming characters
[3] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    _______,    KC_LBRC,    KC_RBRC,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    KC_LPRN,    KC_LCBR,    KC_RCBR,    KC_RPRN,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,    _______,    _______,           _______,    _______,    KC_EQL,     KC_LABK,    KC_RABK,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Special characters
[4] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    KC_CIRC,    KC_PERC,    KC_DLR,     _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_QUES,    KC_EXLM,    KC_AT,      KC_HASH,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_PLUS,    KC_AMPR,    KC_ASTR,    KC_MINS,    KC_EQL,     _______,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Function keys
[5] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    KC_F4,      KC_F5,      KC_F6,      KC_F10,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+----------+--------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_F1,      KC_F2,      KC_F3,      KC_F11,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+----------+--------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_F7,      KC_F8,      KC_F9,      KC_F12,    _______,            _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Punctuation
[6] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    KC_PIPE,    KC_DQUO,    KC_GRV,     _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_SCLN,    KC_QUOT,    KC_COLN,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_TILD,    KC_BSLS,    KC_COMM,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Left hand only: navigation
[7] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    KC_HOME,    KC_UP,      KC_END,     KC_PGUP,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_SPC,     _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    KC_BSPC,    KC_DEL,     KC_ENT,     KC_PGDN,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      QK_BOOT,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),

// Left hand only: mirror of right hand characters
[8] = LAYOUT_ortho_4x12_2x2u(
// ,-----------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,     KC_Y,       KC_U,       KC_L,       KC_J,      _______,         _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-----------|    |-----------+-----------+-----------+-----------+-----------+-----------|
       KC_O,       KC_I,       KC_E,       KC_N,       KC_K,      _______,         _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-----------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      KC_COMM,     KC_DOT,    KC_SLSH,     KC_H,       KC_M,      _______,         _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-----------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                     _______,          _______,    _______,    _______,    _______
// `-----------------------+-----------+-----------+-----------+-----------'    `-----------------------+-----------+-----------+-----------+-----------'
),

[9] = LAYOUT_ortho_4x12_2x2u(
// ,-------------------------------------------------------------------------.    ,-----------------------------------------------------------------------.
      _______,    _______,    KC_COLN,    _______,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    KC_DEL,     KC_ESC,     _______,    _______,           _______,    _______,    KC_ENT,    KC_BSPC,     _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    KC_EXLM,    _______,    _______,           _______,    _______,    _______,    _______,    _______,    _______,
// |-----------+-----------+-----------+-----------+-----------+-------------|    |-----------+-----------+-----------+-----------+-----------+-----------|
      _______,    _______,    _______,    _______,          _______,                       _______,          _______,    _______,    _______,    _______
// `-----------+-----------+-----------+-----------+-------------------------'    `-----------------------+-----------+-----------+-----------+-----------'
),
};

void toggle_num_layer(void);

void toggle_num_layer() {
  if (IS_LAYER_ON(NUM)) {
    // turn off the layer
    layer_off(NUM);

    // send f18
    SEND_STRING(SS_TAP(X_F18));
  } else {
    // turn layer on
    layer_on(NUM);

    // send f17
    SEND_STRING(SS_TAP(X_F17));
  }
}


// SHIFT + BACKSPACE = DELETE
// Initialize variable holding the binary
// representation of active modifiers.
uint8_t mod_state;
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();
    switch (keycode) {

      case T_NUM:
        if (record->event.pressed) toggle_num_layer();

        return false;

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

    // Prevent accidental activation of Layer 6
    case LT(2,KC_N):
        if (record->event.pressed && record->tap.count > 0) {
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
    case LT(1,KC_T):
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

    case LCTL_T(KC_S):
        if (record->event.pressed) {
            // Prevent activation of Layer 1 on outward roll
            if (IS_LAYER_ON(1)) {
                layer_off(1);
                tap_code(KC_T);
                tap_code(KC_S);
                return false;
            }
            // Prevent activaction of Layer 3 on inward roll
            if (IS_LAYER_ON(3)) {
                layer_off(3);
                tap_code(KC_R);
                tap_code(KC_S);
                return false;
            }
        }
        return true;

    // Prevent activation of Layer 2 on outward roll
    case RCTL_T(KC_E):
        if (record->event.pressed) {
            if (IS_LAYER_ON(2)) {
                layer_off(2);
                tap_code(KC_N);
                tap_code(KC_E);
                return false;
            }

            // Prevent activaction of Layer 4 on inward roll
            if (IS_LAYER_ON(4)) {
                layer_off(4);
                tap_code(KC_I);
                tap_code(KC_E);
                return false;
            }
        }
        return true;

    // Prevent activaction of Layer 3 on outward roll
    case KC_A:
        if (record->event.pressed) {
            if (IS_LAYER_ON(3)) {
                layer_off(3);
                tap_code(KC_R);
                tap_code(KC_A);
                return false;
            }
        }
        return true;

    // Prevent activaction of Layer 4 on outward roll
    case RSFT_T(KC_O):
        if (record->event.pressed) {
            if (IS_LAYER_ON(4)) {
                layer_off(4);
                tap_code(KC_I);
                tap_code(KC_O);
                return false;
            }
        }
        return true;

    case LT(4,KC_I):
        if (record->event.pressed) {
            // Prevent activaction of Layer 2 on jump from n to i
            if (IS_LAYER_ON(2)) {
                layer_off(2);
                tap_code(KC_N);
                tap_code(KC_I);
                return false;
            }
            // Prevent activaction of Right Control
            if (get_mods() & MOD_BIT(KC_RCTL)) {
                unregister_mods(MOD_BIT(KC_RCTL));
                tap_code(KC_E);
                tap_code(KC_I);
                add_mods(MOD_BIT(KC_RCTL));
                return false;
            }
        }
        return true;

    }
    return true;
};

bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
  if(IS_RETRO(keycode)) return true;
  return false;
}

//const uint16_t PROGMEM test_combo1[] = {KC_A, KC_B, COMBO_END};
//combo_t key_combos[COMBO_COUNT] = {
//    COMBO(test_combo1, KC_ESC),
//};
