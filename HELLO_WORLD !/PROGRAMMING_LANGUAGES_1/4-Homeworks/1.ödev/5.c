#include <stdio.h>
int main(){
    float F,formula;
    printf("fahrenayt cinsinden sicakligi giriniz\n");
    scanf("%f",&F);
    formula=((F) - 32) * 5/9 ;
    printf("girilen sicakligin Celcius cinsinden esiti = %f",formula);
    return 0;
}