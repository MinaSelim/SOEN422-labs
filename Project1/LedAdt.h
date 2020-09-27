// Led.h - ADT Led interface

#ifndef Led_h
#define Led_h

#include <stdio.h>
#include "type.h"

        struct LedDesc;      // Forward ref 
typedef struct LedDesc* Led; // Opaque type 

public Led   Led_New(void);
public void  Led_TurnOff(Led this);
public void  Led_TurnOn(Led this);
public void  Led_Display(Led this);
public void  Led_Delete(Led this);

#endif /* Led_h */
