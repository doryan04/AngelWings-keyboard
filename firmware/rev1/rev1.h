#pragma once 

#include "quantum.h"

#include "angelwings.h"

#define XXX KC_NO

#define LAYOUT(\
    L01, L02, L03, L04, L05, L06,   R00, R01, R02, R03, R04, R05, \
    L11, L12, L13, L14, L15, L16,   R10, R11, R12, R13, R14, R15, \
    L21, L22, L23, L24, L25, L26,   R20, R21, R22, R23, R24, R25, \
         L00, L10, L34, L35, L36,   R30, R31, R32, R16, R06 \
 )\
 {\
        {L00, L01, L02, L03, L04, L05, L06}, \
        {L10, L11, L12, L13, L14, L15, L16}, \
        {XXX, L21, L22, L23, L24, L25, L26}, \
        {XXX, XXX, XXX, XXX, L34, L35, L36}, \
        {R06, R05, R04, R03, R02, R01, R00}, \
        {R16, R15, R14, R13, R12, R11, R10}, \
        {XXX, R25, R24, R23, R22, R21, R20}, \
        {XXX, XXX, XXX, XXX, R32, R31, R30} \
 }
