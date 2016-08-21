/**
    Create a macro that returns a nonzero number if the input is a special character
*/
#include <stdio.h>
#define IS_DIGIT(n)         (( (n) <= '9' ) && ( (n) >= '1' ) ? 1 : 0 )
#define IS_LOWER_CASE(c)    ( ( (c) >= 'a') && ( (c) <= 'z' ) ? 1 : 0 )
#define IS_UPPER_CASE(c)    ( ( (c) >= 'A' && (c) <= 'z') ? 1 : 0  )
#define IS_ALPHABETIC(c)    ( ( IS_UPPER_CASE(c) == 1 ) || ( IS_LOWER_CASE(c) == 1 ) ? 1 : 0 )
#define IS_SPECIAL(c)       ( (IS_ALPHABETIC(c) == 0) && (IS_DIGIT(c) == 0) ? 1 : 0  )

int main(void){
    char c = 'c';
    printf("%i\n", IS_SPECIAL(c) );
    
    c = '4';
    printf("%i\n", IS_SPECIAL(c) );

    c = '.';
    printf("%i\n", IS_SPECIAL(c) );
    return 0;
}