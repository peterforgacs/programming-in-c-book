/**
    Write a macro that returns a non zero number if the character is uppercase
*/

#include <stdio.h>
#define IS_UPPER_CASE(c)    ( ( (c) >= 'A' && (c) <= 'z') ? 1 : 0  )

int main(void){
    char c = 'C';
    printf("%i", IS_UPPER_CASE(c));
    return 0;
}