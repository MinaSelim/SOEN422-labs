// TestLedCDS.c - Test CDS for an Led

#include <stdio.h>

#include "LedADS.h"

void main() {
    printf("Test Led CDS :\n"); // Test identification.
    printf("@O\n");         // Expected output.

    Led_Init();     // setup();

//  while (true) {  // loop {
    Led_TurnOn();
    Led_Display();
    Led_TurnOff();
    Led_Display();
    putchar('\n');
//  }
}
