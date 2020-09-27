/* LedAdt.c - ADT Led Implementation */

#include <stdlib.h>    // malloc, free
#include "LedAdt.h"

#define Off             0
#define On              1
#define LedDigitalPin   13

typedef struct LedDesc {
    int  digitalOutPin;
    bool status;
} LedDesc, *Led;

Led led;

private void Led_Init(Led this) {
    // pinMode(LedDigitalPin, OUTPUT);
    this->digitalOutPin = 13;
    this->status = Off;
}

public void Led_TurnOff(Led this) {
    // digitalWrite(LedDigitalPin, LOW);
    this->status = Off;
}

public void Led_TurnOn(Led this) {
    // digitalWrite(LedDigitalPin, HIGH);
    this->status = On;
}

public void Led_Display(Led this) {
    putchar(this->status ? '@' : 'O');
}

public Led Led_New(void) {
    Led this = (Led)malloc(sizeof(LedDesc));

    if (this != NULL) {
        Led_Init(this);
    }
    return this;
}

public void Led_Delete(Led this) {
    if ( this != NULL ) {
        free( (char*)this );
        this = NULL;
    }
}

void main(void) {
    Led led = Led_New();

    printf("Test Led ADT :\n");
    printf("O@O\n");

    Led_Display(led);

//  while (true) {  // loop {
    Led_TurnOn(led);
    Led_Display(led);
    Led_TurnOff(led);
    Led_Display(led);
    putchar('\n');
//  }
}
