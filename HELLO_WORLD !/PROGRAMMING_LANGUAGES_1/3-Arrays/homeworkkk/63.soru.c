// fibonacci sayisinin ilk 10 basamağini dizi kullanarak yazan program

#include <stdio.h>

int main()
{
    int A[10],i;

    A[0]=1;
    A[1]=1;

    for(i=2;i<10;i++)
    {
        A[i]=A[i-2]+A[i-1];
    }

    for(i=0;i<10;i++)
    {
        printf("%d\t",A[i]);
    }

    return 0;
}