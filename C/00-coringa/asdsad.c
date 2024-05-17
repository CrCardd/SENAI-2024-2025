#include <stdio.h>
#include <stdlib.h>

void del(int* array, int indice, int* tot){
    printf("\nindice: %d\n tot: %d\n",indice,*tot);
    printf("aaaaaaaa");
    for( int i = indice ; i < (*tot-1) ; i ++ ){
        array[i] = array[i+1];
    }
    (*tot)--;
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0}, q = 10;
    for( int i = 0 ;  i < 10 ; i ++ ){
        printf("%d   ", a[i]);
    }
    del(a,2,&q);
    printf("\n\n");
    for( int i = 0 ;  i < 10 ; i ++ ){
        printf("%d   ", a[i]);
    }


    return 0;
}