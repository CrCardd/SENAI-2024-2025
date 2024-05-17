#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int lin = 100, col = 100, tot = lin*col, bob = rand()%tot;
    int **cebol = (int**)malloc( lin * sizeof(int*));
    for( int i = 0; i < lin ; i++){
        cebol[i] = (int*)malloc( col * sizeof(int));
    }

    int bobL = (bob-1)/col, bobC=(bob-1)%col;
    
    



    free(cebol);
    return 0;
}