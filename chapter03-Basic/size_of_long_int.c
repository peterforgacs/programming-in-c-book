#include <stdio.h>

void print_int_size(int);

int main(void){
	short int i1;
	int i2;
	unsigned int i3;
	long int i4;
	unsigned long int i5;
	long long int i6;
	unsigned long long int i7;
        
        printf("short int %i", );
	return 0;
}

void print_int_size(int i){
    int bytes = sizeof(i);
    int bits = bytes * 8;
}


    