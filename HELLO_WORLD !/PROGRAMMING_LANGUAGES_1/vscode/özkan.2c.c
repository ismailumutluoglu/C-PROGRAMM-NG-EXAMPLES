#include <stdio.h>
int main(){
    int num;
    printf("bir tam sayi gir: ");
    scanf("%d",&num);
    if(num>0){
        printf("pozitif");
    }
    else if(num==0){
        printf("sifir notr.");
    }
    else{
        printf("negatif");
    }
    return 0 ; 
}