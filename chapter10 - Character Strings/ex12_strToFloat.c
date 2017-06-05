#include <stdio.h>
#include <stdbool.h>

int lengthOf(const char string []){
    int counter = 0;
    while (string[counter] != '\0')
        ++counter;
    
    return counter;
}

float strToFloat(const char string []){
    int length = lengthOf(string);
    int i, decimalPointLocation;
    float number;
    float result        = 0;
    float decimalResult = 0;
    bool minus          = false;
    
    if ( string[i] == '-'){
        i = 1;
        minus = true;
    } else
        i = 0;
    
    while ( string[i] != '.' && string[i] >= '0' && string[i] <= '9' ){         // Integers
        number = string[i] - '0';
        result = result * 10 + number; 
        ++i;
    }
    
    if ( string[i] == '.')
        decimalPointLocation = i;
    
    for ( i = length - 1; i > decimalPointLocation; --i ){                      // Decimals backwards 
        number = (string[i] - '0') / (float) 10;                                // float to avoid integer division
        decimalResult = (decimalResult / (float) 10) + number;
    }
    
    result += decimalResult; 
    
    if ( minus ) 
        result = 0 - result;
    
    return result;
}

int main(void){
    printf("%f\n", strToFloat("867.6921"));
    printf("%f\n", strToFloat("-867.6921"));
    return 0;
}