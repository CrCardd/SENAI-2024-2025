#include <stdio.h>
#include <stdlib.h>
#include "padrao.h"
// NECESSARIO A HEADER "padrao.h" QUE ESTÁ NO ARQUIVO .zip ENVIADO COMO ANEXO DA ATIVIDADE
int main(){
    int *vetor1,tot1=0,*vetor2,tot2=0,op1,op2;
    printf("\n\n\nInsira o valor de quantos elementos o PRIMEIRO array deve conter 'array[x]:");
    do{
        printf("\n>>>  ");
        scanf(" %d",&op1);
    } while(op1<=0);
    vetor1 = generateArray(vetor1, op1);

    for( int i = 0 ; i < op1 ; i ++ ){
        printf("\n\nPor favor digite o valor do indice 'array[%d]'\n>>>  ",i);
        scanf(" %d",&vetor1[i]);
        tot1+=vetor1[i];
    }



    printf("\n\n\nInsira o valor de quantos elementos o SEGUNDO array deve conter 'array[x]:");
    do{
        printf("\n>>>  ");
        scanf(" %d",&op2);
    } while(op2<=0);
    vetor2 = generateArray(vetor2, op2);
    for( int i = 0 ; i < op2 ; i ++ ){
        printf("\n\nPor favor digite o primeiro valor do indice 'array[%d]\n>>>  ",i);
        scanf(" %d",&vetor2[i]);
        tot2+=vetor2[i];
    }
    printf("\n\n\n\narray1:\n");
    for ( int i = 0 ; i < op1 ; i ++ ){
        printf("[%d]\t",vetor1[i]);
    }
    printf("\n\narray2\n");
    for ( int i = 0 ; i < op2 ; i ++ ){
        printf("[%d]\t",vetor2[i]);
    }
    printf("\n\n\n\n");
    ( tot1 > tot2 ) ? printf("\n\nPRIMEIRO array possui um total de valores maior\nTOTAL: %d",tot1) : printf("\n\nSEGUNDO array possui um total de valores maior\nTOTAL: %d",tot2);

    free(vetor1);
    free(vetor2);

}