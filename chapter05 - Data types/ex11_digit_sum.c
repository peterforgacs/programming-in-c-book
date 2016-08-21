/*
    Write a program that calculates the sum of the digits of an integer. For example,
    the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.The program
    should accept any arbitrary integer typed in by the user. 
 */
#include <stdio.h>

int main(void){
    long long int input;
    printf("Give a positive number: ");
    scanf ("%lli", &input);
    
    int sum = 0;
    while (input > 0){
        sum   += input % 10;
        input /= 10;
    }
    printf("The sum of the digits : %i\n", sum);
    return 0;
}