#include <stdio.h>
#include "queue.h"
#include "stack.h"

int main()
{
    Stack stack = stack_construct();
    Queue queue = queue_construct();

    for(int i =1 ; i<= 20; i++)
    {
        push(&stack, i);
        enqueue(&queue, i);
    }
    printf("STACK\tQUEUE");
    for(int i =0 ; i< 20; i++)
    {
        printf("\n%d\t",peek(&stack));
        pop(&stack);
        printf("%d",dequeue(&queue));
    }


}
