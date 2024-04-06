#include <stdio.h>

int main()
{
    char character ; 
    char i ;

    for(i = 'a';i <= 'z';i++)
    {
        printf("%c ",i);
    }

    printf("\n");

    for( i = 65;i<=90;i++)
    {
        printf("%c ",i);
    }

    printf("\n");

    for(i = 97;i<=122;i++)
    {
        printf("%c ",i);
    }
    return 0;
}