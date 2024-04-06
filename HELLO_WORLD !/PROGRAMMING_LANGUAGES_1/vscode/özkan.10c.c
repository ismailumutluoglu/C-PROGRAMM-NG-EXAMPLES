#include <stdio.h>
int main(){
    int num,sum;
    sum=0;
    printf("bir sayi giriniz:");
    while(num!=-1){
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum+1);
    return 0 ; 
}