#include <stdio.h>
int main(){
    float feet;
    printf("feet cinsinden uzunlugu giriniz");
    scanf("%f",&feet);
    printf("girilen feet cinsinden uzunlugun cm turunden esiti = %f",feet*30.48);
    return 0;
}