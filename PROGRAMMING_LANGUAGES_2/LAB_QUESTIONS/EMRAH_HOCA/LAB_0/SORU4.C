#include <stdio.h>

int toplam_basamak(int x );

int main()
{
    int x ;
    printf("bir sayi giriniz : ");
    scanf("%d",&x);

    printf("%d sayisinin basamaklari toplami = %d",x);
    return 0 ; 
}
int toplam_basamak(int x )
{
    if(x > 0)
    {
        return x % 10 +  toplam_basamak(x/10) ;
    }
    else
        return 0 ;
}