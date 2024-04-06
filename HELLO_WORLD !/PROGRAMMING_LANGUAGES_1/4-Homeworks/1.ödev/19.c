#include <stdio.h>
int main(){
     int i,n;
     printf("carpim tablosuna ulasmak istediginiz sayiyi giriniz(ax2+bx+c)");
     scanf("%d",&n);
     for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
     }
    return 0;
}