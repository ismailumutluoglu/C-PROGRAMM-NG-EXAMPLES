#include <stdio.h>
int main(){
    int number,i,sum;
    float ort;
    sum=0;
    printf("sayi giriniz");
    i=0;
    
    while(i<4){
        scanf("%d",&number);
        sum+=number;
        i++;
    }
    printf("%d\n",i);
    ort=sum/i;
    printf("%f",ort);
    return 0 ;
}

