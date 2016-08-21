/*
 * Returns the starting position of needle in haystack
 * 
 */
#include <stdio.h>

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

int main(void){
    int index = findString ("a chatterbox", "hat");
    printf("%i", index);
}