/*
 * Deterimine how many bits contained in an int
 * Only works with unsigned ints
 */

#include <stdio.h>

void intSize (){
    unsigned int w1 = ~0;
    unsigned int w2 = 0;
    int counter = 0;
    
    while ( w1 != w2 ){
        w1 >>= 1;
        ++counter;
    }
    
    printf("%i", counter);
}

int main ( void ){
    
    intSize();
}