#include <stdio.h>

void mud(int *ptr){
   *ptr = 1;
}

int main(){
    int a = 10;
    mud(&a);
    printf("%d",a);
    return 0;
}