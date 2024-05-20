#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50],lastname[50];
    int age;
} Owner;

typedef struct
{
    char marca[50],year[50],color[50],placa[50],modelo[50];
    Owner owner[50];
} Veiculo;

int main(){

    FILE *arq;
    arq = fopen("note.txt","w");
    int op,current_year;
    char time[50];
    printf("\t\t--===WELCOME TO PARKTOP!===--");
    printf("\n\n\n- Please inser how many veiculos you wanna register:");
    do{
        printf("\n>>>  ");
        scanf("%d",&op);
    } while(op <= 0);

    printf("\n\n\nPlease insert the atual year:");
    do{
        printf("\n>>>  ");
        scanf("%d",&current_year);
    } while(current_year <= 0);

    Veiculo *veiculo = malloc( op * sizeof(veiculo));
    for(int i=0; i<op; i++){
        int birth_year;
        printf("\n\n\n\nmarca of the veiculo:\n>>>  ");
        scanf("%s",veiculo[i].marca);
        printf("\n\nyear of the veiculo:\n>>>  ");
        scanf("%s",veiculo[i].year);
        printf("\n\ncolor of the veiculo:\n>>>  ");
        scanf("%s",veiculo[i].color);
        printf("\n\nplaca of the veiculo:\n>>>  ");
        scanf("%s",veiculo[i].placa);
        printf("\n\nmodelo of the veiculo:\n>>>  ");
        scanf("%s",veiculo[i].modelo);
        printf("\n\nname of the owner:\n>>>  ");
        scanf("%s",veiculo[i].owner->name);
        printf("\n\nlast name of the owner:\n>>>  ");
        scanf("%s",veiculo[i].owner->lastname);
        printf("\n\nyear of the owner birth (format: YYYY):");
        do{
            printf("\n>>>  ");
            scanf("%d",&birth_year);
        } while(birth_year <= 0);
        veiculo[i].owner->age = current_year - birth_year;

        printf("\n\nHours and minutes (format: HH:MM):\n>>>  ");
        scanf("%s",time);

        fprintf(arq,"\n\n\n\nmarca of the veiculo: %s\nyear of the veiculo: %s\ncolor of the veiculo: %s\nplaca of the veiculo: %s\nnmodelo of the veiculo: %s\nname of the owner: %s %s\nage of the owner: %d\n%s",veiculo[i].marca,veiculo[i].year,veiculo[i].color,veiculo[i].placa,veiculo[i].modelo,veiculo[i].owner->name,veiculo[i].owner->lastname,veiculo[i].owner->age,time);
    }

    printf("\n\nTHANKS!");
    free(veiculo);

    return 0;
}
