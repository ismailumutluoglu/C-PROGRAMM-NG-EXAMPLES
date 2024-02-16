#include <stdio.h>

int main()
{
    int i,j,k;

    for(i=0;i<10;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=10;j>i;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}