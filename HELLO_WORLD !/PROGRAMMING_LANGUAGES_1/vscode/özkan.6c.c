//Üs hesaplama kodu

#include <stdio.h>
int main(){
    int i , a, b,j ; 
    scanf("%d",&a);
    scanf("%d",&b);
    j=1;
    for(i=1;i<=b;i++){
       j=j*a;
    }
    printf("%d",j);
    return 0 ; 
}