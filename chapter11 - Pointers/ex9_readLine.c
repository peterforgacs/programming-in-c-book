#include <stdio.h>

void readLine ( char *ptr )
{
    char character;
    
    do {
        character = getchar ();
        *ptr      = character;
        ++ptr;
    } while ( character != '\n');
    
    *ptr = '\0';
}

int main(void){
    char line[81];
    
    readLine (line);
    
    char *ptr = line;           // Printing out with a pointer
    while ( *ptr != '\0' ){
        printf("%c", *ptr);
        ++ptr;
    }
    
    printf("%s", line);         // Printing out as a character string
    
    return 0;
}