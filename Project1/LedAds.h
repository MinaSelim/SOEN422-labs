// LedCDS.h - CDS for an LED
#ifndef LED_ADS
#define LED_ADS

#include <stdio.h>
#include "type.h"

#define LedDigitalPin   13

void Led_Init(void);
void Led_TurnOff(void);

void Led_TurnOn(void);

void Led_Display(void);
#endif // !LED_ADS