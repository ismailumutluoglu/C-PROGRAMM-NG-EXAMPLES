#include <stdio.h>
int main(){
    int N,F,i;
    F=1;
    printf("faktoriyelini hesaplamak istediginiz sayiyi giriniz");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        F=F*i;
    }
    printf("%d",F);
    return 0;
}