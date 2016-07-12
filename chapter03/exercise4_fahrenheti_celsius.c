// Converts from fahrenheit to celsius

#include <stdio.h>

int main(void)
{
    int fahrenheit = 27;
    double celsius = (fahrenheit - 32) / 1.8;
    
    printf("%i F is %f C\n", fahrenheit, celsius);

}