//10 elemanli bir sayi dizinin en küçük elemanini bul ve bu elemanin kaçıncı dizi elemani oldugunu bul.

#include <stdio.h>

int main()
{
    int A[10],i,min,j;

    for(i=0;i<10;i++)
    {
        printf("%d.dizi elemanini giriniz ",i+1);
        scanf("%d",&A[i]);
    }

    min=A[0];

    for(i=0;i<10;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
            j=i;
        }
    }
    printf("bu sayi dizisindeki en kucuk eleman : %d ve dizinin A[%d]. indisindeki sayidir",min,j);
    return 0;
}