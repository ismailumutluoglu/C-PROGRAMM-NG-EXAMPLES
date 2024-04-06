#include <stdio.h>
int main(){
    int a,b,c;
    printf("3 sayi giriniz");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("en buyuk sayi = %d",a);
    }
    else if(b>a && b>c){
        printf("en buyuk sayi = %d",b);
    }
    else{
        printf("en buyuk sayi= %d",c);
    }
    return 0;
}