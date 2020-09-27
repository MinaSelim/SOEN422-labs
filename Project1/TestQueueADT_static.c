#include <stdlib.h>  
#include <stdio.h>
#include "QueueADT_static.h"


void main(void) {
    char placeHolder[QUEUE_SIZE];

    Queue_New(placeHolder);
    Queue q = (Queue)placeHolder;

    printf("Test Queue ADT :\n");
    printf("[ ][ 1 2 3 4 ]1234\n");

    Queue_Print(q);

    Queue_Add(q, 1);
    Queue_Add(q, 2);
    Queue_Add(q, 3);
    Queue_Add(q, 4);
    Queue_Print(q);

    printf("%d", Queue_Remove(q));
    printf("%d", Queue_Remove(q));
    printf("%d", Queue_Remove(q));
    printf("%d", Queue_Remove(q));

    Queue_Delete(q);
    printf("\n");
}