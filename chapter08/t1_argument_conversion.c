/*
 * Compiler automatically converts your arguments to the appropriate types
 * when a function is called, but only if you have placed the function’s definition 
 * or have declared the function and its argument types before the call
 */

#include <stdio.h>

float test(float y){
    return y;
}

int main(void){
    int x = 0;
    printf("%f", test(x));
}