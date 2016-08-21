#include <stdio.h>
#include <stdlib.h>

struct list {
    int value;
    struct list* prev;
    struct list* next;
};

void sort3 ( struct list* ptr){
    struct list* start = ptr;
    struct list* jptr  = ptr->next;
    int temp;
    
    while ( ptr != ( struct list * ) 0){
        
        while ( jptr != (struct list *) 0 ) {
            if ( ptr->value < jptr->value ){
                temp = ptr->value;
                ptr->value = jptr->value;
                jptr->value = temp;
            }
            jptr = jptr->next;
        }
        jptr = start;
        ptr  = ptr->next;
    }
}

void traverseList ( struct list* listPtr){
    struct list* last;
    
    while (listPtr != (struct list *) 0){ // Forwards
        if (listPtr->next == (struct list *) 0)   // Saving the last element
            last = listPtr;
        
        printf("%i ", listPtr->value);
        listPtr = listPtr->next;
    }
    
    printf("\n");
    
    listPtr = last;
    while (listPtr != (struct list *) 0){ // Backwards
        printf("%i ", listPtr->value);
        listPtr = listPtr->prev;
    }
}

int main(void){
    struct list n1, n2, n3;
    
    n1.value = 3;
    n1.prev  = (struct list *) 0;
    n1.next  = &n2;
    
    n2.value = 2;
    n2.prev  = &n1;
    n2.next  = &n3;
    
    n3.value = 1;
    n3.prev  = &n2;
    n3.next  = (struct list *) 0;
    
    sort3(&n1);
    traverseList(&n1);
    return EXIT_SUCCESS;
}