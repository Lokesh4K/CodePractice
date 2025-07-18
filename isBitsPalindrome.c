#include <stdio.h>

//At the end is another program for this

unsigned char isNumBitPalindrome(unsigned char num)
{
    for (int i = 0; i < 4; i++)
    {
        int bit1 = ((num >> i) & 0x01);
        int bit2 = ((num >> 8-1-i) & 0x01);
        
        printf("\n1bit %2x 2bit %2x\n\r", bit1, bit2);
        if (bit1 != bit2)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter Number\n\r");
    scanf("%d", &num);
    
    printf("Binary of num 0b%b", num);
    if (isNumBitPalindrome(num))
    printf("\nYes");
    else
    printf("\nNo");
    return 0;
}

/*
Try:129 Yes, 66 yes
Result
Enter Number
16
Binary of num 0b10000
1bit  0 2bit  0


1bit  0 2bit  0


1bit  0 2bit  0


1bit  0 2bit  1


No[?2004h
*/


#if 0

#include <stdio.h>
#include <stdint.h>

uint32_t isBinaryPalindrome(uint32_t num)
{
    for(int i = 0; i<32; i++)
    {
        if (((num >> i) & 0x01) != ((num >> 32-i-1) & 0x01))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("Hello World\n\r");
    uint32_t val = 0x000FF00F;
    
    if (isBinaryPalindrome(val))
    printf("Yess");
    else
    printf("ohh no");
    return 0;
}

#endif