#include <stdio.h>
#include <stdlib.h>

int isMinus (const char c){
    if ( c == '-' )
        return 1;
    else
        return 0;
}

int strToInt (const char string []){
    int isMinus (const char c);
    int i, intValue, result = 0;
    int start = isMinus (string[0]);
    
    
    for ( i = start; string[i] >= '0' && string[i] <= '9'; ++i ){
        intValue = string[i] - '0';
        result   = result * 10 + intValue;  // Value stored in result gets incremented by 1 decimal place ( *10 )
    }
    
    if (start)      // 
        result = 0 - result;
    
    return result;
}
int main(void){
    int strToInt (const char string[]);
    
    printf("%i\n", strToInt("256"));
    return EXIT_SUCCESS;
}