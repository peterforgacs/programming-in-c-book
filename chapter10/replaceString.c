/*
 * Use findString, removeString and insertString to create a replaceString function
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    bool replaceString (char source [], char find [], char replace []);
    char source []= "Hello Bello";
    bool stillFound;
    
    do
        stillFound = replaceString (source, "lo", "**");
    while ( stillFound == true );
    
    int i;
    for (i = 0; i < 11; ++i)
        printf("%c", source[i]);
    
    return EXIT_SUCCESS;
}

bool replaceString (char source [], char find [], char replace []){
    int findString (const char haystack [], const char needle []);
    void removeString(char string [], int start, int length);
    int lengthOf(char source []);
    void insertString (char source [100], char insert [4], int start);
    
    int start = findString(source, find);
    
    if ( start > -1 ){
        removeString (source, start, lengthOf(find));
        insertString (source, replace, start);
        return true;
    }
    
    return false;   // If the string is not found
}

int findString (const char haystack [], const char needle []){
    char buffer [10];
    int i = 0, j = 0;
    
    while ( haystack[i]  != '\0' ){
        if ( haystack[i] == needle[j] ){            // If the first character of needle is found in haystack
            while (needle[j] == haystack[i + j]){
                if ( needle[j + 1] == '\0' )        // j + 1 because the next one is the end this way no need for counter
                    return i;                       
                ++j;
            }
            j = 0;                                  // resetting j
        }
        ++i;
    }
    
    // If not found
    return -1;
}

void removeString(char string [], int start, int length){
    int i , counter;
    int end = start + length;
    for ( i = start, counter = 0 ; i < end; ++i, ++counter){
        string[i] = string[end + counter];
        string[end + counter] = '\0';   // To remove an element all the character constants must be set to '\0'
    }
}

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