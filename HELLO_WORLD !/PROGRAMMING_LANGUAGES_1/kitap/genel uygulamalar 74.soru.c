// POLİNDROM SAYİ SORUSU

#include <stdio.h>
int main(){
    int a,b,kalan,toplam;
    printf("bir sayi giriniz:");
    scanf("%d",&a);
    b=a;
    toplam=0;
    while(a>0){
        kalan=a%10;
        toplam=toplam*10+kalan;
        a=a/10;
    }
    printf("%d sayisinin tersten yazilisi  %d olmaktadir.",b,toplam);
    return 0 ; 
}