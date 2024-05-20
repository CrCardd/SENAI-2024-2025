#include <stdio.h>
#include "abobora.h"
int main(){
    int *array,x;
    printf("Insira o tamanho do array desejado:\n>>>  ");
    scanf(" %d",&x);
    array = generateArray(array,x);
    for ( int i = 0 ; i < x ; i ++ ){
        printf(" [%d]  ",array[i]);
    }
    freeArray(array);

    return 0;
}