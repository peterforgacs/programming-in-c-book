#include <stdio.h>

void uppercase ( char string[] ){
    int i = 0;
    
    while ( string[i] != '\0' ){
        string[i] = string[i] - 'a' + 'A';
        ++i;
    }
}

int main(void){
    char text [] =  "mystring";
    uppercase (text);
    
    int i = 0;
    while( text[i] != '\0' ){
        printf("%c", text[i]);
        ++i;
    }
        
}