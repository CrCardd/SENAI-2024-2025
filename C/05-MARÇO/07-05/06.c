#include <stdio.h>
#include <ctype.h>

#define CONS 5
typedef struct
{
    char name[50], address[99], phone[20];
} Phone;



int main(){

    Phone phone[CONS];
    for(int i=0 ; i<CONS ; i++)
    {
        printf("Insira o nome:\n>>>  ");
        scanf(" %50[^\n]",phone[i].name);
        printf("Insira o endereco:\n>>>  ");
        scanf(" %99[^\n]",phone[i].address);
        printf("Insira o telefone:\n>>>  ");
        scanf(" %20[^\n]",phone[i].phone);
    }

    for(int i=0 ; i<CONS ; i++)
    {
        for(int j=i ; j<CONS ; j++)
        {
            if(tolower(phone[i].name[0]) > tolower(phone[j].name[0]))
            {
                Phone aux = phone[i];   
                phone[i] = phone[j];
                phone[j] = aux;
            }
        }
        printf("\n\n\nNOME:\t%s\nENDERECO:\t%s\nTELEFONE:\t%s",phone[i].name,phone[i].address,phone[i].phone);
    }


return 0;
}