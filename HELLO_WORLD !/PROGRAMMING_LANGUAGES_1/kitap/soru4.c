#include <stdio.h>
int main(){
    int a,b,c;
    printf("3 sayi giriniz:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("en buyuk : %d",a);
    }
    else if(b>a && b>c){
    printf("en buyuk : %d",b);
    }
    else{
        printf("en buyuk : %d",c);
    }
    return 0 ; 
}