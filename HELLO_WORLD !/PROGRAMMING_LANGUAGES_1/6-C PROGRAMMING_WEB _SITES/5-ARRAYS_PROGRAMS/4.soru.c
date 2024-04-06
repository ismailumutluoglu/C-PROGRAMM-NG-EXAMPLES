#include <stdio.h>

int main()
{
    int Array[5],x,i,flag;

    flag = 0 ;

    printf("enter a number : ");
    scanf("%d",&x);

    for(i = 0; i <5;i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",&Array[i]);
    }

    for(i = 0; i < 5;i++)
    {
        if(Array[i] == x)
        {
            flag = 1;
        }

    }

    if(flag)
    {
        printf("yes");
    }
    else
    {
        printf("No ");
    }
    return 0;
}
