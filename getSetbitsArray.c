#include <stdio.h>

int getMeSetBits(int num)
{
    int count = 0;
    
    /*    
    num = 3
    0011 & 0010 = 0010; //cleared trailing set bit count = 1
    0010 & 0001 = 0000; // count = 2
    */
    while(num)
    {
        num = num & (num - 1);
        count++;
    }
    return count;
}


int main()
{
    int buf[] = {1, 3, 7, 15};
    int totalSetBitCounter = 0;
    
    for(int i = 0; i < sizeof(buf)/sizeof(int); i++)
    {
        totalSetBitCounter += getMeSetBits(buf[i]);
    }
    printf("\nTotal Set bits are: %d", totalSetBitCounter);

    return 0;
}

/**
 * Results:
 * Total Set bits are: 10
 */