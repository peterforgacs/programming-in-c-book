// Program to echo characters until the end of file

#include <stdio.h>

int main (void)
{
	int c;

	while (( c = getchar()) != EOF )
		putchar (c);
	
	return 0;
}