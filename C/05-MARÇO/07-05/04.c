#include <stdio.h>
#define CONS 3

typedef struct
{
    char name[50],registration[50];
    int subjectNum;
    float av1,av2,mid;
} Student;

int main(){
    int av1_weight = 1, av2_weight = 2;
    Student array[CONS];
    for(int i = 0; i < CONS ; i++)
    {
        printf("\n\nPor favor digite o nome d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %50[^\n]",array[i].name);
        printf("\n\nPor favor digite a materia d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %50[^\n]",array[i].registration);
        printf("\n\nPor favor digite o numero de registro da disciplina d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %d",&array[i].subjectNum);
        printf("\n\nPor favor digite a nota da PRIMEIRA provad d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %f",&array[i].av1);
        printf("\n\nPor favor digite a nota da SEGUNDA prova d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %f",&array[i].av2);
        array[i].mid = ((array[i].av1 * av1_weight) + (array[i].av2 * av2_weight)) / av1_weight + av2_weight;
    }

    for(int i = 0; i < CONS ; i++)
    {  
        printf("ALUNO: %s\nMEDIA PONDERADA: %.2f\n\n\n\n", array[i].name, array[i].mid);
    }


    return 0;
}