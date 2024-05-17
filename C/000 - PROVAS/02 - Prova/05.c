#include <stdio.h>
#include "padrao.h"
// NECESSARIO A HEADER "padrao.h" QUE ESTÁ NO ARQUIVO .zip ENVIADO COMO ANEXO DA ATIVIDADE
#define LIN 4
#define COL 4

int main(){
    int **mtr;
    int *array = malloc( LIN*COL * sizeof(int));
    mtr = generateMtr(mtr,LIN,COL);

    for ( int l = 0 ; l < LIN ; l ++ ){
        for ( int c = 0 ; c < LIN ; c ++ ){
            printf("\nPor favor insira o valor do indice 'mtr[%d][%d]':\n>>>  ");
            scanf(" %d",&mtr[l][c]);
            array[l*COL+c] = mtr[l][c];
        }
    }


    printf("\n\n");
    for ( int l = 0 ; l < LIN ; l ++ ){
        for ( int c = 0 ; c < COL ; c ++ ){
            printf("[%d]\t",mtr[l][c]);
        }
        printf("\n\n");
    }
    printf("\n\n\n");
    for ( int i = 0; i < LIN*COL ; i ++ ){
        printf("[%d]\t",array[i]);
    }
    return 0;
}