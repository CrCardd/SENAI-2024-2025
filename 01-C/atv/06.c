#include <stdio.h>

void doub( int *array, int tam){
    for(int i = 0 ; i < tam ; i ++ ){
        array[i]*=2;
    }    
}
int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9}, tam = sizeof(vetor)/sizeof(vetor[0]);
    doub(&vetor,tam);
    for(int i = 0 ; i < tam ; i ++ ){
        printf("[%d] ",vetor[i]);
    }
    return 0;
}