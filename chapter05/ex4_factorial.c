/*
    The factorial of an integer n, written n!, is the product of the consecutive integers
    1 through n . For example, 5 factorial is calculated as
    5!
    =
    5 x 4 x 3 x 2 x 1
    =
    120
    Write a program to generate and print a table of the first 10 factorials.
 */

#include <stdio.h>

int main(void){
    // Table headers
    printf(" n    n! \n");
    printf("---  ----\n");
    
    for (int i = 1; i <= 10; ++i){
        
        int result = 1;
        for (int j = 1; j <= i; ++j){
            result *= j;
        }
        printf("%2i    %2i\n", i, result);
    }
    
}