#include <stdio.h>
int main(){
    int x,x2;
    printf("negatif bir sayi giriniz:");
    scanf("%d",&x);
    while(x>=0){
        printf("yanlis girdin");
        scanf("%d",&x);
    }
  x2=x*(-1);
printf("girilen %d sayisinin mutlaka degeri  : %d",x,x2);
return 0 ; 
}