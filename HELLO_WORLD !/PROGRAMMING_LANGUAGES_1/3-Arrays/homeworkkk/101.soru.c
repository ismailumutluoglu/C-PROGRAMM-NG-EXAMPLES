#include <stdio.h>
int main()
{
    int i,j;

    for(i=5;i<10;i+=2)
    {
        for(j=3;j<i;j++)
        {
            printf(" ");
        }
        for(j=5;j<10;j+=2)
        {
            printf("*");
        }
        
    }

    return 0;
}