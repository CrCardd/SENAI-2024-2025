#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ABOBORA.h"

int main(){
    int **mtr, *array, x;
    srand(time(NULL));
    printf("Insira o valor do tamanho da matriz [x][x]:\n>>>  ");
    scanf(" %d",&x);
    mtr = generateMtr(mtr,x);
    array = generateArray(array,x*x);
    for ( int l = 0 ; l < x ; l ++ ){
        for ( int c = 0 ; c < x ; c ++ ){
            mtr[l][c] = rand()%10;
            printf("%d    ",mtr[l][c]);
            array[(l*x)+c] = mtr[l][c];
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    for ( int i = 0 ; i < x*x ; i ++ ){
        printf("%d    ",array[i]);
    }
    return 0;
}