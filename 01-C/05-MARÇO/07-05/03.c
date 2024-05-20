#include <stdio.h>
#define CONS 5

typedef struct
{
    char name[50];
    int registrationNum;
    float av1,av2,av3,mid;
} Student;

int main(){

    Student array[CONS];
    for(int i = 0; i < CONS ; i++)
    {
        printf("\n\nPor favor digite o nome d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %50[^\n]",array[i].name);
        printf("\n\nPor favor digite o numero de registro d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %d",&array[i].registrationNum);
        printf("\n\nPor favor digite a nota da PRIMEIRA provad d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %f",&array[i].av1);
        printf("\n\nPor favor digite a nota da SEGUNDA prova d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %f",&array[i].av2);
        printf("\n\nPor favor digite a nota da TERCEIRA prova d@ [%d] alun@:\n>>>  ",i+1);
        scanf(" %f",&array[i].av3);
        array[i].mid = (array[i].av1+array[i].av2+array[i].av3) / 3;
    }

    int aux_high_note = 0, aux_high_mid=-1, aux_low_mid=0;
    for(int i = 0; i < CONS ; i++)
    {  
        if(array[i].av1 > aux_high_note)
        {
            aux_high_note = array[i].av1;
        }

        if(array[i].mid > aux_high_mid)
        {
            aux_high_mid = array[i].mid;
        }

        if(array[i].mid < aux_high_mid*100)
        {
            aux_low_mid = array[i].mid;
        }

        printf("ALUNO: %s\nCONDICAO: %s\nMEDIA GERAL: %.2f\n\n\n\n", array[i].name, (array[i].mid>=6)?"APROVADO":"REPROVADO", array[i].mid);
    }


    return 0;
}