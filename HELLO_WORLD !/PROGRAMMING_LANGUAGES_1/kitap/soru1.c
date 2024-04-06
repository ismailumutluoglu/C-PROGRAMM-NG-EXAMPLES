#include <stdio.h>
int main(){
    int num,kalan,sum;
    sum=0;
    printf("bir sayi giriniz:");
    scanf("%d",&num);
    while(num<100 || num>999){
        printf("lutfen uygun sayiyi giriniz:");
        scanf("%d",&num);
    }
    while(num>0){
    kalan=num%10;
    num=num/10;
    sum+=kalan;
   }
   printf("girilen sayinin basamaklari toplami : %d",sum);
    return 0 ;
}