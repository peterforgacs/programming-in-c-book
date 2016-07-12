/*
Modify the sort function from Program 8.12 to take a third argument indicating
whether the array is to be sorted in ascending or descending order.Then modify
the sort algorithm to correctly sort the array into the indicated order.
 */

#include <stdio.h>

void displayMatrix (int a[]){
    int i;
    for ( i = 0; i < 16; ++i )
        printf ("%i ", a[i]);
    printf("\n");
}

// @param char order - a = ascending, d = decreasing 
void sort(int *a, int n, char order){
    int i, j, temp;
    
    // Ascending order - Getting bigger
    if ( order == 'a')
        for ( i = 0; i < n - 1 ; ++i )
            for ( j = i + 1; j < n; ++j )
                if ( a[i] > a[j] ){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    // Decreasing order - Getting smaller
     if (order == 'd')
        for ( i = 0; i < n - 1 ; ++i )
            for ( j = i + 1; j < n; ++j )
                if ( a[i] < a[j] ){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
    
    /*
    // Decreasing order - Getting smaller
    if (order == 'd')
        for ( i = n - 1; i >= 0; --i ){
            for ( j = i - 1; j >= 0; --j ){
                if (a[j] < a[i]){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }   
        }
     */
}

int main (void)
{
    int i;
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11 };
    int* arrayPtr = array; // same as &array[0]
    
    void sort (int a[], int n, char o);

    printf ("The array before the sort:\n");
    for ( i = 0; i < 16; ++i ){
        printf ("%i ", array[i]);
    }
    char order = 'd';
    
    sort(arrayPtr, 16, order);
    
    printf ("\n\nThe array after the sort:\n");
    for ( i = 0; i < 16; ++i )
        printf ("%i ", array[i]);
    printf ("\n");
    
    return 0;
}

