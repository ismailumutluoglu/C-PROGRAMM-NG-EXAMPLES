#include <stdio.h>
int main(){
    int a,b,i;
    printf("iki sayi gir : ");
    scanf("%d%d",&a,&b);
    i=0;
    while(a>=0){
       a=a-b; //kalan degerini vericek
       i++;
    }
    printf("girilen sayilarin bolumunden kalan :%d, bolum : %d",a+b,i-1);
    return 0 ; 
}