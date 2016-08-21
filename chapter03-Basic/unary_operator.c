#include <stdio.h>

int main(void){
    int a = 25;
    int b = -25;
    printf("%i with unary operator %i\n", a, -a);
    // -- Does not work because it will subtract
    printf("%i with double unary operator %i\n", a, --a);
    printf("%i with unary operator %i\n", b, -b);
    printf("%i with double unary operator %i\n", b, --b);
    // Test with +- does not work
    printf("%i with + - unary operator %i\n", a, +-a);
}

