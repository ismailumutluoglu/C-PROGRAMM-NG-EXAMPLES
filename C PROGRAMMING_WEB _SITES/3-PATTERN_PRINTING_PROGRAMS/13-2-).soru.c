#include <stdio.h>

int main()
{
    char character='a';

    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",character);
            character++;
        }
        printf("\n");
    }
    return 0;
}