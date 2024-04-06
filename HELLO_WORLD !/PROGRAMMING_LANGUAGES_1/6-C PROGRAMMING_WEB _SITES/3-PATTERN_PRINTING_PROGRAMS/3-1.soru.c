

        



#include <stdio.h>
 
int main()
{
    int i,j,k;

    for(i=0;i<4;i++)
    {
        for(k=0;k<2*i;k++)
        {
            printf(" ");
        }


        for(j=0;j<4-i;j++)
        {
            printf("* ");
        }

        for(j=0;j<3-i;j++)
        {
                printf("* ");
        }

        printf("\n");
    }

    
   return 0;
}




























// int main()
// {
//     int i,j,k;

//     for(i=1;i<=8;i++)
//     {
//         for(k=1;k<=i;k++)
//         {
//             printf(" ");
//         }
//         for(j=1;j<=(8-i)*2+1;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

   
//     return 0;
// }