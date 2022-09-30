#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  MACRO02, KC_DEL,  KC_TRNS, KC_MINS, KC_UNDS,                            KC_ENT,  KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_TRNS, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TT(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_BSPC, KC_DEL,  
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_HOME,          KC_END,  KC_N,    KC_M,    KC_LEFT, KC_RGHT, KC_DOWN, KC_UP,                     
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LCTL, KC_SFTENT,                 KC_SPC,  TT(3),   TG(1)   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_PGUP, KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_HOME, KC_UP,   KC_END,  KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_LEFT, KC_DOWN, KC_RGHT, KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,         KC_TRANS,KC_TRANS,KC_TRANS,KC_PGDN, KC_TRANS,KC_TRANS,KC_TRANS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRANS,KC_TRANS,KC_TRANS,                  KC_TRANS,KC_TRANS,KC_TRANS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,         KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRANS,KC_TRANS,KC_TRANS,                  KC_TRANS,KC_TRANS,KC_TRANS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,                           KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,         KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,KC_TRANS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRANS,KC_TRANS,KC_TRANS,                  KC_TRANS,KC_TRANS,KC_TRANS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
