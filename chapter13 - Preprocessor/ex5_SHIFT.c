/**
    Write a macro that performs a binary shift
*/
#include <stdio.h>
#define ZERO 0
#define SHIFT(value, n)     (  ((n) > ZERO)  ?  ((value) <<= (n)) : ((value) >>= -(n)) )

int main (void){
    unsigned int w1 = -3;
    int n = 1;

    printf("%i", SHIFT(w1, n));
    return 0;
}