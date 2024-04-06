#include <stdio.h>
int main(){
    int number,toplam,kalan;
    toplam=0;
    printf("bir sayi giriniz");
    scanf("%d",&number);
    while(number>0){
        kalan=number%10;
        toplam=toplam*10+kalan;
        number=number/10;
    }
    printf("%d",toplam);
    return 0;
}