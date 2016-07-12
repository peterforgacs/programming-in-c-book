//Write a program that calculates the average of an array of 10 floating-point values.
#include <stdio.h>

int main(void){
    int index;
    float sum = 0;
    float arr [10] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.6, 0.7, 0.8, 0.9, 1.0};
    
    for (index = 0; index < 10; ++index){
        sum += arr[index];
    }
    
    float average = sum / 10;
    printf ("average %f\n", average);
    return 0;
}

