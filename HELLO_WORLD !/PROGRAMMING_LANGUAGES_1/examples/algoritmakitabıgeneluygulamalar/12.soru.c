//tersten yazdırma
#include <stdio.h>
int main()
{
    int number,kalan,sum;

    sum=0;

    printf("enter a number");
    scanf("%d",&number);
    while(number>0)
    {
        kalan=number%10;
        number/=number;
        sum=sum*10+kalan;
    }
    printf("%d",sum);
    return 0;
}