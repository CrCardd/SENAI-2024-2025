#include <stdio.h>
#include <stdlib.h>
#define DEBUG 21

typedef struct{
    int size;
    int capacity;
    int *array;
} Stack;

Stack stack_construct(){
    Stack stack;
    stack.size = 0;
    stack.capacity = 10;
    stack.array = malloc(stack.capacity * sizeof(int));
    return stack;
}

void push(Stack *stack, int value){
    if(stack->capacity == stack->size){
        stack->capacity *= 2;
        stack->array = realloc(stack->array, stack->capacity * sizeof(int));
    }
    stack->array[stack->size++] = value;
}

void pop(Stack *stack){
    if(stack->size <= 0){
        return 0;
    }
    stack->size--;
}

int peek(Stack *stack){
    if(stack->size <= 0){
        return 0;   
    }
    return stack->array[stack->size-1];
}


int main(){
    Stack stack = stack_construct();
    for(int i=0; i<DEBUG; i++){
        push(&stack, i);
    }
    for(int i=0; i<DEBUG+10; i++){
        printf("\n%d",peek(&stack));
        pop(&stack);
    }
    free(stack.array);
}