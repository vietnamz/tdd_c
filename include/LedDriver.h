
#ifndef __LED_DRIVER_H__
#define __LED_DRIVER_H__

#include <stdint.h>

void LedDriver_Create(uint16_t *address);
void LedDriver_Destroy(void);
void LedDriver_TurnOn(int ledNumber);
void LedDriver_TurnOff(int ledNumber);

#endif

