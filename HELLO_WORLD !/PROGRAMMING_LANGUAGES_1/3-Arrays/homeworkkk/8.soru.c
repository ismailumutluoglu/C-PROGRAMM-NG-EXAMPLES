/* Girilen sayının istenilen sayıya göre mod işlemini yaptıran programın
algoritma ve akış diyagramını çiziniz. */

#include <stdio.h>

int main()
{
    int num1,num2,i;

    printf("modu alinmasi istenen sayiyi  giriniz ");
    scanf("%d",&num1);

    printf("hangi sayiya göre mod alinacak giriniz ");
    scanf("%d",&num2);

    while(num1>=num2)
    {
        num1-=num2;
    }
    
    printf("%d",num1);
    
    return 0;
}