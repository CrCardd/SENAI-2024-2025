#include <stdio.h>
#include "abobora.h"
int main(){
    int *array,x = 10;
    array = generateArray(array,x);
    for ( int i = 0 ; i < x ; i ++ ){
        printf(" [%d]  ",array[i]);
    }
    freeArray(array);

    return 0;
}