/*
Modify Program 8.4 so the value of triangularNumber is returned by the func-
tion.Then go back to Program 5.5 and change that program so that it calls the
new version of the calculateTriangularNumber function.
 */
#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int i, triangularNumber = 0;
    for ( i = 1; i <= n; ++i )
        triangularNumber += i;
    
    return triangularNumber;
}

int main (void)
{
    int i, limit, triangular;
    int num[3] = {10, 20, 50};
    for ( i = 0; i < 3; ++i ){
        limit      = num[i];
        triangular = calculateTriangularNumber (limit);
        printf ("Triangular number %i is %i\n", limit, triangular);
    }
    return 0;
}