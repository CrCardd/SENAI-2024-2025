#ifndef QUEUE_H
#define QUEUE_H
#include <stdlib.h>

typedef struct Queue
{
    int size;
    int capacity;
    int *array;

} Queue;

Queue queue_construct()
{   
    Queue queue;
    queue.size = 0;
    queue.capacity = 0;
    queue.array = NULL;
    return queue; 
}

void enqueue(Queue *queue,int value)
{
    if(!queue->array)
    {
        queue->capacity++;
        queue->array = (int*) realloc(queue->array, (queue->capacity*2) * sizeof(int));
    }
    if(queue->capacity==queue->size)
    {
        queue->capacity*=2;
        queue->array = (int*) realloc(queue->array, queue->capacity * sizeof(int));
    }
    queue->array[queue->size++] = value;
}

int dequeue(Queue *queue)
{
    int aux = queue->array[0];
    for(int i=0; i<queue->size-1; i++)
    {
        queue->array[i] = queue->array[i+1];
    }
    queue->size--;

    return aux;
}

#endif 