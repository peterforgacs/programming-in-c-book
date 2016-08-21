#include <stdio.h>

int main(void){
    void substring (const char source [], int start, int count, char result []);
    int i;
    
    char working[6];    // 4 because we need to keep room for the '\0'
    const char string[] = "two words";
    
    substring(string, 4, 20, working);
    
    for ( i = 0; i < 6; ++i)
        printf("%c", working[i]);
    
    return 0;
}

void substring (const char source [], int start, int count, char result []){
    int lengthOf (const char source []);
    int length = lengthOf (source);
    int end, i, j;
    
    // Handle if a substring size is bigger then the source array
    if ( start + count <= length )
        end = start + count;
    else
        end = length;
    
    for ( i = start, j = 0; i < end; ++i, ++j)
        result[j] = source[i];
}

int lengthOf (const char source []){
    int i = 0;
    
    while (source[i] != '\0')
        ++i;
    
    return i;
}