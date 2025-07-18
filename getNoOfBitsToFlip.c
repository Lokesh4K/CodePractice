#include<stdio.h>
#include<stdint.h>

typedef uint32_t (*functionPointer)(uint32_t , uint32_t);

/***
 * This program give no. of bits needed to flip, to make num1 as num2
 * Ex Input 1, 1 output 0
 * Input 1, 7 output 2, coz we need to flip 2bits 
 * 
 * 
 * num1 = 1 0001, num2 = 15 1111
 * So, output should be 3, as num1 needs 3more bits to become like num2
 * Algo here is:
 * xor both num, it will cancel out the same bits 
 * xor result, just count the setbit, that's result
 * 
 * */

uint32_t getFlipBitNumber(uint32_t num1, uint32_t num2)
{
    int count = 0;
    //cancel out 
    num1 = num1 ^ num2;
    
    while(num1)
    {
        num1 = num1 & (num1 -1);
        count++;
    }
    return count;
}

int main(void) 
{
    functionPointer testFun1 = getFlipBitNumber;
    
    uint32_t num1 = 1;
    uint32_t num2 = 7;
    printf("\nFlip Bits %d", testFun1(num1, num2)); //result should be 2
    
    
    num1 = 1;
    num2 = 0xffff0000;
    printf("\nFlip Bits %d", testFun1(num1, num2)); //result should be 2
    
    return 0;
}

/**
 * Result:
 * Flip Bits 2 
 * Flip Bits 17
 */