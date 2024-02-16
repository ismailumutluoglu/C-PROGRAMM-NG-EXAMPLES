// 5. hollow pyramid of ” * ” & Numbers
// This C program print the hollow pyramid means only the border part shows in the pyramid.

// Pyramid Example:

//      *    1  1 2 3 4 5 
//     * *    3
//    *   *    5
//   *     *    7
//  * * * * *    9

#include <stdio.h>
int main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || i ==5 || j == 2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }  
        }
        printf("\n");
    }
    return 0;
}