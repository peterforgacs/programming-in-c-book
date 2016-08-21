/*
Write a program to generate and display a table of n and n 2 , for integer values of n
ranging from 1 to 10. Be certain to print appropriate column headings. 
 */
#include <stdio.h>

int main(void){
    printf (" n    n^2\n");
    printf ("---  -----\n");
    
    for (int i = 1; i <= 10; ++i){
        printf ("%.2i    %.2i\n", i, i*i);
    }
    
    return 0;
}