#include <stdio.h>
#include <stdarg.h>
#define METHOD_2 
/*
METHOD_2 is Brian Kernighan's Algorithm
Which is n = n & (n-1); clears the Set LSBit
If we repeat this operation till it clears all the LSBit, which gives the count of set bit in number 
*/
#define NO_OF_BITS_IN_BYTE  8

int main() {
#ifdef METHOD_1    
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
#endif ENDIF

#ifdef METHOD_2
int num = 0;
scanf("%d", &num);
printf("Enterd num is %b/n/r", num);
int count = 0;
while(num)
{
    num = num & (num-1);
    count++;
}
printf("bit set are %d/n/r", count);
#endif
return 0;
}

/*
Result:
111
Enterd num is 1101111/n/rbit set are 6/n/r[1] + Done
*/