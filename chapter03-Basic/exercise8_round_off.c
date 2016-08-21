// Rounds of integers to the next larges even multiple of another integer
#include <stdio.h>

int main(void){
    int   i = 996;
    int   j = 4;
    int exp = (i + j) - (i % j);
    printf("Expression is %i", exp);
}
