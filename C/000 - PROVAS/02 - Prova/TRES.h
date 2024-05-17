#ifndef TRES_H
#define TRES_H
#include <stdlib.h>

    int generateArray(int *array, int limit){
        array = malloc( limit * sizeof(int));
        return array;
    }
#endif 
