/*.1'den 63'e kadar olan sayılar arasında istenilen sayıyı maksimum 6
seferde bulan programın algoritma ve akış diyagramını çiziniz.*/

#include<stdio.h>
int main()
{
    int try_number,number,i;

    printf("1-63 arasinda bir sayi yaziniz ");
    scanf("%d",&number);

    for(i=0;i<6;i++)
    {
        printf("%d.deneme",i+1);
        scanf("%d",&try_number);
        if(try_number==number)
        {
            printf("tebrikler %d. denemede buldunuz",i+1);
            break;
        }
        if(i==5 && try_number!=number)
        {
            printf("6 denemede de bulamadiniz");
        }
    }

    return 0;
}