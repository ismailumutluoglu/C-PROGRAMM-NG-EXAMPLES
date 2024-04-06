#include <stdio.h>
int main(){
    int a,b,c,k;
    printf("birinci dereeden denklemin katsayilarini giriniz:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    k=(c-b)/a;
    printf("%d",k);
    return 0;
}