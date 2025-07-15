/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int swapBitPos(int n, int p1, int p2)
{
    //get the both bits value by right shifting
    int p1Bit = (n >> p1) & 0x01;//res 0 //1101 p1 = 1, which is 0, p2 = 2, which is 1
    
    int p2Bit = (n >> p2) & 0x01;//res 1
    
    int xBits = p1Bit ^ p2Bit; //res 1
    
    xBits = (xBits << p1) | (xBits << p2);
    
    return (n ^ xBits);
}

int main()
{
    int num, p1, p2;
    printf("Enter three Numbers\n\r");
    scanf("%d %d %d", &num, &p1, &p2);
    printf("bits value %b\n\r", num);
    int returnNum = swapBitPos(num, p1, p2);
    
    printf("swapped bits %b\n\r", returnNum);

    return 0;
}

/* RESULT:
Enter Number
13
bits value 1101
swapped bits 1011
*/