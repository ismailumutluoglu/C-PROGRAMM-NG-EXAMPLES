// 10 elemanli bir sayi dizisini girişini yapan program

#include <stdio.h>

int main()
{
    int A[10],i;

    for(i=0;i<10;i++)
    {
        printf("%d. dizi elemanini giriniz ",i+1);
        scanf("%d",&A[i]);   
    }
    for(i=0;i<10;i++)
    {
        printf("A[%d] = %d\n",i+1,A[i]);
    }
    return 0;
}