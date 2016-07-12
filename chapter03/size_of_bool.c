#include <stdio.h>

int main(void){
	_Bool myBool = 0;
	int bytes = sizeof(myBool);
	int bits = bytes * 8;
	printf("Bool %i is %i bytes which is %i bits.\n", myBool, bytes, bits);
}
