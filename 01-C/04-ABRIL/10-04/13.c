#include <stdio.h>
#include <stdlib.h>

int remov(int *array, int *tam, int ind) {
    int *newarray = (int*) malloc((*tam-1) * sizeof(int));
    for ( int i = 0 ; i < ind ; i++ ){
        newarray[i] = array[i];
    }
    *tam -=1;
    for ( int i = ind ; i < *tam ; i ++ ){
        newarray[i] = array[i+1];
    }
    free(array);
    return newarray;
}

int main(){
    int tam = 10, a = 1;
    int *vetor = (int*) malloc( tam * sizeof(int));
    for ( int i = 0 ; i < tam ; i ++ ){
        printf("[ %d ]  ",vetor[i]);
    }
    printf("\n\n\n");
    int *arrayCortadinho = remov(vetor, &tam, a);
    free(vetor);
    for ( int i = 0 ; i < tam ; i ++ ){
        printf("[ %d ]  ",arrayCortadinho[i]);
    }
}