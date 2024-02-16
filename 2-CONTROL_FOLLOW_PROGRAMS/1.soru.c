#include <stdio.h>

int main()
{
    int number;

    printf("enter a number");
    scanf("%d",&number);

    if(number>0)
    {
        printf("pozitif");
    }
    else if (number<0)
    {
        printf("negatif");
    }
    else
    {
        printf("notr");
    }
    return 0;
}