/*
 * ex3
 * Modify Program 8.8 so that the value of epsilon is passed as an argument to the
 * function.Try experimenting with different values of epsilon to see the effect that
 * it has on the value of the square root.
 * 
 * ex4
 * Modify Program 8.8 so that the value of guess is printed each time through the
 * while loop. Notice how quickly the value of guess converges to the square root.
 * What conclusions can you reach about the number of iterations through the loop,
 * the number whose square root is being calculated, and the value of the initial
 * guess?
 * 
 * ex5
 * The criteria used for termination of the loop in the squareRoot function of
 * Program 8.8 is not suitable for use when computing the square root of very large
 * or very small numbers. Rather than comparing the difference between the value of
 * x and the value of guess squared , the program should compare the ratio of the two values
 * to 1.The closer this ratio gets to 1, the more accurate the approximation of the
 * square root.
 * 
 * ex6
 * Modify Program 8.8 so this new termination criteria is used.
 * Modify Program 8.8 so that the squareRoot function accepts a double precision
 * argument and returns the result as a double precision value. Be certain to change
 * the value of the variable epsilon to reflect the fact that double precision variables
 * are now being used.
 */

#include <stdio.h>

// Function to calculate the absolute value of a number
float absoluteValue (float x){
    if ( x < 0 )
    x = -x;
    return (x);
}

// Function to compute the square root of a number
float squareRoot (double x, double epsilon){
    float guess         = 1.0;
    while ( absoluteValue (1 - guess * guess / x ) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
        printf("%f\n", guess);
    }
    return guess;
}

int main (void)
{
    printf ("squareRoot (2.0) = %f\n", squareRoot (2.0, 0.00001));
    printf ("squareRoot (144.0) = %f\n", squareRoot (144.0, 0.0001));
    printf ("squareRoot (17.5) = %f\n", squareRoot (17.5, 0.00001));
    return 0;
}