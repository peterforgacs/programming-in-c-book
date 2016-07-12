/*
 * An equation of the form
 * ax 2 + bx + c = 0
 * is known as a quadratic equation.The values of a, b, and c in the preceding example
 * represent constant values. So
 * 4x - 17x - 15 = 0
 * represents a quadratic equation where a = 4, b = –17, and c = –15.The values of x
 * that satisfy a particular quadratic equation, known as the roots of the equation, can
 * be calculated by substituting the values of a, b, and c into the following two
 * formulas:
 * If the value of b 2 –4ac, called the discriminant, is less than zero, the roots of the
 * equation, x 1 and x 2 , are imaginary numbers.
 * Write a program to solve a quadratic equation.The program should allow
 * the user to enter the values for a, b, and c. If the discriminant is less than
 * zero, a message should be displayed that the roots are imaginary; otherwise,
 * the program should then proceed to calculate and display the two roots of
 * the equation. (Note: Be certain to make use of the squareRoot function that
 * you developed in this chapter.)
 */

#include <stdio.h>

// Function to calculate the absolute value of a number
float absoluteValue (float x){
    if ( x < 0 )
        x = -x;
    return (x);
}

// Function to compute the square root of a number
float squareRoot (double x){
    static double epsilon = 0.0001;
    float guess           = 1.0;
    while ( absoluteValue (1 - ( guess * guess / x )) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
    }
    return guess;
}

// Function to to create a power
long int x_to_the_n (int x, int n){
    int i;
    long int sum = 1;
    for (i = 1; i <= n; ++i)
        sum *= x;
    return sum;
}

int main(void){
    float a, b, c;
    printf("Write 3 numbers: ");
    scanf ("%f %f %f", &a, &b, &c);
    
    long int discriminant = x_to_the_n(b, 2) - (4 * a * c);
    if (discriminant < 0){
        printf("Sorry Imaginary Solution Only!\n");
    } else { 
        float x1 = ( -b + ( squareRoot( x_to_the_n(b, 2) - ( 4 * a * c ) ))) / ( 2 * a );
        float x2 = ( -b - ( squareRoot( x_to_the_n(b, 2) - ( 4 * a * c ) ))) / ( 2 * a );
        printf("x1 : %f x2 : %f\n", x1, x2);
    }
    return 0;
}