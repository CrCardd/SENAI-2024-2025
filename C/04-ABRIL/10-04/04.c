#include <stdio.h>
int mai(int *array,int tam){
    int a = 0;
    for (int i = 0 ; i < tam ; i ++ ){
        if(a<array[i])
            a = array[i];
    }
    return a;
}

int main(){
    int vetor[] = {1,9,2,8,3,7,4,6,5}, tam = sizeof(vetor)/sizeof(vetor[0]);
    printf("%d",mai(&vetor,tam));
    return 0;
}