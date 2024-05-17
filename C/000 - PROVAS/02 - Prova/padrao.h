#ifndef PADRAO_H
#define PADRAO_H
#include <stdlib.h>

    int generateMtr(int** mtr, int lin, int col){
        mtr = malloc( lin * sizeof(int*));
        for ( int i = 0 ; i < lin ; i ++ ){
            mtr[i] = malloc( col * sizeof(int));
        }
        return mtr;
    }

    int generateArray(int *array, int limit){
        array = malloc( limit * sizeof(int));
        return array;
    }

    int powst(int base, int exp){
        if(exp == 0){
            return 1;
        }
        return base * powst(base, exp-1);
    }

    


#endif 