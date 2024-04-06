/*22.Herhangi bir sayının herhangi bir dereceden kuvvetini bulan
programın algoritma ve akış diyagramını çiziniz.*/
#include <stdio.h>
int main()
{
    int a,n,i,sonuc;

    sonuc=1;

    printf("taban degerini giriniz ");
    scanf("%d",&a);

    printf("us degerini giriniz ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        sonuc*=a;
    }

    printf("%d",sonuc);
    return 0;
}