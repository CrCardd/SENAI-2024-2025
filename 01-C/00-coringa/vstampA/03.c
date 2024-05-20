#include <stdio.h>

// quantidade de notas que serão colocadas
#define LIN 4

// quantidade de alunos
#define COL 3

int main(){
    int bol[LIN+1][COL];
    for ( int c = 0 ; c < COL ; c ++ ){
        int med = 0;
        for ( int l = 0 ; l < LIN ; l ++ ){
            printf("\n\ninsira a [ %d ] nota do %d aluno:\n>>>  ",l+1,c+1);
            scanf("%d",&bol[l][c]);
            med += bol[l][c];
        }
        bol[LIN][c] = med/LIN;
    }

    for( int l = 0 ; l < LIN+1 ; l ++ ){
        for( int c = 0 ; c < COL ; c ++ ){
            printf("[ %d ]\t",bol[l][c]);
        }
        printf("\n\n");
    }



    return 0;
}