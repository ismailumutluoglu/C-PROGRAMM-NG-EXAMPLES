#include <stdio.h>
#define ogrenci_sayisi 5

int main()
{
    int A[ogrenci_sayisi][2],i,j;
    float toplamBoy = 0.0 , toplamKilo = 0.0,ogrenciBilgileri[ogrenci_sayisi][2];

    for(i = 0 ; i < ogrenci_sayisi; i++)
    {
        printf("%d. ogrencinin boy ve kilosunu giriniz",i+1);
        scanf("%f %f",&ogrenciBilgileri[i][0],&ogrenciBilgileri[i][1]);
    }

    for(i=0;i<ogrenci_sayisi;i++)
    {
        toplamKilo+=ogrenciBilgileri[i][0];
        toplamBoy+=ogrenciBilgileri[i][1];
    }

    for(i=0;i<ogrenci_sayisi;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%.2f  ",ogrenciBilgileri[i][0]);
            printf("%2.f",ogrenciBilgileri[i][1]);
        }
        printf("\n");
    }
    return 0;
}
