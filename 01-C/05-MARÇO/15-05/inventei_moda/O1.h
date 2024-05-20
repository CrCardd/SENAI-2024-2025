#ifndef O1_H
#define O1_H
#include <stdlib.h>

    int *push(int *array,int *size, int value)
    {
        *array = realloc(*array, (*size + 1) * sizeof(int));
        array[*size] = value;
        (*size)++;
        return array;
    }

    int *pop(int *array,int *size)
    {
        *array = realloc(array, (*size-1)*sizeof(int));
        (*size)--;
        return array;
    }

    int peek(int *array,int size)
    {
        return array[size-1];
    }


#endif 