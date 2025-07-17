#include <stdio.h>

int main()
{
    int varA, varB;
    
    printf("Enter Two Variables");
    scanf("%d %d", &varA, &varB);
    
    varA = varA ^ varB;
    varB = varA ^ varB;
    varA = varA ^ varB;
    
    printf("Swapped %d %d", varA, varB);

    return 0;
}

/*
Result:
Enter Two Variables33
44
Swapped 44 3
*/