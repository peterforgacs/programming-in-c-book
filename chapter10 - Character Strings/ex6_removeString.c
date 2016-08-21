/*
 * Deletes a given part of an array
 * Swaps the deleted part with the part of the string that comes after the deletion and sets the rest of the characters to '\0'
 */

#include <stdio.h>
void removeString(char string [], int start, int length){
    int i , counter;
    int end = start + length;
    for ( i = start, counter = 0 ; i < end; ++i, ++counter){
        string[i] = string[end + counter];
        string[end + counter] = '\0';   // To remove an element all the character constants must be set to '\0'
    }
}

int main(void){
    int i;
    char text [] = "the wrong son";
    removeString(text, 4, 6);
    
    for ( i = 0; i < 13; ++i)
        printf("%c", text[i]);
    
}