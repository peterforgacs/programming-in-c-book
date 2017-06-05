/**
    Write a program to copy one file to another,
    replacing all lowercase characters with their uppercase equivalents.
*/

// Program to copy one file to an other

#include <stdio.h>

int main (void)
{
	char inName[64], outName[64];
	FILE *in, *out;
	int  e;
    char c;

	// get file names from user
	printf ("Enter the name of the file to be copied: ");
	scanf ("%63s", inName);
	printf ("Enter the name of the output file: ");
	scanf ("%63s", outName);

	// open input and output files
	if ( (in = fopen (inName, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}

	if ( (out = fopen (outName, "w")) == NULL ){
		printf ("Can't open %s for writing.\n", outName);
		return 2;
	}

	// copy in to out
	while( (e = getc (in)) != EOF)
    {
        c = e;
        c = c - 'a' + 'A';  // Uppercase
		putc (c , out);
    }

	
	// Close open files
	fclose(in);
	fclose(out);

	printf ("File has been copied.\n");
}