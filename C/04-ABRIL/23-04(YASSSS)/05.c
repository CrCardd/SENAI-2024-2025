#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int len1,len2,*arrayTwo,*arrayOne,**sum;
    int col=0;
    printf("\n\nDigite o tamanho do primeiro array:\n>>>  ");
    scanf(" %d",&len1);
    printf("\n\nDigite o tamanho do segundo array:\n>>>  ");
    scanf(" %d",&len2);
    
    col = (len1 > len2) ? len1 : len2;
    arrayOne = malloc(col * sizeof(int));
    for( int i = 0 ; i < col ; i ++ ){
        if( i < len1){
            arrayOne[i] = rand()%10;
            printf("[%d]\t",arrayOne[i]);
        } else{
            arrayOne[i] = 0;
        }
    }
    printf("\n\n\n");
    arrayTwo = malloc(col * sizeof(int));
    for( int i = 0 ; i < col ; i ++ ){
        if( i < len2){
            arrayTwo[i] = rand()%10;
            printf("[%d]\t",arrayTwo[i]);
        } else{
            arrayTwo[i] = 0;
        }
    }
    printf("\n\n\n\n\n\t\tSOMA\n\n");
    sum = malloc( col * sizeof( int));
    for( int i = 0 ;  i < col ; i ++ ){
        sum[i] = arrayOne[i] + arrayTwo[i];
        printf("[%d]\t",sum[i]);
        
    }
    free(arrayOne);
    free(arrayTwo);
    free(sum);

    return 0;
}