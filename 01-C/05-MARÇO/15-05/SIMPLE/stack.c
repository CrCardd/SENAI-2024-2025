#include <stdio.h>
#include "stack.h"
#define CON 100

int main()
{
    Stack stack = stack_construct();
    for(int i=0; i<CON; i++)
    {
        push(&stack, i);
    }
    
    for(int i=0; i<CON; i++)
    {
        pop(&stack);
        printf("%d\n",peek(&stack));
    }
}