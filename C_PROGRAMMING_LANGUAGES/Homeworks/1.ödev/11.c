#include <stdio.h>
int main(){
    int num,i,sum,product;
    sum=0;
    product=1;
    printf("10 adet sayi giriniz");
    for(i=1;i<=10;i++){
        scanf("%d",&num);
        sum+=num;
        product*=num;
    }
    printf("%d\n",sum);
    printf("%d",product);
    return 0;
}