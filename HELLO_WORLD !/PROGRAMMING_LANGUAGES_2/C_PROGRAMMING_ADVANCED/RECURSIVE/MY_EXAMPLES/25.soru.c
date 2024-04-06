#include <stdio.h>

int cift_tek_farki( int num , int tek_toplam , int cift_toplam );

int main()
{
    int number ;
    int tek_toplam = 0 , cift_toplam = 0 ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&number);
    printf("%d",cift_tek_farki(number,tek_toplam,cift_toplam));
    return 0 ; 
}

int cift_tek_farki( int num , int tek_toplam , int cift_toplam )
{
    if(num > 0)
    {
        if( (num % 10) % 2 == 0)
            cift_toplam += num%10*num%10 ;
        else
            tek_toplam += num % 10 * num % 10  ;
        
        return cift_tek_farki(num/10,tek_toplam,cift_toplam);
    }

    if(cift_toplam - tek_toplam > 0)
        return (cift_toplam) - (tek_toplam) ;
    else
        return tek_toplam - cift_toplam ;
}