#include <stdio.h>

int changevalue(int *array, int tam){
    array[2] = 0; 
}

int main(){
    int vetor[] = {1,2,3,4,5}, tam = sizeof(vetor)/sizeof(vetor[0]);
    changevalue(&vetor,tam);
    for ( int i = 0 ; i < tam ; i ++ ){
        printf("[%d]", vetor[i]);
    }
    return 0;
}