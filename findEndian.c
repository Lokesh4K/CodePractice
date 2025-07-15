#include <stdio.h>

int main()
{
    int num = 1;
    char *bytePtr = (char *) &num;

    if (*bytePtr)
    printf("Little Endian\n\r");
    else
    printf("Big Endian\n\r");

    return 0;
}