#include <stdio.h>
int main(){
    int F,i,num;
    printf("bir sayi giriniz");
    scanf("%d",&num);
    F=1;
    for(i=1;i<=num;i++)
    {
        F*=i;
    }
    printf("%d sayisinin faktoriyeli = %d'dir.",num,F);
    return 0;
}