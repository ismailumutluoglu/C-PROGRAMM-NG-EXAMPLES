#include <stdio.h>
int main()
{
    int flag,number,i;

    flag = 1;

    printf("enter a number");
    scanf("%d",&number);

    for(i=2;i<=number/2;i++)
    {
        if(number%i==0)
        {
            flag = 0;
            break;
        }
    }

    if(flag)
    {
        printf("asal");
    }
    else
    {
        printf("asal degil");
    }
    return 0;
}