/*
 * Sorts a dictionary in alphabetical order
 */

#include <stdio.h>

struct entry
{
    char word[15];
    char definiton[50];
};

int compareStrings (char s1[], char s2[]){
    
    int i = 0, answer;
    
    while( s1[i] == s2[i] && s1[i] != '\0')     // Compares each character in the two strings
        ++i;
    if (s1[i] < s2[i])
        answer = -1;        // s1 > s2
    else if (s1[i] == s2[i])
        answer = 0;         // s1 == s2
    else
        answer = 1;         // s1 < s2
    
    return answer;
}

void dictionarySort( struct entry dictionary[], int length){
    struct entry buffer;
    int i, j;
    
    for ( i = 0; i < length - 1; ++i){
        for ( j = i + 1; j < length; ++j){
            if ( compareStrings( dictionary[i].word, dictionary[j].word) == 1 ){    // Normal sort from array chapter with strings
                buffer = dictionary[j];
                dictionary[j] = dictionary[i];
                dictionary[i] = buffer;
            }
        }
    }
}

int main (void){
    void dictionarySort( struct entry [], int);
    struct entry dictionary[3] = 
    {
        {"cba", " a burrowing african mammal"},
        {"bac", "striped animal"},
        {"aaz", "units of measurement"}
    };
    
    dictionarySort(dictionary, 3);
    
    int i;
    for ( i = 0; i < 3; ++i){
        printf("%s\n", dictionary[i].word);
    }
    
    return 0;
}