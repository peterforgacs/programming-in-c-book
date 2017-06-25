/**
    Write a program to copy one file to another,
    replacing all lowercase characters with their uppercase equivalents.
*/

#include <stdio.h>

int main (void)
{
	char inName[64], outName[64];							// Variable that holds the file names
	FILE *in, *out;											// File pointers
	int  e;
    char c;

	// Get the file name from the user
	printf ("Enter the name of the file to be copied: ");
	scanf ("%63s", inName);
	printf ("Enter the name of the output file: ");
	scanf ("%63s", outName);

	// Open input and output file names
	if ( (in = fopen (inName, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}

	if ( (out = fopen (outName, "w")) == NULL ){
		printf ("Can't open %s for writing.\n", outName);
		return 2;
	}

	// Copy character by character
	while( (e = getc (in)) != EOF)
    {	
		c = e;
		
		// If the character is lowercase
		if ( 'a' <= e && e <= 'z' )
		{
			c = c - 'a' + 'A';  // Turn to uppercase
		}

		putc (c , out);
    }

	
	// Close files
	fclose(in);
	fclose(out);

	printf ("File has been copied.\n");
}