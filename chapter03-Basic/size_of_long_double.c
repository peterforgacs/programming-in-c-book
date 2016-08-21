#include <stdio.h>

int main(void){
	long double myDouble = 1.2;
	int bytes = sizeof(myDouble);
	int bits = bytes * 8;
	printf("Bool %Lf is %i bytes which is %i bits.\n", myDouble, bytes, bits);
}
