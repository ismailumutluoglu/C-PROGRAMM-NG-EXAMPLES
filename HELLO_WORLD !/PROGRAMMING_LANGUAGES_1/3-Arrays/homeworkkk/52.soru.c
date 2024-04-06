#include <stdio.h>
int main()
{
    int number,kalan,max;

    max=0;

    printf("sayi gir");
    scanf("%d",&number);

    while(number>0)
    {
        kalan=number%10;
        if(kalan>max)
        max=kalan;

        number/=10;
    }

    printf("%d",max);
    return 0;
}