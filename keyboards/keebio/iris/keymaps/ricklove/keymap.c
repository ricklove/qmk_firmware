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
//                rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
//             }
//          }
//       }
//    }
// }

/**
 * Define lighting layers.
 *
 * Iris rev6a uses WS2812 RGB Matrix lighting.
 * The RGB Matrix lighting option has already been enabled in ../../rev6a/config.h
 * You'll need to add #define SPLIT_LAYER_STATE_ENABLE to config.h if you
 * will be customizing the LED's per key.
 *
 * Here's how to customize the colors per layer and per key:
 * https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md#direct-operation-iddirect-operation
 *
 * If you start getting real weird with it, your likely to exceed the firmware limit of 28672.
 * You may need to selectively disable some effects:
 * https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgb_matrix.md#rgb-matrix-effects-idrgb-matrix-effects
 *
 * There are 68 Leds. Printed on the board itself, the led numbers are 1-68.
 * For color addressing, use 0-67 as the index number.
 * rgb_matrix_set_color(index, r, g, b)

RGB_AZURE
RGB_BLACK
RGB_BLUE
RGB_CHARTREUSE
RGB_CORAL
RGB_CYAN
RGB_GOLD
RGB_GOLDENROD
RGB_GREEN
RGB_MAGENTA
RGB_ORANGE
RGB_PINK
RGB_PURPLE
RGB_RED
RGB_SPRINGGREEN
RGB_TEAL
RGB_TURQUOISE
RGB_WHITE
RGB_YELLOW

 *
 * Here's an LED number guide:
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
   rgb_matrix_set_color(58,RGB_RED);
   rgb_matrix_set_color(12,RGB_GREEN);
   rgb_matrix_set_color(59,RGB_BLUE);
   rgb_matrix_set_color(54,0x22, 0x22, 0x22);
   rgb_matrix_set_color(55,0x22, 0x22, 0x22);
   rgb_matrix_set_color(56,0x22, 0x22, 0x22);
   rgb_matrix_set_color(57,0x22, 0x22, 0x22);

   bool isShift = get_mods() & MOD_MASK_SHIFT;

   if(isShift){
      rgb_matrix_set_color(6,RGB_WHITE);
      rgb_matrix_set_color(7,RGB_WHITE);
      rgb_matrix_set_color(8,RGB_WHITE);
      rgb_matrix_set_color(9,RGB_WHITE);
      rgb_matrix_set_color(10,RGB_WHITE);

      rgb_matrix_set_color(13,RGB_WHITE);
      rgb_matrix_set_color(14,RGB_WHITE);
      rgb_matrix_set_color(15,RGB_WHITE);
      rgb_matrix_set_color(16,RGB_WHITE);
      rgb_matrix_set_color(17,RGB_WHITE);
      
      rgb_matrix_set_color(18,RGB_WHITE);
      rgb_matrix_set_color(19,RGB_WHITE);
      rgb_matrix_set_color(20,RGB_WHITE);
      rgb_matrix_set_color(21,RGB_WHITE);
      rgb_matrix_set_color(22,RGB_WHITE);

      rgb_matrix_set_color(40,RGB_WHITE);
      rgb_matrix_set_color(41,RGB_WHITE);
      rgb_matrix_set_color(42,RGB_WHITE);
      rgb_matrix_set_color(43,RGB_WHITE);
      rgb_matrix_set_color(44,RGB_WHITE);

      rgb_matrix_set_color(48,RGB_WHITE);
      rgb_matrix_set_color(49,RGB_WHITE);
      rgb_matrix_set_color(50,RGB_WHITE);
      rgb_matrix_set_color(51,RGB_WHITE);

      rgb_matrix_set_color(52,RGB_WHITE);
      rgb_matrix_set_color(53,RGB_WHITE);
   }

   for (uint8_t lay = 1; lay <= 3; ++lay) {
      if ((lay > 0 && !IS_LAYER_ON(lay))
         //|| (lay == 0 && !isShift)
      ){
         continue;
      }

      RGB rgb = lay == 1 ? (RGB){RGB_GREEN}
         : lay == 2 ? (RGB){RGB_RED}
         : (RGB){RGB_WHITE}
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
                  //    rgb_matrix_set_color(index,RGB_RED);
                  //    continue;
                  // }
                  if(
                        index == 37
                     || index == 41
                     || index == 43
                     || index == 54
                  ){
                     rgb_matrix_set_color(index,RGB_MAGENTA);
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
                     rgb_matrix_set_color(index,RGB_BLUE);
                     continue;
                  }
                  if(
                        index == 39
                     || index == 52
                     || index == 21
                     || index == 47
                     || index == 48
                  ){
                     rgb_matrix_set_color(index,RGB_ORANGE);
                     continue;
                  }
                  if(
                        index == 18
                     || index == 19
                     || index == 20
                  ){
                     rgb_matrix_set_color(index,RGB_MAGENTA);
                     continue;
                  }
                  if(
                        index == 7
                     || index == 8
                     || index == 9
                  ){
                     rgb_matrix_set_color(index,RGB_SPRINGGREEN);
                     continue;
                  }
                  if(
                        index == 13
                     || index == 17
                  ){
                     rgb_matrix_set_color(index,RGB_GOLD);
                     continue;
                  }
               }

               rgb_matrix_set_color(index, rgb.r, rgb.g, rgb.b);
            }

         }
      }
   }

//   if (IS_LAYER_ON(1)) {
//     /* Upperleft most key red: */
//     rgb_matrix_set_color(0,255,0,0);
//     /* Upperright most front key blue: */
//     rgb_matrix_set_color(0,0,255,0);
//     /* Bottom right on lefthand Green: */
//     rgb_matrix_set_color(0, RGB_GREEN);
//   }
//   else if (IS_LAYER_ON(2)) {
//     /* RGB +/- controls. */
//     rgb_matrix_set_color(35, RGB_RED);
//     rgb_matrix_set_color(34, RGB_BLUE);
//     rgb_matrix_set_color(37, RGB_RED);
//     rgb_matrix_set_color(36, RGB_BLUE);
//     rgb_matrix_set_color(44, RGB_RED);
//     rgb_matrix_set_color(45, RGB_BLUE);
//     rgb_matrix_set_color(47, RGB_RED);
//     rgb_matrix_set_color(46, RGB_BLUE);
//     rgb_matrix_set_color(56, RGB_RED);
//     rgb_matrix_set_color(57, RGB_BLUE);
//     /* RGB Toggle. */
//     rgb_matrix_set_color(00, RGB_PURPLE);
//     /* Move screen left/right. */
//     rgb_matrix_set_color(26, RGB_YELLOW);
//     rgb_matrix_set_color(60, RGB_YELLOW);
//     /* Arrow keys. */
//     rgb_matrix_set_color(50, RGB_PURPLE);
//     rgb_matrix_set_color(49, RGB_PURPLE);
//     rgb_matrix_set_color(48, RGB_PURPLE);
//     rgb_matrix_set_color(42, RGB_PURPLE);
//     /* Mouse movement arrows. */
//     rgb_matrix_set_color(14, RGB_ORANGE);
//     rgb_matrix_set_color(15, RGB_ORANGE);
//     rgb_matrix_set_color(16, RGB_ORANGE);
//     rgb_matrix_set_color(8, RGB_ORANGE);
//     /* Mouse buttons. */
//     rgb_matrix_set_color(41, RGB_ORANGE);
//     rgb_matrix_set_color(43, RGB_ORANGE);
//     /* Mouse acceleration. */
//     rgb_matrix_set_color(01, 200, 165, 0);
//     rgb_matrix_set_color(02, 255, 200, 0);
//     rgb_matrix_set_color(03, 255, 235, 0);
//   }
}