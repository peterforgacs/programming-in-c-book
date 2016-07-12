#include <stdio.h>

int main(void){
    printf(" CONTENT \n");
    printf(" n    n2 \n");
    printf("---------\n");
    
    for (double i = 0.0; i <= 10; ++i){
        printf ("%-.2f    %f\n", i, i);
    }
}