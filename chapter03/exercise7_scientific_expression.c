#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    double expr = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8);
    printf("The expressions value is %g in scientific notation\n", expr);
    printf("By setting the precision we can display all the values if the type allows it \n"
            "%.17f \n"
            , expr);
    
    return (EXIT_SUCCESS);
}

