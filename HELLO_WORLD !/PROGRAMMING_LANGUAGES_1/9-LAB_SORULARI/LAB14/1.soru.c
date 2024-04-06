//1. x değeri klavyeden girildiğinde 1 + 2 + .... + (x - 1) + x seri toplama değerini hesaplayan fonksiyon yazınız.

#include <stdio.h>
int toplam_sayilar(int x);

int main()
{
    int number ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&number);
    printf("%d sayisina kadar olan sayilarin toplami =  %d",number,toplam_sayilar(number));
    return 0 ; 
}

int toplam_sayilar(int x)
{
    int toplam = 0  ; 
    for(int i = 1 ; i <= x ; i++)
    {
        toplam+=i;
    }
    return toplam;
}