#include <stdio.h>
#include <stdarg.h>

#define NO_OF_BITS_IN_BYTE  8
int main() {
    int val = 0x5555;
    int noOfBitSet = 0;
    
    int len = sizeof(int)*NO_OF_BITS_IN_BYTE;
        
    printf("no of bits in int %d/n/r", len);
        
    for (int i = 0; i < len; i++)
    {
        noOfBitSet += (val & 1) ? 1 : 0;
        val = val >> 1;
        
        if (val == 0)
        break;
    }
    printf("bit set are %d/n/r", noOfBitSet);
    return 0;
}