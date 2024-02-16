// 4. Full Pyramid of Numbers  in 180 Degree
// This pattern can be printed by combining half pyramid pattern and an inverted half-pyramid pattern.

// Pyramid Example: 

//         1
//         22
//         333
//         4444
//         55555
//         4444
//         333
//         22
//         1

#include <stdio.h>

int main()
{
    int i,j;

    for(i=1;i<=8;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }

    for(i=7;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}