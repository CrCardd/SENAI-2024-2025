#include <stdio.h>

typedef struct
{
    int hour, minute, seconds;
} Time;

typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    Time time;
    Date date;
    char description[99];
} Commitment;




int main(){


    return 0;
}