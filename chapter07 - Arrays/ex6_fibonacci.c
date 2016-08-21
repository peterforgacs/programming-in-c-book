/*
You don’t need to use an array to generate Fibonacci numbers.You can simply use
three variables: two to store the previous two Fibonacci numbers and one to store
the current one. Rewrite Program 7.3 so that arrays are not used. Because you’re
no longer using an array, you need to display each Fibonacci number as you gen-
erate it.
 */

// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>
int main (void)
{
    int i, old, older, new;
    older  = 0;
    old    = 1;
    printf ("%i %i ", older, old);

    for (i = 2; i < 15; ++i ){
        //Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
        new = older + old;
        printf("%i ", new);
        older  = old;
        old    = new;
    }
    return 0;
}

