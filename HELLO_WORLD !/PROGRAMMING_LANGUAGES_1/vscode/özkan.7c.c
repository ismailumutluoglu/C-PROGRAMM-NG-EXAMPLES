#include <stdio.h>
int main(){
    int num ; 
    printf("bir sayi gir : ");
    scanf("%d",&num);
    if(num%5==0 && num%3==0){
        printf("gecerli");
    }
    else{
        printf("gecersiz");
    }
    return 0 ; 
}