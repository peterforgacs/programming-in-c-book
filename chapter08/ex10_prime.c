/*
 * Write a function prime that returns 1 if its argument is a prime number and
 * returns 0 otherwise. 
 */
#include <stdio.h>
#include <stdbool.h>

int prime(int n){
    int i;
    for ( i = 2; i < n; ++i ){
        if ( n % i == 0 )
            return 0;
    }
    
    return 1;
}

int main(void){
    int isPrime = 8;
    printf("%i returns %i\n",isPrime, prime(isPrime));
    return 0;
}
