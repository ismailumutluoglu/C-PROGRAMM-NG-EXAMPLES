#include <stdio.h>
int main(){
    int temperature;
    printf("sicakligi giriniz");
    scanf("%d",&temperature);
    if(temperature>0){
        printf("donma sicakliginin ustunde");
    }
    else{
        printf("donma sicakliginin altinda");
    }
    return 0 ; 
}