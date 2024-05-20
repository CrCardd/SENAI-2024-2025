#include <stdio.h>

int main()
{
    char array[4][99] = {"Alice","Bob","Carol","David"};
    int tam = sizeof(array)/sizeof(array[0]);
    for( int i = 0 ; i < tam ; i ++)
    {
        printf("%s  ",array[i]);
    }
    return 0;
}