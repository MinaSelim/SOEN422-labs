#include "LedAds.h"
typedef enum { Off, On } bool;

typedef struct {
    int  digitalOutPin;
    bool status;
} Led;

Led led;

void Led_Init(void) {
    // pinMode(LedDigitalPin, OUTPUT);
    led.digitalOutPin = 13;
    led.status = Off;
}

void Led_TurnOff(void) {
    // digitalWrite(LedDigitalPin, LOW);
    led.status = Off;
}

void Led_TurnOn(void) {
    // digitalWrite(LedDigitalPin, HIGH);
    led.status = On;
}

void Led_Display(void) {
    putchar(led.status ? '@' : 'O'); // if (led.status) putchar('@'); else putchar('O');
}
