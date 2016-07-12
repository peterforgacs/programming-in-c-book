/*
 * Determine if your computer does an arithmetic or logical right shift
 * This computer allways uses logical shift.
 */

#include <stdio.h>

// buffer must have length >= sizeof(int) + 1
// Write to the buffer backwards so that the binary representation
// is in the correct order i.e.  the LSB is on the far right
// instead of the far left of the printed string
char *int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);
    
    int i;
    for ( i = 31; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';

        a >>= 1;
    }

    return buffer;
}

#define BUF_SIZE 33

int main ( void ){
    
    signed int w1 = 0xF777EE22;
    
    // Printing out binary 
    char buffer[BUF_SIZE];
    buffer[BUF_SIZE - 1] = '\0';
    int2bin(0xF777EE22, buffer, BUF_SIZE - 1);
    printf("Before %s %x\n", buffer, w1);
    
    w1     = w1 >> 1;
    
    int2bin(w1, buffer, BUF_SIZE - 1);
    printf ("After  %s %x\n", buffer, w1);
    return 0;
}