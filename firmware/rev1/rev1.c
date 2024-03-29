#include "rev1.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = { 
    {
        {  23,  19,  18,  13,  12,  5,  4 },
        {  22,  20,  17,  14,  11,  6,  3 },
        {  NO_LED,  21,  16,  15,  10,  7,  2 },
        {  NO_LED,  NO_LED,  NO_LED,  NO_LED,   9,  8,  1 },
        {  46,  42,  41,  36,  35,  28,  27 },
        {  45,  43,  40,  37,  34,  29,  26 },
        {  NO_LED,  44,  39,  38,  33,  30,  25 },
        {  NO_LED,  NO_LED,  NO_LED,  NO_LED,  32,  31,  24 },
    },
    {
        { 110, 63 }, { 102, 46 }, { 102, 25 }, { 102, 4 }, { 85, 2 }, { 85, 23 }, { 85, 44 },
        { 98, 63 }, { 76, 63 }, { 68, 42 }, { 68, 21 }, { 68, 0 }, { 51, 5 }, { 51, 26 },
        { 51, 47 }, { 34, 54 }, { 34, 33 }, { 34, 12 }, { 17, 15 }, { 17, 36 }, { 17, 57 },
        { 0, 51 }, { 0, 30 }, { 120, 63 }, { 128, 46 }, { 128, 25 }, { 128, 4 }, { 145, 2 },
        { 145, 23 }, { 145, 44 }, { 132, 63 }, { 162, 63 }, { 162, 42 }, { 162, 21 }, { 162, 0 },
        { 179, 5 }, { 179, 26 }, { 179, 47 }, { 196, 54 }, { 196, 33 }, { 196, 12 }, { 213, 15 },
        { 213, 36 }, { 213, 57 }, { 230, 51 }, { 230, 30 }
    }, 
    {
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4, 4, 4, 4, 
        4, 4, 4, 4,
    }
};

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}
#endif