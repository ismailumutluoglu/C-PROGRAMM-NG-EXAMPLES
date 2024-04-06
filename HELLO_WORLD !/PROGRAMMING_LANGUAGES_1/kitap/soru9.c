#include <stdio.h>
int main(){
    int fiyat,KDV,satis;
    printf("urunun fiyatini giriniz: \n");
    scanf("%d",&fiyat);
    printf("urunun kdv oranini giriniz:\n");
    scanf("%d",&KDV);
    satis=fiyat+fiyat*KDV/100;
    printf("urunun satis fiyati : %d",satis);
    return 0 ; 
}