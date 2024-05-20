#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct Tarefa{
    char title[50],creation_date[50],data_de_vencimento[50],status[50];
} Tarefa;

int main(){
    int adding = 1, size = 0,capacity = 10;
    Tarefa *tarefa = malloc(capacity * sizeof(Tarefa));
    while(adding){
        int op = 0;
        printf("\n\n\n\n[1] - Add new tarefa\n[2] - Search tarefa\n[3] - Atualizar tarefa\n[4] - Delete tarefa\n[5] - Leave\n\n\n");
        do{
            printf("\n>>>  ");
            scanf("%d",&op);
        } while(op <=0 || op > 5);

        Tarefa new_tarefa;
        char search[50];
        int bool = 1;
        switch (op)
        {
            case 1:
                printf("\nTitle:\t");
                scanf("%s",new_tarefa.title);
                printf("\nCreation date (format: DD/MM/YYYY):\t");
                scanf("%s",new_tarefa.creation_date);
                printf("\nVencimento date: ");
                scanf("%s",new_tarefa.data_de_vencimento);

                printf("1- completed\t 2- em andamento\t3- pendente");
                do{
                    printf("\n>>>  ");
                    scanf("%d",&op);
                } while(op<=0 || op > 3);

                switch (op)
                {
                case 1:
                    strcpy(new_tarefa.status, "COMPLETE");
                    break;
                
                case 2:
                    strcpy(new_tarefa.status, "EM ANDAMENTO");
                    break;

                case 3:
                    strcpy(new_tarefa.status, "PENDENTE");
                    break;
                }

                if(size == capacity){
                    capacity *= 2;
                    tarefa = realloc(tarefa, capacity * sizeof(Tarefa));
                }
                tarefa[size] = new_tarefa;
                size++;
                break;
        
            case 2:
                printf("\n\nTitle of the tarefa that you want search:\t");
                scanf("%s",search);
                for(int i=0; i<size; i++){
                    if(!(strcmp(search,tarefa[i].title))){
                        printf("\ntitle:\t\t\t%s",tarefa[i].title);
                        printf("\ncreation date:\t\t%s",tarefa[i].creation_date);
                        printf("\nvencimento date:\t%s",tarefa[i].data_de_vencimento);
                        printf("\nstatus:\t\t\t%s",tarefa[i].status);
                        bool = 0;
                    }
                }
                if(bool){
                    printf("\n\nTITLE NOT FOUND :(");
                }
                break;
        
            case 3:
                printf("\n\nTitle of the tarefa that you want edit:\t");
                scanf("%s",search);
                for(int i=0; i<size; i++){
                    if(!(strcmp(search,tarefa[i].title))){

                        printf("\n\tOLD DATA");
                        printf("\ntitle:\t\t\t%s",tarefa[i].title);
                        printf("\ncreation date:\t\t%s",tarefa[i].creation_date);
                        printf("\nvencimento date:\t%s",tarefa[i].data_de_vencimento);
                        printf("\nstatus:\t\t\t%s",tarefa[i].status);

                        printf("\n\n\tNEW DATA");
                        printf("\nnew title:\t\t\t");
                        scanf("%s",tarefa[i].title);
                        printf("\nnew creation date:\t\t");
                        scanf("%s",tarefa[i].creation_date);
                        printf("\nnew vencimento date:\t");
                        scanf("%s",tarefa[i].data_de_vencimento);
                        printf("\n1- completed\t 2- em andamento\t3- pendente");
                        do{
                            printf("\n>>>  ");
                            scanf("%d",&op);
                        } while(op<=0 || op > 3);
                        switch (op)
                        {
                        case 1:
                            strcpy(tarefa[i].status, "COMPLETE");
                            break;
                        case 2:
                            strcpy(tarefa[i].status, "EM ANDAMENTO");
                            break;
                        case 3:
                            strcpy(tarefa[i].status, "PENDENTE");
                            break;
                        }
                        bool = 0;
                    }
                }
                if(bool){
                    printf("\n\nTITLE NOT FOUND :(");
                }
                break;
            
            case 4:
                printf("\n\nTitle of the tarefa that you want search:\t");
                scanf("%s",search);
                for(int i=0; i<size; i++){
                    if(!(strcmp(search,tarefa[i].title))){

                        if(size > 1){
                            tarefa[i] = tarefa[size-1];
                            size--;
                        } else{
                            free(tarefa);
                        }
                        bool = 0;
                    }
                }
                if(bool){
                    printf("\n\nTITLE NOT FOUND :(");
                }
                break;
            
            default:
                adding = 0;
                break;
        }


    }
    printf("\nTHANKS!");
    free(tarefa);
}