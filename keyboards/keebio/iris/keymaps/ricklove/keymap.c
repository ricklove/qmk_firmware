#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_layer {
    _MAIN,
    _FN1,
    _FN2,
    _FN3,
};

enum custom_keycodes {
   // vscode command 
   RICK00 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  RICK00, KC_DEL,  KC_TRNS, KC_MINS, KC_UNDS,                            KC_ENT,  KC_ESC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, 
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

  [_FN1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, KC_PGUP, _______, _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_HOME, KC_UP,   KC_END,  _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, KC_PGDN, _______, _______, _______, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, KC_F4,   KC_F8,   KC_F12,  _______,                            _______, KC_7,    KC_8,    KC_9,    _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F3,   KC_F7,   KC_F11,  _______,                            _______, KC_4,    KC_5,    KC_6,    _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F2,   KC_F6,   KC_F10,  _______,                            _______, KC_1,    KC_2,    KC_3,    _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_F1,   KC_F5,   KC_F9,   _______, _______,          _______, _______, KC_0,    _______, _______, _______, _______, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN3] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_LBRC, KC_RBRC, _______, _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_DQUO, KC_QUOT, KC_GRV,  KC_QUES,                            KC_PMNS, KC_LCBR, KC_RCBR, _______, _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_COLN, KC_SCLN, KC_COMM, KC_DOT,  KC_EQL,                             KC_PPLS, KC_LPRN, KC_RPRN, KC_SLSH, KC_BSLS, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_TILD, KC_AMPR, KC_PIPE, KC_EXLM, _______,          _______, KC_PAST, KC_LT,   KC_GT,   _______, _______, _______, 
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
   switch (keycode) {
      case RICK00:
         if (record->event.pressed) {
               // when keycode QMKBEST is pressed
               SEND_STRING(SS_LCTL(SS_LCTL("p")));
         } else {
               // when keycode QMKBEST is released
         }
         break;
      // case _MAIN:
      //    if (record->event.pressed) {
      //       set_single_persistent_default_layer(_QWERTY);
      //    }
      //    return false;
      //    break;
      // case _FN1:
      //    if (record->event.pressed) {
      //       layer_on(_LOWER);
      //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
      //    } else {
      //       layer_off(_LOWER);
      //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
      //    }
      //    return false;
      //    break;
      // case _FN2:
      //    if (record->event.pressed) {
      //       layer_on(_RAISE);
      //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
      //    } else {
      //       layer_off(_RAISE);
      //       update_tri_layer(_LOWER, _RAISE, _ADJUST);
      //    }
      //    return false;
      //    break;
      // case _FN3:
      //    if (record->event.pressed) {
      //       layer_on(_ADJUST);
      //    } else {
      //       layer_off(_ADJUST);
      //    }
      //    return false;
      //    break;
  }
  return true;
}


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_MAIN] = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN1]  = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN2]  = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN3]  = { ENCODER_CCW_CW(KC_DOWN, KC_UP), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
};
#endif

void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
   HSV hsv1 = {  0, 255, 255};
   HSV hsv2 = { 80, 255, 255};
   HSV hsv3 = {160, 255, 255};

   for (uint8_t lay = 1; lay <= 3; ++lay) {
      if(!IS_LAYER_ON(lay)){
         continue;
      }

      HSV hsv = lay == 1 ? hsv1
         : lay == 2 ? hsv2
         : hsv3;

      if (hsv.v > rgb_matrix_get_val()) { hsv.v = rgb_matrix_get_val(); }
      RGB rgb = hsv_to_rgb(hsv);

      for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
         for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index >= led_min && index <= led_max && index != NO_LED
               && keymap_key_to_keycode(lay, (keypos_t){col,row}) > KC_TRNS
            ){
               rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
            }
         }
      }
   }
}