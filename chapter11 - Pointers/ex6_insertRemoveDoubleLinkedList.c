#include <stdio.h>

struct linkedList{
    int value;
    struct linkedList* prev;
    struct linkedList* next;
};

void insertEntry( struct linkedList* insert, struct linkedList* start){
    insert->prev        = start;
    insert->next        = start->next;
    start->next->prev   = insert;
    start->next         = insert;
}

void removeEntry ( struct linkedList* removeEntry ){
    
    removeEntry->next->prev = removeEntry->prev;
    removeEntry->prev->next = removeEntry->next;
}

void highlight (char string []){
    printf("---------------------\n");
    printf("%s\n", string);
    printf("---------------------\n");
}

void traverseList ( struct linkedList* listPtr){
    struct linkedList* last;
    
    while (listPtr != (struct linkedList *) 0){ // Forwards
        if (listPtr->next == (struct linkedList *) 0)   // Saving the last element
            last = listPtr;
        
        printf("%i\n", listPtr->value);
        listPtr = listPtr->next;
    }
    
    printf("\n");
    
    listPtr = last;
    while (listPtr != (struct linkedList *) 0){ // Backwards
        printf("%i\n", listPtr->value);
        listPtr = listPtr->prev;
    }
}

int main(void){
    
    struct linkedList n1, n2, n3, insert;
    struct linkedList* startPtr;
    
    n1.value = 100; 
    n1.prev = (struct linkedList *) 0;
    n1.next = &n2;
    
    n2.value = 200;
    n2.prev = &n1;
    n2.next = &n3;
    
    n3.value = 300;
    n3.prev = &n2;
    n3.next = (struct linkedList *) 0;
    
    // Displaying the vanilla list
    traverseList(&n1);
    
    // Using insert
    insert.value = 150;
    insertEntry(&insert, &n1);
    
    highlight("Inserting to the list");
    traverseList(&n1);
   
    // Using remove
    removeEntry(&n2);
    // Displaying results
    highlight("Removing from the list");
    traverseList(&n1);
   
}