/**
    Define a type functionpointer that represents a pointer to a function.
*/
#include <stdio.h>
// int the return type of the function
// (*FunctionPtr) the name of the defined type
// (void) the arguments for the function
typedef int(*FunctionPtr)(void);

int testFunction (){
    return 0;
}

int main(){
    FunctionPtr myPointer = testFunction;
    printf("%i", myPointer() );
    return 0;
}