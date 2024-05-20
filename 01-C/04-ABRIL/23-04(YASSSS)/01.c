#include <stdio.h>

int main(){
    int qtd, *array;
    printf("insira quantos valores deverá haver no array:\n>>>   ");
    scanf(" %d",&qtd);
    array = malloc(qtd * sizeof(int));
    for( int i = 0 ; i < qtd ; i++ ){
        printf("Insira o valor da posicao 'array[%d]':\n>>>   ",i);
        scanf(" %d",&array[i]);
    }
    for( int i = 0 ; i < qtd ; i++ ){
        printf("%d    ",array[i]);
    }
    free(array);
}