#include <stdio.h>

int main(){

    float fahr, celsius;
    int start, stop, step;

    start = 300;
    stop = 0;
    step = 20;


    for (fahr = start; fahr >= stop; fahr -= step) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr -= step;
        }
    }


