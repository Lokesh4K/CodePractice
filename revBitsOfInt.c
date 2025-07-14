#include <stdio.h>

//don't worry about data type, go for int.
//hardcode wherever necessary, later we can generalized the code.
//get number, print the binary of it.
//run the loop for 32times
//check if num is non-zero, otherwise exit.
//check if LSBit is 1
//left shift 1 to the point of MSBit and set the bit in revNum. Left shifting 
//for the 1st MSBit would be 31st Bit so ex. 32-i-1;  
//number update by right shifting by 1.
//printf rev number
#define MAX_BITS_OF_WORD    (sizeof(int)*8)
int main()
{
    int num = 0;
    printf("enter number");
    scanf("%d", &num);
    int revNum = 0;
    
    printf("entered byte is %b/n/r", num);
    
    for (int i = 0; i < MAX_BITS_OF_WORD; i++)
    {
        if (num)
        {
            //num =
            if (num & 0x01)
            {
                //assign to right most
                revNum = revNum | (0x01 << (MAX_BITS_OF_WORD - i -1));
            }
        }
        else
        {
            break;
        }
        num = num >> 1;
    }
    
    printf("Reversed byte is %b/n/r", revNum);
    return 0;
}

/*
Console output
enter number55
entered byte is 110111/n/r
Reversed byte is 11101100000000000000000000000000/n/r[1] + Done
*/