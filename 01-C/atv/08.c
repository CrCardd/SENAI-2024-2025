#include <stdio.h>

int find(int *array, int tam, int num){
    for ( int i = 0 ; i < tam ; i ++ ){
        if(array[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,0}, tam = sizeof(vetor)/sizeof(vetor[0]), a = 0;
    printf("%d ",find(&vetor,tam,a));
}