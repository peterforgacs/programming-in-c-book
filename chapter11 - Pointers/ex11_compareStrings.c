#include <stdio.h>

int compareStrings (const char *s1, const char *s2){
    
    int answer;
    
    while( *s1 == *s2 && *s1 != '\0')
        ++s1, ++s2;
    
    if (*s1 < *s2)
        answer = -1;
    else if (*s1 == *s2)
        answer = 0;
    else
        answer = 1;
    
    return answer;
}

int main (void){
    const char text1 [] = {"This is my texts"};
    const char text2 [] = {"This is my text"};
    
    switch(compareStrings(text1, text2)) {
    case -1 : printf("Not equal"); 
             break;     
    case  0 : puts("Equal");
             break;
    case  1 : printf("Not equal");
    }
    return 0;
}