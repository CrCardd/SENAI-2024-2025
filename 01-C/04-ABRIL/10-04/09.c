#include <stdio.h>

int count(int *array, int tam, int *p, int *i){
    for( int j = 0 ; j < tam ; j ++ ){
        if ( array[j] % 2 == 0 ){
            *p += 1;
        } else{
            *i += 1;
        }
    }
    return p,i;
}

int main(){
    int a = 10, *ptr, par = 0, impar = 0;
    ptr = &a;
    *ptr = 3;
    printf("%d",a);

    int vetor[] = {9,3,5,4,2,1,6,7,8}, tam = sizeof(vetor)/sizeof(vetor[0]),x,y;
    count(&vetor,tam,&par,&impar);
    printf("quantidade de pares no array:\t%d\nquantidade de impares no array:\t%d",par,impar);
    return 0;
}