// iki sayi giriniz ve  toplatiniz.
#include <stdio.h>
int main()
{
    int number1,number2,sum;

    printf("Birinci sayiyi giriniz");
    scanf("%d",&number1);
    
    printf("ikinci sayiyi giriniz");
    scanf("%d",&number2);

    sum=number1+number2;

    printf("girilen iki sayinin toplami = %d",sum);
    return 0; 
}