#include <stdio.h>
int main(){
    int i,a,b,pow;
    pow=1;
    printf("iki sayi gir :");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=b;i++){
        pow=pow*a;
    }
    printf("%d",pow);
    return 0 ; 
}