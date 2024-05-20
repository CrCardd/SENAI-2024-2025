#include <stdio.h>

int play(int fi, int *row , int *col){
    fi-=1;
    *row = fi/3;
    *col = fi%3;
}
void printTic(int mtrz[][3]){
    printf("\n\n_____________");
    for( int l = 0 ; l < 3 ; l ++ ){
        printf("\n");
        for( int c = 0 ; c < 3 ; c ++ ){
            if(mtrz[l][c] == 1){
                printf("| X ");
            } else if(mtrz[l][c] == 2){
                printf("| O ");
            } else{
                printf("|   ");
            }
        }
        printf("|\n----+---+----");
    }
    printf("\r-------------");

}
int main(){
    int titato[3][3] = {0}, row, col;
    int fi = 0,time;
    printf("\n\n\n  1   2   3\n\n  4   5   6\n\n  7   8   9\n");
    for (int i = 0 ; 1 ; i ++ ){
        back:
        printf("\nJOGADOR %d\nInsira a jogada:",i%2+1);
        do{
            printf("\n>>>  ");
            scanf(" %d",&fi);
        } while ( fi < 1 || fi > 9);
        
        play(fi, &row , &col);
        
        if ( titato[row][col] != 0){
            goto back;
        }

        time = i%2+1;
        switch (time)
        {
        case 1:
            titato[row][col] = 1;    
            break;
        case 2:
            titato[row][col] = 2;
            break;
        }
        printTic(titato);
        
    }
    return 0;
}