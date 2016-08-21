/*
A matrix M with i rows, j columns can be transposed into a matrix N having j rows
and i columns by simply setting the value of N a,b equal to the value of M b,a for all
relevant values of a and b.
a. Write a function transposeMatrix that takes as an argument a 4 x 5 matrix
and a 5 x 4 matrix. Have the function transpose the 4 x 5 matrix and store
the results in the 5 x 4 matrix. Also write a main routine to test the function.
b. Using variable-length arrays, rewrite the transposeMatrix function devel-
oped in exercise 12a to take the number of rows and columns as arguments,
and to transpose the matrix of the specified dimensions.

0 1 2 3
4 5 6 7
8 9 7 8
0 1 2 3
0 1 2 3

0 4 8 0 0
1 5 9 1 1
0 1 2 3 4
0 1 2 3 4
*/

#include <stdio.h>

void displayMatrix(int row, int col, int n[row][col]){
    printf("       Matrix[%i][%i]\n", row, col);
    printf("--------------------------");
    
    int i, j;
    for ( i = 0; i < row; ++i ){
        printf ("\n");
        for (j = 0; j < col; ++j){
            printf("%4i ", n[i][j]);
        }
    }
    printf("\n\n");
}

void transposeMatrix(int row, int col, int m[row][col], int n[col][row]){
    int i, j;
    for ( i = 0; i < row; ++i ){
        for ( j = 0; j < col; ++j ){
            n[j][i] = m[i][j];
        }
    }  
}

int main(void){
    int m[4][5] = {
                    { 1, 2, 3, 4, 5 },
                    { 6, 7, 8, 9, 1 },
                    { 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 1, 2 }   
                  };
    int n[5][4];
    transposeMatrix(4, 5, m, n);
    
    
    displayMatrix(4, 5, m);
    displayMatrix(5, 4, n);
    return 0;
}
