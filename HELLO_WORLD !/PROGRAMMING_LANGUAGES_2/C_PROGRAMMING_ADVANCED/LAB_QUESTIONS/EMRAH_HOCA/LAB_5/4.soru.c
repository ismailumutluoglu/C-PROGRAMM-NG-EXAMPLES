#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size,i,j,new_size;
    int *dizi;
    printf("dizinin boyutunu giriniz : ");
    scanf("%d",&size);
    dizi = (int*)malloc(size*sizeof(int));
    if(dizi == NULL)
    {
        printf("YETERLİ ALAN BULUNAMAMISTIR");
        return 0 ; 
    }
    for(i = 0; i < size; i++)
    {
        printf("dizinin %d.elemanini giriniz : ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("yeni dizininin eklenecek boyutunu belirtiniz : ");
    scanf("%d",&new_size);
    dizi = realloc(dizi,(size+new_size)*sizeof(int));
    if(dizi=NULL)
    {
        printf("YETERLİ ALAN BULUNAMAMISTIR.");
        return 0 ; 
    }
    for(; i < size + (new_size); i++)
    {
        printf("dizinin %d.elemanini giriniz : ",i+1);
        scanf("%d",&dizi[i]);
    }

    for(j = 0 ; j < size+(new_size); j++)
    {
        printf("%d ",dizi[j]);
    }
    free(dizi);
    return 0 ; 
}