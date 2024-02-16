#include <stdio.h>
int main(){
    int number,a,toplam,kalan;
    toplam=0;
    printf("bir sayi giriniz");
    scanf("%d",&number);
    a=number;
    while(number>0){
        kalan=number%10;
        toplam=toplam*10+kalan;
        number=number/10;
    }
    if(toplam==a){
        printf("bu sayi polindromdur");
    }
    else{
        printf("bu sayi polindrom degildir");
    }
    return 0;
}