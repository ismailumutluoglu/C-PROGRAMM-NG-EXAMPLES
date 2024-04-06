#include <stdio.h>
int main(){
int i,sum,kalan,num,ort;
sum=0;
printf("sayi gir :");
scanf("%d",&num);
while(num<100 && num>999){
printf("lutfen 3 basamakli bir sayi giriniz:");
scanf("%d",&num);
}
while(num>0){
kalan=num%10;
sum+=kalan;
num=num/10;
}
printf("%d",sum/3);
return 0;
}
