#ifndef ABOBORA_H
#define ABOBORA_H
    
    int generateArray(int *array,int limit){
        array = malloc( limit * sizeof(int));
        for ( int i = 0 ; i < limit ; i ++ ){
            array[i] = i+1;
        }
    return array;
    }

    int generateMtr(int **mtr, int limit){
        mtr = malloc(limit * sizeof(int));
        for( int i = 0 ; i < limit ; i ++ ){
            mtr[i] = malloc( limit * sizeof(int));
        }
        return mtr;
    }

    void changeValue(int*ptr){
        *ptr = 0;
    }


    void freeArray(int*array){
        free(array);
    }




#endif