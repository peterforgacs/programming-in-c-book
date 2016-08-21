#include <stdio.h>

int main(void){
	int n = 1;
	int bytes = sizeof(n);
	int bits = bytes * 8;
	printf("The size of %i in the memory is %i bytes which is %i bits. \n", n, bytes, bits);
	return 0;
}
