#include <stdio.h>

int somarVetor(int *array, int tam){
    int a = 0;
    for(int i = 0 ; i < 10 ; i++){
        a += array[i];
    }
    return a;
}

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    printf("%d",somarVetor(&vetor,tam));
    return 0;
}