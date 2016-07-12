#include <stdio.h>

char intToString(int num){
    return num;
}

int main(void){
    int num = 77;
    char c = intToString(num);
    printf("%c", c);
}