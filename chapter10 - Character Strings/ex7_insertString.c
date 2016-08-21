/*
 * Insert one character string into an other.
 */

#include <stdio.h>

int lengthOf(char source []){
    int counter = 0;
    
    while(source[counter] != '\0')
        ++counter;
  
    return counter;
}

void insertString (char source [100], char insert [4], int start){
    int end = start + lengthOf(insert);     // The last index we must overwrite in source
    int i = start, j = 0;
    char buffer;
    
    while ( i < end ){
        buffer          = source[i];        // Store the original character
        source[i]       = insert[j];        // Swap with insert
        source[end + j] = buffer;           // Insert back into the end of the insert
        ++i, ++j;
    }
}

int main(void){
    char source [100] = "The wrong son.";
    insertString (source, "per", 10);
    
    int i;
    for ( i = 0; i < 100; ++i){
        printf("%c", source[i]);
    }
}