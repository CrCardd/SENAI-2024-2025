#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 15

void copy(int *original, int* copia, int qtdpc){
    for(int i = 0; i < qtdpc; i++ ){
        copia[i] = original[i];
    }
}

void del(int* array, int x, int* qtdpc){
    for( int i = x ; i < *qtdpc ; i ++ ){
        array[i] = array[i+1];
    }
    *qtdpc -=1;
}



int main(){
    srand(time(NULL));
    int campos[2][TAM][TAM] = {0};
    int pec[] = {5,4,4,2,2,2,3}, qtdpc = sizeof(pec)/sizeof(pec[0]);
    int P1[qtdpc], P2[qtdpc],x,y,pc,direc;
    
    
    copy(pec, P2, qtdpc);

    printf("\n\n\n\n");
    while(qtdpc > 0){
        pc = rand()%qtdpc;
        x = rand()%TAM;
        y = rand()%TAM;
        direc = rand()%2;
        int bool = 1;
        
        switch(direc){
            case 0:
                if(x+P2[pc] >= TAM){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    if(campos[0][y][x+i] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    campos[0][y][x+i] = 1;
                }
                del(P2,pc,&qtdpc);
                break;
            
            case 1:
                if(y+P2[pc] >= TAM){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    if(campos[0][y+i][x] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    campos[0][y+i][x] = 1;
                }
                del(P2,pc,&qtdpc);
                break;
        }
    }
    
    for( int l = 0; l < TAM ; l++ ){
        for ( int c = 0 ; c < TAM ; c++ ){
            if(campos[0][l][c]){
                printf("\x1b[34mO \x1b[0m ");
            } else{
                printf("%d  ",campos[0][l][c]);
            }
        }
        printf("\n");
    }
    
    
    
    
    printf("\n\n\n\n");
    qtdpc = sizeof(pec)/sizeof(pec[0]);
    copy(pec, P1, qtdpc);
    while(qtdpc > 0){
        // pc = rand()%qtdpc;
        // x = rand()%TAM;
        // y = rand()%TAM;
        // direc = rand()%2;
        printf("Por favor insira a peca que sera colocada:\n\n");
        for ( int i = 0; i < qtdpc ; i++ ){
            printf("[ %d ]\t",i+1);
        }
        printf("\n\n");
        for ( int i = 0; i < qtdpc ; i++ ){
            printf("[ %d ]\t",P1[i]);
        }
        do{
            printf("\n>>>  ");
            scanf(" %d",&pc);
        } while( pc < 1 || pc > qtdpc);
        
        printf("\n\n\nInsira sua posição:");
        do
        {
            printf("\n>>>  ");
            scanf("%d %d",&y,&x);
        } while ( (x >= TAM || x < 0) || (y >= TAM || y < 0));
        
        printf("\n\n1 - Horizontal\n2 - Vertical\n");
        do
        {
            printf("\n>>>  ");
            scanf(" %d",&direc);
        } while ( direc != 1 || direc != 2);
        direc-=1;

        
        int bool = 1;
        
        switch(direc){
            case 0:
                if(x+P1[pc] >= TAM){
                    break;
                }
                for( int i = 0; i < P1[pc] ; i ++){
                    if(campos[1][y][x+i] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P1[pc] ; i ++){
                    campos[1][y][x+i] = 1;
                }
                del(P1,pc,&qtdpc);
                break;
            
            case 1:
                if(y+P1[pc] >= TAM){
                    break;
                }
                for( int i = 0; i < P1[pc] ; i ++){
                    if(campos[1][y+i][x] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P1[pc] ; i ++){
                    campos[1][y+i][x] = 1;
                }
                del(P1,pc,&qtdpc);
                break;
        }
    }
    printf("\n\n\n\n\n");
    for( int l = 0; l < TAM ; l++ ){
        for ( int c = 0 ; c < TAM ; c++ ){
            if(campos[0][l][c]){
                printf("\x1b[34mO \x1b[0m ");
            } else{
                printf("%d  ",campos[0][l][c]);
            }
        }
        printf("\n");
    }

  return 0;
}

