#include <stdio.h>

int toplam_sayi(int x);

int main()
{
    int x ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&x);

    printf("%d sayisina kadar olan dogal sayilarin toplami = %d",x,toplam_sayi(x));
    return 0 ;
}
int toplam_sayi(int x)
{
    if( x > 0)
        return x + toplam_sayi(x-1);
        
    else
        return 0 ;
}