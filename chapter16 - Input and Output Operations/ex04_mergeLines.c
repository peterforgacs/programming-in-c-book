/**
    Write a program that merges lines alternately from two fields and writes the result ot stdout.
    If one file has less lines than the other, the remaining lines from the large file should simply be copied to stdout.
*/
#include <stdio.h>

int main (void)
{
   char mergeFileName1[64], mergeFileName2[64];						// Variable that holds the file names
	FILE *merge1, *merge2;											// File pointers
	char line1[1000];
	char line2[1000];

	// Get the file name from the user
	printf ("Enter the name of the first merge file: ");
	scanf ("%63s", mergeFileName1);
	printf ("Enter the name of the second merge file: ");
	scanf ("%63s", mergeFileName2);

	// Open merge files
	if ( (merge1 = fopen (mergeFileName1, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", mergeFileName1);
		return 1;
	}

	if ( (merge2 = fopen (mergeFileName2, "r")) == NULL ){
		printf ("Can't open %s for reading.\n", mergeFileName2);
		return 1;
	}
    
	while( fgets(line1, sizeof line1, merge1) != NULL | fgets(line2, sizeof line2, merge2) != NULL )
    {	
		printf("%s", line1);
		printf("%s", line2);
    }

	// Close files
	fclose(merge1);
	fclose(merge2);

	printf ("\nMerge completed.\n");
}

