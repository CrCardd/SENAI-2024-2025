#include <stdio.h>
#include "queue.h"
#define CON 100

int main()
{
    Queue queue = queue_construct();
    for(int i=0; i<CON; i++)
    {
        enqueue(&queue, i);
    }
    
    for(int i=0; i<CON; i++)
    {
        printf("%d\n",dequeue(&queue));
    }
}