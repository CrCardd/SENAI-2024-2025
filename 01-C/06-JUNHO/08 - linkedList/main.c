#include <stdio.h>

#include "noHeaderStackMethods.h"
#include <stdlib.h>

int main()
{
    LinkedList linkedList = constructor_list();

    for(int i=0 ; i<20 ; i++){
        Person person_new;
        person_new.idade = i;
        person_new.nota = i+1;
            
        push(&linkedList, person_new);
    }
    pop(&linkedList);
    pop(&linkedList);
    pop(&linkedList);
    pop(&linkedList);
    pop(&linkedList);

    test(&linkedList);

    // LinkedList linkedList = constructor_list();

    // for (int i = 0; i < 20; i++)
    // {
    //     Person person_new;
    //     person_new.idade = i;
    //     person_new.nota = i+1;

    //     enqueue(&linkedList, person_new);
    //     printf("%d\n", dequeue(&linkedList).idade);
    // }
    
    // for (int i = 0; i < 20; i++)
    // {
        
    // }
    
}