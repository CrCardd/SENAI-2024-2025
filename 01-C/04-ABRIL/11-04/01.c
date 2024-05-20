#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int input(char str[]){
    int a;
    printf("%s",str);
    do{
        printf("\n>>>  ");
        scanf("%d",&a);
    } while (a<=0);
    return a;
}


int main(){
    srand(time(NULL));
    FILE *arq;
    char mater[4][20] = {"Matematica","Portugues","Artes","Educação fisíca"};
    arq = fopen("notas.txt","w");
    int qtd_alun = input("Por favor insira a quantidade de alunos que serão adicionados:");
    char **alunos = (char**)malloc( qtd_alun * sizeof(char*));
    for( int i = 0 ; i < qtd_alun ; i ++ ){
        alunos[i] = (char*)malloc( 50 * sizeof(char));
        printf("\nPor favor bote >///<     o nome do [%d°] aluno:",i+1);
        scanf(" %49[^\n]",alunos[i]);
    }
    



    for( int i = 0 ; i < qtd_alun ; i ++ ){
        fprintf(arq,"%s\n",alunos[i]);
        for( int j = 0 ; j < 4 ; j ++ ){
            int not = (rand()%100)+60;
            fprintf(arq,"[ %s ]:\t%d\n",mater[j],not);
        }
        fprintf(arq,"\n\n");
    }
    
    return 0;
}