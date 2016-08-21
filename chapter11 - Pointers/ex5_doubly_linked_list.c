#include <stdio.h>

struct linkedList{
    int value;
    struct linkedList* prev;
    struct linkedList* next;
};

int main(void){
    
    struct linkedList n1, n2, n3;
    
    n1.value = 100;
    n1.prev = (struct linkedList *) 0;
    n1.next = &n2;
    
    n2.value = 200;
    n2.prev = &n1;
    n2.next = &n3;
    
    n3.value = 300;
    n3.prev = &n2;
    n3.next = (struct linkedList *) 0;
    
    // Traversing a double linked list
    struct linkedList* listPtr = &n1;
    
    while (listPtr != (struct linkedList *) 0){ // Forwards
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    
    listPtr = &n3;
    while (listPtr != (struct linkedList *) 0){ // Backwards
        printf("%i\n", listPtr->value);
        listPtr = listPtr->prev;
    }
   
}