// Queue.h - TDA Queue implemented in an int array like a circular list

#ifndef Queue_h
#define Queue_h

#include "type.h"

        struct QueueDesc;        // Forward ref 
typedef struct QueueDesc* Queue; // Opaque type 

public Queue   Queue_New();
// public void    Queue_Init(Queue this);  // Init or Reset could be private if needed.
public void    Queue_Add(Queue this, int item);
public int     Queue_Remove(Queue this);
public int     Queue_Count(Queue this);
public void    Queue_Delete(Queue this);

#endif /* Queue_h */
