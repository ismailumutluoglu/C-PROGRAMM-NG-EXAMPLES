#include <stdio.h>

int main()
{
    int i,j,k;

     for(i=0;i<3;i++)
    {
        for(k=0;k<3-i;k++)
        {
            printf(" ");
            
        }

        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }

        printf("\n");  
    }

    for(i=3;i>=0;i--)
    {
        for(k=0;k<3-i;k++)
        {
            printf(" ");
            
        }

        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }

        printf("\n");  
    }

   


    return 0;
} 

//       *    7  3
//      ***   5  2
//     *****   3 1
//    ******* 1  0
      