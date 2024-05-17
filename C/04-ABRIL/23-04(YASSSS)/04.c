#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mtr, x,y;
    printf("Por favor insira quantas linhas a matriz deve conter:\n>>>  ");
    scanf(" %d", &y);
    printf("\n\nPor favor insira quantas colunas a matriz deve conter:\n>>>  ");
    scanf(" %d", &x);
    mtr = malloc( y * sizeof(int*));
    for ( int i = 0 ; i < y ; i ++ ){
        mtr[i] = malloc( x * sizeof(int));
    }

    for( int l = 0 ;  l < y ; l ++ ){
        for( int c = 0 ;  c < x ; c ++ ){
            printf("%d\t",mtr[l][c]);
        }
        printf("\n\n\n" );
    }

    for ( int i = 0 ; i < y ; i ++ ){
        free(mtr[i]);
    }
    free(mtr);

    return 0;
}