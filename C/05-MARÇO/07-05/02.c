#include <stdio.h>
#define CONS 5

typedef struct
{
    char name[50];
    int registrationNum;
    char course[50];
} Student;

int main(){

    Student array[CONS];
    for(int i = 0; i < CONS ; i++)
    {
        printf("\n\nPor favor digite o nome d@ [%d]o alun@:\n>>>  ",i);
        scanf(" %50[^\n]",array[i].name);
        printf("\n\nPor favor digite o curso d@ [%d]o alun@:\n>>>  ",i);
        scanf(" %50[^\n]",array[i].course);
        printf("\n\nPor favor digite o numero de registro d@ [%d]o alun@:\n>>>  ",i);
        scanf(" %d",&array[i].registrationNum);
    }

    for(int i = 0; i < CONS ; i++)
    {
        printf("ALUNO: %s \n",array[i].name);
        
        printf("CURSO: %s \n",array[i].course);

        printf("REGISTRO: %d \n\n\n",array[i].registrationNum);
    }
    return 0;
}