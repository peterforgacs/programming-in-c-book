/*
You developed Program 5.9 to reverse the digits of an integer typed in from the
terminal. However, this program does not function well if you type in a negative
number. Find out what happens in such a case and then modify the program so
that negative numbers are correctly handled. For example, if the number –8645 is
typed in, the output of the program should be 5468–. 
*/

#include <stdio.h>

int main(void){
    int num;
    int right_num;
    char symbol;
    
    printf("Enter a number (543) or (-569)\n>> ");
    scanf ("%i", &num);
   
    if (num < 0) {
        num = -num;
        symbol = '-';
    }
    printf(">> ");
    
    while (num != 0){
        right_num = num % 10;
        printf("%i", right_num);
        num /= 10;
    }
    
    printf("%c\n", symbol);
    
    return 0;
}