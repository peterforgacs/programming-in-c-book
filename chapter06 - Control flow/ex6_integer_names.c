/*
Write a program that takes an integer keyed in from the terminal and extracts and
displays each digit of the integer in English. So, if the user types in 932, the pro-
gram should display
nine three two
Remember to display “zero” if the user types in just a 0. (Note: This exercise is a
hard one!)
 */

#include <stdio.h>

int main(void){
    int   input;
    int   decimal;
    int   l_digit;
    
    printf("Enter an integer:\n>> ");
    scanf ("%i", &input);
    
    if (0 <= input && input < 10){
        decimal = 1;
    }
    else if (10 <= input && input < 100){
        decimal = 10;
    }
    else if (100 <= input && input < 1000){
        decimal = 100;
    } else {
        printf("Too big or not a number!\n");
        return 0;
    }
    
    while (decimal != 0){
        l_digit  = (input - (input % decimal)) / decimal;
        decimal /= 10;
        input    = l_digit * decimal;

        switch (l_digit){
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            case 0:
                printf("zero ");
                break; 
            default:
                printf("something happened");
        }
    }
    printf("\n");
    return 0;
}

