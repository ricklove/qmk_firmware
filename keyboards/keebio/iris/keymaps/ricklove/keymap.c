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
     KC_ESC,  KC_BSPC,  KC_DEL, KC_SPC,  KC_MINS, KC_UNDS,                            KC_ESC,  _______, KC_PSCR, _______, KC_HOME,  KC_END, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TT(2),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_UP,   KC_DEL, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    RICK00,           KC_ENT,  KC_N,    KC_M,    KC_DOT,  KC_LEFT, KC_DOWN, KC_RGHT,                     
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LALT, KC_LCTL, KC_SFTENT,                 KC_SPC,  TT(3),   TT(1)   
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FN1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, KC_7,    KC_8,    KC_9,    _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_4,    KC_5,    KC_6,    _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, KC_1,    KC_2,    KC_3,    KC_PGUP, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_0,    _______, KC_HOME, KC_PGDN, KC_END, 
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
     _______, _______, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_QUES, KC_LT,   KC_SLSH, KC_GT,   _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_CIRC, KC_SLSH, KC_PMNS, KC_PPLS, KC_PAST,                            KC_COLN, KC_LPRN, KC_RPRN, KC_EQL,  KC_BSLS, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_DQUO, KC_QUOT, KC_GRV,  _______,                             KC_COMM, KC_LCBR, KC_RCBR, KC_SCLN, _______, _______, 
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, KC_TILD, KC_AMPR, KC_PIPE, KC_EXLM, _______,          _______, KC_LBRC, KC_RBRC, _______, _______, _______, _______, 
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
    [_MAIN] = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN1]  = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN2]  = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
    [_FN3]  = { ENCODER_CCW_CW(KC_UP, KC_DOWN), ENCODER_CCW_CW(KC_LEFT, KC_RGHT) },
};
#endif

void setColor(uint8_t i, uint8_t h, uint8_t s, uint8_t v) {
   HSV hsv = {h,s,v};

   if (hsv.v > rgb_matrix_get_val()) { hsv.v = rgb_matrix_get_val(); }
   RGB rgb = hsv_to_rgb(hsv);

   rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
}
 
// void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
//    HSV hsv1 = {  0, 255, 255};
//    HSV hsv2 = { 80, 255, 255};
//    HSV hsv3 = {160, 255, 255};

//    for (uint8_t lay = 1; lay <= 3; ++lay) {
//       if(!IS_LAYER_ON(lay)){
//          continue;
//       }

//       HSV hsv = lay == 1 ? hsv1
//          : lay == 2 ? hsv2
//          : hsv3;

//       if (hsv.v > rgb_matrix_get_val()) { hsv.v = rgb_matrix_get_val(); }
//       RGB rgb = hsv_to_rgb(hsv);

//       for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
//          for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
//             uint8_t index = g_led_config.matrix_co[row][col];

//             if (index >= led_min && index <= led_max && index != NO_LED
//                && keymap_key_to_keycode(lay, (keypos_t){col,row}) > KC_TRNS
//             ){
//                setColor(index, rgb.r, rgb.g, rgb.b);
//             }
//          }
//       }
//    }
// }

/**
 * Define lighting layers.

HSV_AZURE
HSV_BLACK
HSV_BLUE
HSV_CHARTREUSE
HSV_CORAL
HSV_CYAN
HSV_GOLD
HSV_GOLDENROD
HSV_GREEN
HSV_MAGENTA
HSV_ORANGE
HSV_PINK
HSV_PURPLE
HSV_RED
HSV_SPRINGGREEN
HSV_TEAL
HSV_TURQUOISE
HSV_WHITE
HSV_YELLOW

 * FRONT
 * Left Hand                    Right Hand
 * |00|01|02|03|04|05|          |39|38|37|36|35|34|
 * |11|10|09|08|07|06|          |40|41|42|43|44|45|
 * |12|13|14|15|16|17|          |51|50|49|48|47|46|
 * |23|22|21|20|19|18|27|    |61|52|53|54|55|56|57|
 *             |24|25|26|    |60|59|58|
 * REVERSE
 * Right Hand                   Left Hand
 * |65|--|--|66|--|67|          |33|--|32|--|--|31|
 * |--|--|--|--|--|--|          |--|--|--|--|--|--|
 * |--|--|--|--|--|--|          |--|--|--|--|--|--|
 * |64|--|--|63|--|--|--|    |--|--|--|29|--|--|30|
 *             |--|62|--|    |--|28|--|
 */
void rgb_matrix_indicators_user(void) {
   setColor(58,HSV_RED);
   setColor(12,HSV_GREEN);
   setColor(59,HSV_BLUE);
   setColor(54, 0, 0, 10);
   setColor(55, 0, 0, 10);
   setColor(56, 0, 0, 10);
   setColor(57, 0, 0, 10);

   // bool isShift = get_mods() & MOD_MASK_SHIFT;

   // if(isShift){
   //    setColor(6,HSV_WHITE);
   //    setColor(7,HSV_WHITE);
   //    setColor(8,HSV_WHITE);
   //    setColor(9,HSV_WHITE);
   //    setColor(10,HSV_WHITE);

   //    setColor(13,HSV_WHITE);
   //    setColor(14,HSV_WHITE);
   //    setColor(15,HSV_WHITE);
   //    setColor(16,HSV_WHITE);
   //    setColor(17,HSV_WHITE);
      
   //    setColor(18,HSV_WHITE);
   //    setColor(19,HSV_WHITE);
   //    setColor(20,HSV_WHITE);
   //    setColor(21,HSV_WHITE);
   //    setColor(22,HSV_WHITE);

   //    setColor(40,HSV_WHITE);
   //    setColor(41,HSV_WHITE);
   //    setColor(42,HSV_WHITE);
   //    setColor(43,HSV_WHITE);
   //    setColor(44,HSV_WHITE);

   //    setColor(48,HSV_WHITE);
   //    setColor(49,HSV_WHITE);
   //    setColor(50,HSV_WHITE);
   //    setColor(51,HSV_WHITE);

   //    setColor(52,HSV_WHITE);
   //    setColor(53,HSV_WHITE);
   // }

   for (uint8_t lay = 1; lay <= 3; ++lay) {
      if ((lay > 0 && !IS_LAYER_ON(lay))
         //|| (lay == 0 && !isShift)
      ){
         continue;
      }

      HSV hsvDefault = lay == 1 ? (HSV){HSV_RED}
         : lay == 2 ? (HSV){HSV_GREEN}
         : (HSV){HSV_WHITE}
         ;

      for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
         for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
            uint8_t index = g_led_config.matrix_co[row][col];

            if (index != NO_LED
               && keymap_key_to_keycode(lay, (keypos_t){col,row}) > KC_TRNS
            ){
               // Custom colors
               if (lay == 1){
                  // if(
                  //       index == 42
                  //    || index == 50
                  //    || index == 49
                  //    || index == 48
                  // ){
                  //    setColor(index,HSV_RED);
                  //    continue;
                  // }
                  if(
                        index == 37
                     || index == 41
                     || index == 43
                     || index == 54
                  ){
                     setColor(index,HSV_MAGENTA);
                     continue;
                  }
               }

               if (lay == 3){
                  if(
                        index == 38
                     || index == 41
                     || index == 50
                     || index == 53
                     || index == 37
                     || index == 42
                     || index == 49
                     || index == 54
                     || index == 4
                  ){
                     setColor(index,HSV_BLUE);
                     continue;
                  }
                  if(
                        index == 39
                     || index == 52
                     || index == 21
                     || index == 47
                     || index == 48
                  ){
                     setColor(index,HSV_ORANGE);
                     continue;
                  }
                  if(
                        index == 18
                     || index == 19
                     || index == 20
                  ){
                     setColor(index,HSV_MAGENTA);
                     continue;
                  }
                  if(
                        index == 7
                     || index == 8
                     || index == 9
                  ){
                     setColor(index,HSV_SPRINGGREEN);
                     continue;
                  }
                  if(
                        index == 13
                     || index == 17
                  ){
                     setColor(index,HSV_GOLD);
                     continue;
                  }
               }

               setColor(index, hsvDefault.h, hsvDefault.s, hsvDefault.v);
            }

         }
      }
   }

}