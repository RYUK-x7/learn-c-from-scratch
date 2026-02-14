#include<stdio.h>

int main(){

    int sec=60;
    int min=60;
    int hour=24;
    int day=365;

    long int totalsec;

    totalsec = day*hour*min*sec;

    printf("There are %ld seconds in a year", totalsec);

return 0;
}

