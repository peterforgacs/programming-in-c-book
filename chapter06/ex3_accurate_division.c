/*
Write a program that accepts two integer values typed in by the user. Display the
result of dividing the first integer by the second, to three-decimal-place accuracy.
Remember to have the program check for division by zero.
 */

#include <stdio.h>

int main(void){
    int l_value,
        r_value;
    
    printf("Enter two numbers: ");
    scanf ("%i %i",&l_value, &r_value);
    
    if (r_value){
        // Dividing with 1 float always creates a float as a result
        printf("%.3f\n", (float) l_value / r_value);
    } else {
        printf("Cant divide by zero!\n");
    }
    
    return 0;
}