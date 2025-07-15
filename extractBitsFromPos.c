#include <stdio.h>

int main()
{
    int num, p1, n;
    
    printf("\nExtract no. of bits from position, enter number and position");
    scanf("%d %d %d",&num ,&p1, &n );
    
    //int num = 0b10110111; //183;
    
    int mask = (1 << n) - 1;
    printf("\nBinary of number is:%b", num);
    printf("\n Masking bits are %b", mask);
    
    printf("\nExtracted res %b", ((num >> p1) & mask));

    return 0;
}

/*
Result
0111 0011 0010 1010 (29482,5,9)
Masking 1 1111 1111
Right shift the number, till the position
011 1001 1001
Masked 9bits, and result is below:
11 0011 001
*/