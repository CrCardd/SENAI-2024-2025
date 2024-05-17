#ifndef STACK_H 
#define STACK_H 
#include <stdlib.h>

typedef struct Stack
{
    int size;
    int capacity;
    int *array;
} Stack;

Stack stack_construct()
{
    Stack stack;
    stack.size = 0;
    stack.capacity = 0;
    stack.array = NULL;
    return stack;
}

void push(Stack *stack, int value)
{
    if(!stack->array)
    {
        stack->capacity++;
        stack->array = (int*) realloc(stack->array, (stack->capacity*2) * sizeof(int));
    }
    if(stack->capacity == stack->size)
    {
        stack->capacity*=2;
        stack->array = (int*) realloc(stack->array, stack->capacity * sizeof(int));
    }
    stack->array[stack->size++] = value; 
}

void pop(Stack *stack)
{   
    stack->size--;
}

int peek(Stack *stack)
{
    return stack->array[stack->size-1];
}

#endif