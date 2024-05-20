#include <stdio.h>
#include "O1.h"

int main()
{
    int *array;
    int size = 0;

    for(int i=0; i < 20; i++)
    {
        array = push(array,&size,i);
        printf("a\n");
        printf("%da\n",peek(array,size));
    }

    return 0;
}