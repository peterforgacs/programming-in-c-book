/**
    Write a program that writes columns m trough n of each line of a file to stdout.
    Have the program accept the values of m and n from the terminal.
*/
#include <stdio.h>

int main (void)
{
	char inName[64];             							// Variable that holds the file names
	FILE *in;   											// File pointers
	int  e;
    int m = 0;
    int n = 0;
    char c;

	// Get the file name from the user
	printf ("Enter the name of the file to be used: ");
	scanf ("%63s", inName);
    
    // Get m and n delimeter
    printf ("Enter m column delimeter: ");
	scanf ("%i", &m);

    printf ("Enter n column delimeter: ");
	scanf ("%i", &n);


	// Open input file
	if ( (in = fopen (inName, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", inName);
		return 1;
	}

    int i = 1;
	while( (e = getc (in)) != EOF)
    {	

		c = e;

        // Print if its between the delimeters
        if ( i >= m && i <= n )
        {
            printf ("%c" , c);
        }

        // End of line
		if ( e == '\n' )
		{
			i = 1;
            printf ("\n");
            continue;
		}

        ++i;
		
    }
	// Close files
	fclose(in);
}