#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
    char street[50], number[5], complement[50], neighboorhod[50], cep[10], city[50], state[50], country[50];
} Address;

typedef struct
{
    char directDD[5], number[12];
} Phone;

typedef struct
{
    char day[3],month[3],year[6];
} Birth;

typedef struct
{
    char name[50], email[50],notes[100];
    Address address;
    Phone phone;
    Birth birth;
} Person;



//=======================================================================================
Person *addAlpha(Person* array, Person newest, int* size, int*lenght)
{
    int index;
    if(*size == *lenght)
    {
        (*lenght) = *size * 2;
        array = realloc(array, (*lenght) * sizeof(Person));
    }

    for(index=0; index<*size; index++)
    {
        if(tolower(newest.name[0]) < tolower(array[index].name[0]))
        {
            break;
        }
    }

    for(int i=*size; i>index; i--)
    {
        array[i] = array[i-1];
    }
    array[index] = newest;
    (*size)++;
    return array;

}


//=======================================================================================
int main()
{   
    int phonebookLenght = 1;

    printf("[1] New Contact\n[2] Search contact");


    int size=1;
    Person *phonebook = NULL;

    for (int i = 0; i < 100; i++)
    {
        
    
        Person new;
        printf("name:\n>>>   ");
        scanf(" %50[^\n]",&new.name);

        printf("e-mail:\n>>>  ");
        scanf(" %50[^\n]",&new.email);

        printf("ADDRESS\n");
        printf("street:\n>>>  ");
        scanf(" %50[^\n]",&new.address.street);

        printf("number:\n>>>  ");
        scanf(" %5[^\n]",&new.address.number);

        printf("complement:\n>>>  ");
        scanf(" %50[^\n]",&new.address.complement);

        printf("neighboorhod:\n>>>  ");
        scanf(" %5[^\n]",&new.address.neighboorhod);

        printf("cep:\n>>>  ");
        scanf(" %50[^\n]",&new.address.cep);
    
        printf("city:\n>>>  ");
        scanf(" %50[^\n]",&new.address.city);

        printf("state:\n>>>  ");
        scanf(" %50[^\n]",&new.address.state);

        printf("country:\n>>>  ");
        scanf(" %50[^\n]",&new.address.country);

        printf("ddd:\n>>>  ");
        scanf(" %5[^\n]",&new.phone.directDD);

        printf("number:\n>>>  ");
        scanf(" %5[^\n]",&new.phone.number);

        printf("day of birth (format: DD MM YYYY):\n>>>  ");
        scanf(" %3[^\n] %3[^\n] %6[^\n]",&new.birth.day,&new.birth.month,&new.birth.year);

        printf("notes:\n>>>  ");
        scanf(" %100[^\n]",&new.notes);
        phonebook = addAlpha(phonebook, new, &size,&phonebookLenght);     

        // for(int i=0; i<size-1; i++)
        // {
        //     printf("%s\n",phonebook[i].name);
        // }
    }
    
}
