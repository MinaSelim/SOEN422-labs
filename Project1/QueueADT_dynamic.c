/* QueueADT.c - ADT Queue Implementation */

#include <stdlib.h>    // malloc, free
#include <stdio.h>
#include "QueueADT.h"

#define Queue_MAX 4

typedef struct QueueDesc {
    int  head, tail, count;
    int  q[Queue_MAX];
} QueueDesc, *Queue;

private void Queue_Init(Queue  this) {
	this->head = this->tail = -1;
	this->count = 0;
}

public int Queue_Count(Queue  this) {
	return this->count;
}

public void Queue_Add(Queue this, int id) {
	if (this->count == Queue_MAX)
	{
		printf("ERROR: FULL QUEUE");
	}
	else 
	{
		if (this->head == -1) this->head = 0;
		this->tail = ++(this->tail) % Queue_MAX;
		this->q[this->tail] = id;
		this->count++;
	}
}

public int Queue_Remove(Queue this) {
	if (this->count == 0)
	{
		printf("ERROR: EMPTY QUEUE");
		return -1;
	}
	
	int id = this->q[this->head];
	if (this->head == this->tail)
	{
		this->head = this->tail = -1;
	}
	else
	{
		this->head = ++(this->head) % Queue_MAX;
	}

	this->count--;
	return id;
}


public Queue  Queue_New(void) {
	Queue queue = (Queue) malloc(sizeof(QueueDesc));
	Queue_Init(queue);
	return queue;
}

public void Queue_Delete(Queue  this) {
	free(this);
}


#include <stdio.h>

private void Queue_Print(Queue this) {
	printf("[ ");
	int temp = this->head;
	int count = this->count;
	while (count > 0)
	{
		printf("%d ", this->q[temp]);
		temp = ++temp % Queue_MAX;
		count--;
	}

	printf("]");
}

void main(void) {
    Queue  q = Queue_New();

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
