#include <stdio.h>

int invert( int *array, int posi){
    int aux;
    for( int i = 0 ; i <= posi/2 ; i ++ ){
        aux = array[posi-i];
        array[posi-i] = array[i];
        array[i] = aux;
    }
}

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,0}, tam = sizeof(vetor)/sizeof(vetor[0]);
    invert(&vetor,tam-1);
    for ( int i = 0 ; i < tam ; i ++ ){
        printf("[%d] ",vetor[i]);
    }
    return 0;
}