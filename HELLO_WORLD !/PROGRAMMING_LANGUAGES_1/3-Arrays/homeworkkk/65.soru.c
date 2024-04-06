// bir sayi dizisinin en buyuk elemanini bulan program

#include <stdio.h>
#define x 5
int main()
{
    int A[x],i,max;

    for(i=0;i<x;i++)
    {
        printf("dizinin elemanlarini giriniz ");
        scanf("%d",&A[i]);
    }

    max=A[0];

    for(i=0;i<x;i++)
    {
        if(A[i]>max)
        max=A[i];
    }

    printf("%d",max);
    return 0;
}