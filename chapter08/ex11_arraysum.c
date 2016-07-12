/*
Write a function called arraySum that takes two arguments: an integer array and
the number of elements in the array. Have the function return as its result the sum
of the elements in the array.
*/
#include <stdio.h>

int arraySum(int arr[], int length){
    int i;
    int sum = 0;
    for ( i = 0; i < length; ++i){
        sum += arr[i];
    }
    return sum;
}

int main(void){
    int arr[3] = {1, 2, 3};
    int sum = arraySum(arr, 3);
    printf("Sum value: %i\n", sum);
}
