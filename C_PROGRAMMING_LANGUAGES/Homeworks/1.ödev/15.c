#include <stdio.h>
int main(){
    int N,i;
    printf("bir dogal sayi giriniz");
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}