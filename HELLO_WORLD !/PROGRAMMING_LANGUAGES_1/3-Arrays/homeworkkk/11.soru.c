/* Klavyeden girilen 20 adet sayıdan çift sayıların toplamının tek
sayıların toplamına oranını bulan programın algoritma ve akış
diyagramını çiziniz. */

#include <stdio.h>

int main()
{
    int i,num;
    float tek_toplam,cift_toplam;

    tek_toplam=0;
    cift_toplam=0;

    for(i=0;i<20;i++)
    {
        printf("%d.sayiyi giriniz \n",i+1);
        scanf("%d",&num);
        if(num%2==0)
        {
            cift_toplam+=num;
        }
        else
        {
            tek_toplam+=num;
        }
    }
    printf("girdiginiz sayilardan cift olanlarin toplaminin tek olanlarin toplamina orani = %.2f",cift_toplam/tek_toplam);
    return 0;
}