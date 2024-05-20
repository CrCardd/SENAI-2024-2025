#include <stdio.h>
#include <stdlib.h>
// NECESSARIO A HEADER "padrao.h" QUE ESTÁ NO ARQUIVO .zip ENVIADO COMO ANEXO DA ATIVIDADE
#define MATRIZES 4
#define LIN 3
#define COL 3
void printfMtr(int mtr[LIN][COL]){
    for ( int l = 0 ; l < LIN ; l ++ ){
        for ( int c = 0 ; c < COL ; c ++ ){
            printf("[%d]\t",mtr[l][c]);
        }
        printf("\n\n");
    }
}


int main(){
    int values[MATRIZES][10] = {{1,2,3,4,5,6,7,8,9},  {9,8,7,6,5,4,3,2,1},  {2,3,6,7,8,9,6,4,3},  {3,8,6,8,9,9,9,6,5}};
    int MTR[MATRIZES][LIN][COL];


    for ( int x = 0 ; x < MATRIZES ; x ++ ){
        for( int l = 0 ; l < LIN ; l ++ ){
            for( int c = 0 ; c < LIN ; c ++ ){
                MTR[x][l][c] = values[x][(l*COL)+c];
            }
        }
    }

    int mtrSumTot[LIN][COL] = {0};
    for ( int x = 0 ; x < MATRIZES ; x ++ ){
        for( int l = 0 ; l < LIN ; l ++ ){
            for( int c = 0 ; c < LIN ; c ++ ){
                mtrSumTot[l][c] +=  MTR[x][l][c];
            }
        }
    }

    printf("SOMA DAS [%d] MATRIZES\n",MATRIZES);
    printfMtr(mtrSumTot);

    int mtrSum1[LIN][COL] = {0};
    for ( int x = 0 ; x < MATRIZES/2 ; x ++ ){
        for( int l = 0 ; l < LIN ; l ++ ){
            for( int c = 0 ; c < LIN ; c ++ ){
                mtrSum1[l][c] +=  MTR[x][l][c];
            }
        }
    }
    // printfMtr(mtrSum1);
    int mtrSum2[LIN][COL] = {0};
    for ( int x = MATRIZES/2 ; x < MATRIZES ; x ++ ){
        for( int l = 0 ; l < LIN ; l ++ ){
            for( int c = 0 ; c < LIN ; c ++ ){
                mtrSum2[l][c] +=  MTR[x][l][c];
            }
        }
    }
    // printfMtr(mtrSum2);

    printf("\n\n\n\n\nMULTIPLICACAO:\n");
    for ( int l = 0 ; l < LIN ; l ++ ){
        for ( int c = 0 ; c < COL ; c ++ ){
            printf("[%d]\t",mtrSum1[l][c]*mtrSum2[l][c]);
        }
        printf("\n\n");
    }
    return 0;
}