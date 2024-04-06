/* Klavyeden girilen bir sayının negatif, pozitif veya 0 olup olmadığını
bulan programın algoritma ve akış diyagramını çiziniz*/
#include <stdio.h>
int main()
{
    int number;
    
    printf("bir sayi giriniz");
    scanf("%d",&number);

    if(number>0)
    {
        printf("pozitif");
    }
    else if (number<0)
    {
        printf("negatif");
    }
    else{
        printf("0 dir  nötr ");
    }
    
    return 0;
}