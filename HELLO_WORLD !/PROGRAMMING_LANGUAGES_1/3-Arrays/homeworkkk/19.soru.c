/*20.Girilen sayının mükemmel sayı olup olmadığını bulan programın
algoritma ve akış diyagramını çiziniz.*/

#include <stdio.h>
int main()
{
    int number,i,sum;
    sum=0;

    printf("bir sayi giriniz ");
    scanf("%d",&number);

    for(i=1;i<number;i++)
    {
        if (number%i==0)
        {
            sum+=i;
        }
    }

    if(sum==number)
    {
        printf("%d mukemmel sayidir",number);
    }
    else
    {
        printf("%d mukemmel sayi degildir",number);
    }
    return 0;
}