#include <stdio.h>

struct linkedList{
    int value;
    struct linkedList *next;
};

void removeEntry (struct linkedList* entry){
    
    entry->next = entry->next->next;
}

int main(void){
    struct linkedList n1, n2, n3, remove;
    // Setting up linked lists
    n1.value = 100;
    n1.next = &n2;
    
    n2.value = 200;
    n2.next = &n3;
    
    n3.value = 300;
    n3.next = (struct linkedList *) 0;  // Null pointer
    
    removeEntry (&n2);
    
    // Printing the list
    struct linkedList *startPtr = &n1;
    
    while ( startPtr != (struct linkedList *) 0 ){
        printf("%i\n", startPtr->value);
        startPtr = startPtr->next;
    }
    
    return 0;
}