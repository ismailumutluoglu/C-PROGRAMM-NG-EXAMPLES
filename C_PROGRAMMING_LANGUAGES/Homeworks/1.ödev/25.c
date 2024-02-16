#include <stdio.h>
int main(){
    int number,kalan,a,c;
    c=0;
    printf("bir sayi giriniz");
    scanf("%d",&number);
    kalan=number%10;
    while(number>0){
        a=kalan;
        kalan=number%10;
        if(a==kalan){
           c++;
        }
        number=number/10;   
    }
    printf("%d sayisi %d kez  tekrar etmektedir",a,c);
    return 0;
}