/*
10 elemanlı bir dizinin elemanlarından hem 4'e hemde 5'e bölünen
sayıları bulan programın algoritma ve akış diyagramı çiziniz.
*/
#include <stdio.h>
int main()
{
    int A[10],i;

    for(i=0;i<10;i++)
    {
        printf("%d. sayiyi giriniz",i+1);
        scanf("%d",&A[i]);
    }

    for(i=0;i<10;i++)
    {
        if(A[i]%4==0 && A[i]%5==0)
        {
            printf("%d\n",A[i]);
        }
    }
         
    return 0;
}
