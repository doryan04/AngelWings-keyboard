#pragma once

#define USE_SERIAL
#define SOFT_SERIAL_PIN D3
#define RGB_DI_PIN D2

#ifdef RGBLIGHT_ENABLE
#    undef RGBLED_NUM
#    define RGBLIGHT_ANIMATIONS
#    define RGBLED_NUM 54
#    define RGBLED_SPLIT \
        { 23, 23 }
#    define RGBLIGHT_SPLIT
#    define RGBLIGHT_LIMIT_VAL 130
#    define RGBLIGHT_HUE_STEP  10
#    define RGBLIGHT_SAT_STEP  17
#    define RGBLIGHT_VAL_STEP  17
#    define SPLIT_TRANSPORT_MIRROR
#endif

#define DIODE_DIRECTION COL2ROW

