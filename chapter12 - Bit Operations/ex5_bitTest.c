#include <stdio.h>

int bitSet ( unsigned int test, int index){
    unsigned int bit = test >> (32 - index);
    if ( bit > 0 )
        return 1;
    return 0;
}

int main ( void ){
    unsigned int n = 2;
    printf("%i", bitSet(n, 32));
    return 0;
}