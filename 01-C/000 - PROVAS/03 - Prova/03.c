#include <stdio.h>
#include <stdlib.h>
#define DEBUG 21

typedef struct{
    int size;
    int capacity;
    int *array;
} Queue;

Queue queue_construct(){
    Queue queue;
    queue.size = 0;
    queue.capacity = 10;
    queue.array = malloc(queue.capacity * sizeof(int));
    return queue;
}

void enqueue(Queue *queue, int value){
    if(queue->capacity == queue->size){
        queue->capacity *= 2;
        queue->array = realloc(queue->array, queue->capacity * sizeof(int));
    }
    queue->array[queue->size++] = value;
    // printf("\n%d",queue->array[queue->size-1]);
}

int dequeue(Queue *queue){
    if(queue->size <= 0){
        return 0;
    }
    int aux = queue->array[0];
    for(int i=0; i<queue->size; i++){
        queue->array[i] = queue->array[i+1];
    }
    queue->size--;
    return aux;
}


int main(){
    Queue queue = queue_construct();
    for(int i=0; i<DEBUG; i++){
        enqueue(&queue, i);
    }
    for(int i=0; i<DEBUG; i++){
        printf("\n%d",dequeue(&queue));
    }
    free(queue.array);
}