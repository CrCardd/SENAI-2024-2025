#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>

void addAlpha(Person* array, Person newest, int* size)
{
    if(size == 0)
    {
        size++;
        array = realloc(*size * sizeof(Person));
        array[size-1] = newest;
    }
}


// Person *addAlpha(Person* array, Person newest, int* size)
// {
//     int index;
//     if(*size == 0)
//     {
//         array = malloc(*size+1 * sizeof(Person));
//         array[*size-1] = newest;
//         return array;
//     }

//     for(int i=0; i<*size; i--)
//     {
//         if(newest.name[0] > array[i].name[0])
//         {
//             index = i;
//             break;
//         }else
//         {
//             index = size;
//         }
//     }

//     size++;
//     array = realloc(array, ((*size+1) * sizeof(Person)));
//     for(int i=*size; i>index; i--)
//     {
//         array[i] = array[i-1];
//     }
//     array[index] = newest;
//     return array;

// }

#endif 