/*
 * Rotate the bits s in a circular style from the left if n is positive from the right if n is negative.
 */

#include <stdio.h>

int main ( void ){
    unsigned int w1 = 0xabcdef00u;
    unsigned int intSize ();
    unsigned int rotate ( unsigned int value, int n);
    
    printf("%x\n", rotate (w1, 8));
    return 0;  
}

unsigned int intSize (){
    unsigned int w1 = ~0;
    unsigned int w2 = 0;
    unsigned int counter = 0;
    
    while ( w1 != w2 ){
        w1 >>= 1;
        ++counter;
    }
    
    return counter;
}

unsigned int rotate ( unsigned int value, int n){
    unsigned int result, bits, size;
    size = intSize();
    
    if ( n > 0 )
        n = n % size;
    else
        n = -(-n % size);
    
    if ( n == 0 )
        return value;
    else if ( n > 0 ){      // left rotate
        bits = value >> (size - n);
        result = value << n | bits;
    }
    else {                  // right rotate
        n = -n;
        bits = value << (size - n);
        result = value >> n | bits;
    }
    return result;
}

char *int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);
    
    int i;
    for ( i = 31; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';

        a >>= 1;
    }

    return buffer;
}