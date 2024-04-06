#include <stdio.h>
int main(){
int i,n,sum,num,kalan;
sum=0;
printf("kac sayi girilecegini  giriniz:");
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&num);
kalan=num%10;
sum+=kalan;
}
printf("%d",sum);
 return 0; 
}