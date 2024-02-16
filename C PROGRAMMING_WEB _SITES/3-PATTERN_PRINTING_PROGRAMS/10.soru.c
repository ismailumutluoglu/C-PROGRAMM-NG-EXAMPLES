#include <stdio.h>

int main()

{
   int i,j,k;

   for(i=4;i>=1;i--)
   {
        for(k=0;k<4-i;k++)
        {
            printf(" ");
        }
        
        for(j=1;j<=2*i-1;j++)
        {
            if(j==1 || j==2*i-1)
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
