/**
Define a macro that gives the maximum of three values
*/
#include <stdio.h>

#define MAX (x,y) ( (x) > (y) ? (x) : (y) )
#define MAX3 (x,y,z)( ( MAX((x), (y)) < (z) ) ? (z) : ( MAX((x), (y)) ) )

int main(int argc, char *argv[]){
    int x = 0;
    int y = 1;
    int z = 2;
    printf( "%i", BIGGEST(0, 1, 2) );
    return 0;
}