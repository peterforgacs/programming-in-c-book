/**
    Write a program that display the contents of a file at the terminal 20 lines at a time.
    After 20 lines wait for a character to be entered. If the character is q the program should stop.
    Any other character should invoke the next 20 lines.
*/
#include <stdio.h>

void getTwentyLines( FILE *in ){
  
}

int main (void)
{
	char inName[64];             							// Variable that holds the file names
	FILE *in;   											// File pointer

	// Get the file name from the user
	printf ("Enter the name of the file to be used: ");
	scanf ("%63s", inName);

	// Open input and output file names
	if ( (in = fopen (inName, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}

	char line[1000];													// Read in line
	char c;
	const int limit = 20;
	int i           = 0;
	int finished    = 0;

	while ( !feof(in) | finished)										// While did not reach the end of file
	{
		
		fgets(line, sizeof line, in);
		printf("%s\n", line);
		++i;

		if ( i == 20 )
		{
			printf("Your command (q for quit): ");
			scanf("%c", &c);
			
			if (c == 'q')
			{
				finished = 1;
				break;
			} 

			else 
			{
				i = 0;
			}
		}
	}

	// Close files
	fclose(in);
}

