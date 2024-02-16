#include <stdio.h>

int main()
{
    int i,j,k,x;

    for(i=1;i<=10;i++)
    {
        for(k=1;k<=10-i;k++)
        {
            printf(" ");
        }

        x = 1 ;


        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x=x*(i-j)/j;
        }
        printf("\n");
    }
    
    return 0;
}