#include <stdio.h>
int main(){
    int i,N,sum;
    printf("bir n sayisi giriniz:");
    scanf("%d",&N);
    sum=0;
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0 ; 
}