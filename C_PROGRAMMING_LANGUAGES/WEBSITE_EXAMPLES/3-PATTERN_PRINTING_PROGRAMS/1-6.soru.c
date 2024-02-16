// 6. Diamond Pyramid of ” * ” & Numbers
// This C program print the Diamond Pyramid of ” * ” & Number. (for number just replace Stars (*) with their interator (I) in a loop.

//     *   
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int i,j,k;

     for(i=1;i<=8;i++)
     {
         for(k=1;k<=8-i;k++)
        {
            printf(" ");
         }

         for(j=1;j<=2*i-1;j++)
        {
             printf("*");
         }
         printf("\n");
     }
    
    for(i=1;i<=7;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=(7-i)*2+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}