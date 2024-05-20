#include <stdio.h>

int main(){
    double array[] = {3.14, 2.71, 1.618, 0.577};
    int tam = sizeof(array)/sizeof(array[0]);
    for( int i = 0 ; i < tam ; i ++ ){
        printf("[%lf] ",array[i]);
    }

    return 0;
}