/*Girilen sayının faktöriyelini bulan programın algoritma ve akış
diyagramını çiziniz.*/
#include <stdio.h>
int main()
{
    int F,number,i;

    F=1;

    printf("sayi giriniz");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        F*=i;
    }

    printf("%d sayisinin faktoriyeli : %d",number,F);

    return 0;


}