/* .Girilen 3 basamaklı bir sayının basamaklarının küpleri toplamı sayının
kendine eşit olup olmadığını bulan programın algoritma ve akış
diyagramını çiziniz. */

#include <stdio.h>

int main()
{
    int num,sum,kalan,num_x;

    sum=0;

    printf("3 basamakli bir sayi giriniz ");
    scanf("%d",&num);
    num_x=num;

    if(num<100 || num > 999)
    {
        while(num<100 || num>999)
    {
        printf("lütfen 3 basamakli bir sayi giriniz ");
        scanf("%d",&num);
        num_x=num;
    }
    }
    
    while(num>0)
    {
        kalan=num%10;
        num/=10;
        sum+=kalan*kalan*kalan;
    }

    if(sum==num_x)
    {
        printf("tebrikler");
    }
    else
    {
        printf("Kaderde gulecekmis when babaa wheen");
    }

    return 0;
}