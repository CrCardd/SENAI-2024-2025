#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//linhas
#define a 8
//colunas
#define b 5
// matrizes
#define f 4
int main(){
    srand(time(NULL));
    int ma[f][a][b];

    for ( int l = 0 ; l < a ; l ++ ){
        for ( int v = 0 ; v < f ; v ++ ){
            for ( int c = 0 ; c < b ; c ++ ){
                ma[v][l][c] = rand()%10;
                printf("[%d]\t",ma[v][l][c]);
            }
            printf("\t\t");
        }
        printf("\n\n");
    }

    printf("\n\n=\n\n");


    for ( int l = 0 ; l < a ; l ++ ){
        for ( int c = 0 ; c < b ; c ++ ){
            int j = 0;
            for ( int q = 0 ; q < f ; q ++){
                j += ma[q][l][c];
            }
        printf("[ %d ]\t",j);
        }
        printf("\n\n");
    }

    return 0;
}