#include <stdio.h>
int main(){
    int sum,number;
    sum=0;
    printf("10 adet sayi giriniz");
    for(int i=0;i<10;i++){
        scanf("%d",&number);
        sum+=number;
    }
    printf("girdiginiz sayilarin toplami =  %d",sum);
    return 0;

}