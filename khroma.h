#ifndef KHROMA_H
#define KHROMA_H

#include <PolychrHAUM.h>

#ifdef BUILD_PC
#define A0 0
#define A1 1
#endif

#define PIN__BTN1          4
#define PIN__BTN2          6
#define PIN__POWER_BTN     7
#define PIN__POWER_CMD     10
#define PIN__POWER_STATUS  11
#define PIN__LEDSTRIP_DATA 9
#define PIN__POTAR_LIGHT   A0
#define PIN__POTAR_SPEED   A1

extern PolychrHAUM <179, PIN__LEDSTRIP_DATA> khroma;

#endif
