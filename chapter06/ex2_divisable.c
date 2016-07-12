/*
Write a program that asks the user to type in two integer values at the terminal.
Test these two numbers to determine if the first is evenly divisible by the second,
and then display an appropriate message at the terminal. 
 */

#include <stdio.h>

int main(void){
    int l_value,
        r_value;
    
    printf("Enter two numbers: ");
    scanf ("%i %i",&l_value, &r_value);
    
    if (r_value){
        if (l_value % r_value){
            printf("Its NOT evenly divisable!\n");
        } else {
            printf("Its evenly divisable!\n");
        }
    } else {
        printf("Cant divide by zero!");
    }
    
    return 0;
}