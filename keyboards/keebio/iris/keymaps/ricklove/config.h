#pragma once

/* If you're setting colors per key, this is required. */
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE

#define TAPPING_TOGGLE 2

#define AUTO_SHIFT_TIMEOUT 180
#define NO_AUTO_SHIFT_SPECIAL
#define NO_AUTO_SHIFT_NUMERIC

// Sets the default mode, if none has been set (reset EEPROM)
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_CROSS 
#define RGB_MATRIX_STARTUP_HUE 170 // Sets the default hue value, if none has been set
#define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
// #define RGB_MATRIX_STARTUP_VAL 100 // Sets the default brightness value, if none has been set