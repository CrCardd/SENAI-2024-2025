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
    queue.capacity = 10;
    queue.array = (int*) malloc(queue.capacity * sizeof(int));
    return queue; 
}

void enqueue(Queue *queue,int value)
{
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
    if(queue->size<=0)
    {   
        return 0;
    }
    for(int i=0; i<queue->size-1; i++)
    {
        queue->array[i] = queue->array[i+1];
    }
    queue->size--;

    return aux;
}

int get(Queue* queue,int index)
{
    return queue->array[index];
}

#endif 