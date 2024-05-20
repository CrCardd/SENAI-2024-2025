#include <stdio.h>

int main(){
    int m[2][2]={{1,2},{3,4}};

    for ( int l = 0 ; l < 2 ; l ++ ){
        for ( int c = 0 ; c < 2 ; c ++ ){
            printf("[%d]  ",m[l][c]);
        }
        printf("\n");
    }
    return 0;
}