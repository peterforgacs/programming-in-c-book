/**
    Create a macro that gives nonzero value if a character is an alphabetic character
*/

#include <stdio.h>
#define IS_LOWER_CASE(c)    ( ( (c) >= 'a') && ( (c) <= 'z' ) ? 1 : 0 )
#define IS_UPPER_CASE(c)    ( ( (c) >= 'A' && (c) <= 'z') ? 1 : 0  )
#define IS_ALPHABETIC(c)    ( ( IS_UPPER_CASE(c) == 1 ) || ( IS_LOWER_CASE(c) == 1 ) ? 1 : 0 ) 

int main(void){
    char c = '#';
    printf("%i\n", IS_ALPHABETIC(c));
    c = 'c';
    printf("%i\n", IS_ALPHABETIC(c));
    return 0;
}