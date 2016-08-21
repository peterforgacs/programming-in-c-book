/** 
Define a macro the gives the minimum of two values
*/
#include <stdio.h>
#define MIN(x, y) (  (x) > (y) ? (y) : (x) )

int main(int argc, char *argv[]){
    int x = 2, y = 4;
    printf( "%i", MIN(x,y));

    return 0;
}