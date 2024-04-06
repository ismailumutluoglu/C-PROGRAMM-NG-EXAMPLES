#include <stdio.h>
int main()
{
    int num,sum,kalan,ort;

    sum=0;

    printf("bir sayi giriniz(3 basamakli olsun)");
    scanf("%d",&num); 

    while(num<100 && num>999)
    {
        printf("3 basamakli bir sayi giriniz");
        scanf("%d",&num);
    }
    while(num>0){
        kalan=num%10;
        num=num/10;
        sum+=kalan;
    }
    ort=sum/3;
    printf("girilen sayinin basamaklarinin aritmatik ortalamasi = %d",ort);
    return 0;
}