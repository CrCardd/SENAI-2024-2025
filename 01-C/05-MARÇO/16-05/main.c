#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#include "stack.h"

int main()
{
    Queue queue = queue_construct();
    srand(time(NULL));

    do
    {
        if(rand()%2 == 1)
        {
            enqueue(&queue, 1);
            enqueue(&queue, 1);
            enqueue(&queue, 1);
        }
        if(rand()%10 == 1)
        {
            dequeue(&queue);
        }
        for(int i=0 ; i<queue.size ; i++)
        {
            printf("[%d]\t",get(&queue, i));
        }
        printf("\n\n");
        dequeue(&queue);
        sleep(1);
    } while(queue.size);

}
