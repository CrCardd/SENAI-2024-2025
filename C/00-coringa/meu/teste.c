#include <stdio.h>

int main(){
    int num = 1234;
    char banana[100];
    sprintf(banana, "%d", num);
    for ( int i = 0 ; i < 4 ; i ++ ){
        printf(" %c\n",banana[i]);
        int teste = banana[i] - '0';
        printf(" %d\n\n",teste+10);
    }
}