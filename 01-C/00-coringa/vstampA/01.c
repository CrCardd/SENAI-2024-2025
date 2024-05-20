#include <stdio.h>
#define a 4

int main(){
    int ma[a][a] , tot = 0 ;
    for( int l = 0 ; l < a ; l ++ ){
        for( int c = 0 ; c < a ; c ++ ){
            printf("\ninsira o valor da posicao [%d][%d] da matriz:\n>>>",l,c);
            scanf("%d",&ma[l][c]);
            tot += ma[l][c];
        }
    }
    for( int l = 0 ; l < a ; l ++ ){
        for( int c = 0 ; c < a ; c ++ ){
            printf("[%d]\t",ma[l][c]);
        }
        printf("\n\n");
    }
    printf("\ntotal: %d",tot);
    return 0;
}