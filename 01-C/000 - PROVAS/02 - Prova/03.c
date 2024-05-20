#include <stdio.h>
#include "TRES.h"
// #include "padrao.h"
// NECESSARIO A HEADER "TRES.h" QUE ESTÃO NO ARQUIVO .zip ENVIADO COMO ANEXO DA ATIVIDADE
int main(){
    int* array,op;
    printf("Digite o tamanho que o array deve conter:\n>>>  ");
    scanf(" %d",&op);
    array = generateArray(array,op);

    for ( int i = 0 ; i < op ; i ++ ){
        printf("\n\nInsira o valor do indice 'array[%d]':\n>>>  ",i);
        scanf(" %d",&array[i]);
    }
    printf("\n\n\n");
    for ( int i = 0 ; i < op ; i ++ ){
        printf("[%d]\t",array[i]);
    }
    free(array);
    return 0;
}