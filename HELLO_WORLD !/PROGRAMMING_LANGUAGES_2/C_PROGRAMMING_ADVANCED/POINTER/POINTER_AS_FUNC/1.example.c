#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *dizi;
    int eleman_sayisi;
    printf("dizinin eleman sayisini giriniz : ");
    scanf("%d",&eleman_sayisi);
    dizi = (int*)calloc(eleman_sayisi,sizeof(int));
    for(int i = 0 ; i < eleman_sayisi ; i++)
    {
        printf("adres : %d , deger : %d\n",(dizi+i),*(dizi+i));
    }
    free(dizi);
    return 0 ; 
}