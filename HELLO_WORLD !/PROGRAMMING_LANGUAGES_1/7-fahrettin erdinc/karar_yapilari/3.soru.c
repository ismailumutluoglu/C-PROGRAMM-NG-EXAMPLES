#include <stdio.h>
void checkNumber(int x);
int main()
{
    int x ; 
    checkNumber(x);
    return 0 ; 
}

void checkNumber(int x)
{
    int number ; 
    printf("enter a number : ");
    scanf("%d",&number);

    if(number>10)
    {
        printf("bigger");
    }
    else if(number<10)
    {
        printf("smaller");
    }
    else
    {
        printf("equal");
    }
}