#include <stdio.h>
int main(){
    int a,b,i,sonuc;
    sonuc=1;
    printf("bir a sayisi giriniz");
    scanf("%d",&a);
    printf("bir b sayisi giriniz");
    scanf("%d",&b);
            for(i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                sonuc=i;
            }
            }
            printf("%d",sonuc);
    return 0;
}