#include <stdio.h>

int main(void){
	char c = 'a';
	int bytes = sizeof(c);
	int bits = bytes * 8;
	printf("Char %c is %i bytes which is %i bits.\n", c, bytes, bits);
}
