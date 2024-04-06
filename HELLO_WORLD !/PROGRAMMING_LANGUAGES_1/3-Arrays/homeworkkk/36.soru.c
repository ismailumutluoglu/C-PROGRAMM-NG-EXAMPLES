#include <stdio.h>
int main()
{
    int number,kalan;

    printf("sayi gir");
    scanf("%d",&number);

    while(number<1000 || number>9999)
    {
        printf("sayi gir");
        scanf("%d",&number);
    }

    while(number>0)
    {
        kalan=number%10;
        number=number/10;
        printf("%d\t",kalan);
    }
    return 0;
    }