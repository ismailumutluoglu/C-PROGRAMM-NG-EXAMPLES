#include <stdio.h>
//kullanicidan alinan sayilari karsilastir.
int main(){
     int number1,number2,number3;
     printf("birinci sayiyi giriniz:");
     scanf("%d",&number1);

     printf("ikinci sayiyi giriniz:");
     scanf("%d",&number2);

     printf("ucuncu sayiyi giriniz:");
     scanf("%d",&number3);

     if(number1>number2 && number1>number2){
        printf("en buyuk sayi = %d",number1);
     }
     else if(number2>number1 && number2>number3){
           printf("en buyuk sayi = &d",number2);
     }
     else {
        printf("en buyuk sayi = %d",number3);
     }
     return 0 ; 
}