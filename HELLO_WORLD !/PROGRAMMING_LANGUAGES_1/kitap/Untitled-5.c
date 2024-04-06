#include <stdio.h>
#include <math.h>
int main(){
    int select,a,uzunluk;
    printf("metre cinsinden bir uzunluk giriniz:");
    scanf("%d",&a);
    printf("1-mm\n2-cm\n3-dm\n4-km\n");
    printf("donusturmek istediginiz birimi seciniz:");
    scanf("%d",&select);
    if(select==1)
    {
     uzunluk=a*1000;
     printf("%d",uzunluk);
    }
    if(select==2)
    {
     uzunluk=a*100;
     printf("%d",uzunluk);
    }
    if(select==3)
    { 
     uzunluk=a*10;
     printf("%d",uzunluk);
    }
    if(select==4)
    {
      uzunluk=a/10; 
      printf("%d",uzunluk); 
    }
    return 0;
}