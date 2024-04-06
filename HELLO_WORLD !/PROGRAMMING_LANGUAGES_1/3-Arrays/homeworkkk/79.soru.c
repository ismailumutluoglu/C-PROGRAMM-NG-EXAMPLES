/*
Bir dizide dışarıdan girilen bir sayının, dizinin elemanlarından kaç
tanesinden küçük olduğunu bulan programın algoritma ve akış
diyagramını çiziniz.
*/

#include <stdio.h>

int main()
{
    int A[10],i,number,count;

    count= 0;
    printf("bir sayi giriniz");
    scanf("%d",&number);

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<10;i++)
    {
        if(number<A[i])
        count++;
    }

    printf("%d",count);

    return 0;
}