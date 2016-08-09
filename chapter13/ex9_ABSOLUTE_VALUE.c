/**
    Create a macro that calculates the absolute value of the input
*/

#include <stdio.h>
#define ABSOLUTE_VALUE(n)       ( (n > 0) ? (n) : -(n)  )

int main(void){
    int n = 5;
    int delta = 1;
    printf("%i\n", ABSOLUTE_VALUE(n + delta));

    n = -5;
    printf("%i\n", ABSOLUTE_VALUE(n));
    return 0;
}