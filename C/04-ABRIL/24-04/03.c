#include <stdio.h>
#include "ABOBORA.h"

int main(){
    int a = 10;
    printf("a:\t%d",a);
    changeValue(&a);
    printf("\nnew a:\t %d",a);

    return 0;
}