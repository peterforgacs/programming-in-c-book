/*
 Write a program that acts as a simple “printing” calculator.The program should
allow the user to type in expressions of the form
number
operator
The following operators should be recognized by the program:
+
-
*
/
S
E
The S operator tells the program to set the “accumulator” to the typed-in number.
The E operator tells the program that execution is to end.The arithmetic opera-
tions are performed on the contents of the accumulator with the number that was
keyed in acting as the second operand.The following is a “sample run” showing
how the program should operate:
Begin Calculations
10 S
Set Accumulator to 10
= 10.000000
Contents of Accumulator
2 /
Divide by 2
= 5.000000
Contents of Accumulator
55 -
Subtract 55
-50.000000
100.25 S
Set Accumulator to 100.25
= 100.250000
4 *
Multiply by 4
= 401.000000
0 E
End of program
= 401.000000
End of Calculations.
Make certain that the program detects division by zero and also checks for
unknown operators.
 */
#include <stdio.h>

int main(void){
    // Declare variables
    float input_val;
    char input_op;
    float accumulator;
    _Bool running = 1;
    do {
        // Handle input
        printf(">> ");
        scanf ("%f %c",&input_val, &input_op);
        // Decide what to do with a switch
        switch (input_op){
            case 'S':
                accumulator = input_val;
                printf("%f\n", accumulator);
                break;
            case 'E':
                running = 0;
                printf("%f\nEnd of calculations.\n", accumulator);
                break;
            case '+':
                accumulator =+ input_val;
                printf("%f\n",accumulator);
                break;
            case '-':
                accumulator =- input_val;
                printf("%f\n", accumulator);
                break;
            case '*':
                accumulator *= input_val;
                printf("%f\n", accumulator);
                break;
            case '/':
                if (input_val){
                    accumulator /= input_val;
                    printf("%f\n", accumulator);
                    break;
                } else {
                    printf("Sorry cant divide by zero.\n");
                    break;
                }
            default:
                printf("Unknown operator\n");
        }
    } while(running);
        
    return 0;
}