#include <stdio.h>
int main(){
    float zarar,fiyat,satis;
    char a,b;
    printf("urunun fiyatini giriniz:");
    scanf("%f",&fiyat);
    printf("zarar oranini giriniz:");
    scanf("%f",&zarar);
    satis=fiyat-fiyat*zarar/100;
    printf("satis fiyati : %f",satis);
    return 0 ; 
    

   
}