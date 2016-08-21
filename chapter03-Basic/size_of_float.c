#include <stdio.h>

void print_float_size(float);
void print_double_size(double);

int main(void){
	// Floats
	float f = 1.23;
	float grounded_float = 1.25f;
	float scientific = 2.5e-3;
	print_float_size(f);
	print_float_size(scientific);
	print_float_size(grounded_float);
 	// Doubles
	double d = 1;
	print_double_size(d);
	return 0;
}

void print_float_size (float f){
	// Prints the size of a float in memory
	// @param f float
	int bytes = sizeof(f);
	int bits = bytes * 8;
	printf("Float %g size is %i bytes which is %i bits.\n", f, bytes, bits);
}

void print_double_size (double d){
	// Prints the size of a double in memory
	// @param d double
	int bytes = sizeof(d);
	int bits = bytes * 8;
	printf("Double %f size is %i bytes which is %i bits.\n", d, bytes, bits); 
}
