/*
 * Write a function that raises an integer to a positive integer power. Call the func-
 * tion x_to_the_n taking two integer arguments x and n . Have the function return
 * a long int , which represents the results of calculating x n .
 */

#include <stdio.h>

long int x_to_the_n (int x, int n){
    int i;
    long int sum = 1;
    
    for (i = 1; i <= n; ++i)
        sum *= x;
    
    return sum;
}

int main(void){
    printf ("%li", x_to_the_n(4, 2));
    return 0;
}
