/* 6.Girilen sayının 5'in kuvveti olup olmadığını bulan programın
algoritma ve akış diyagramını çiziniz. */
#include <stdio.h>

int main()
{
    int number;

    printf("bir sayi giriniz");
    scanf("%d",&number);

    while(number>0)
    {
        if(number%5==0)
        {
            number/=5;
        }
        else{
            break;
        }
    }

    if(number==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}