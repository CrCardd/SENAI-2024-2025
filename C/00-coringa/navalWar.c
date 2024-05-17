#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 80

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
    int campoP1[TAM][TAM] = {0}, campoP2[TAM][TAM] = {0};
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
                    if(campoP2[y][x+i] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    campoP2[y][x+i] = 1;
                }
                del(P2,pc,&qtdpc);
                break;
            
            case 1:
                if(y+P2[pc] >= TAM){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    if(campoP2[y+i][x] != 0){
                        bool = 0;
                    }
                }
                if(!bool){
                    break;
                }
                for( int i = 0; i < P2[pc] ; i ++){
                    campoP2[y+i][x] = 1;
                }
                del(P2,pc,&qtdpc);
                break;
        }
    }
    
    for( int l = 0; l < TAM ; l++ ){
        for ( int c = 0 ; c < TAM ; c++ ){
            if(campoP2[l][c]){
                printf("\x1b[34mO \x1b[0m");
            } else{
                printf("%d ",campoP2[l][c]);
            }
        }
        printf("\n");
    }

  return 0;
}
