#include <stdio.h>
int main(){
    int N;
    printf("bir  sayi  giriniz");
    scanf("%d",&N);
    if(N%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0 ; 
}