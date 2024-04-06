#include <stdio.h>
int main()
{
    int A[5],i,kalan,sayi;

    printf("bir sayi giriniz");
    scanf("%d",&sayi);

    i=0;

    while(sayi>0)
    {
        kalan=sayi%10;
        A[i]=kalan;
        sayi=sayi/10;
        printf("A[%d] = %d\n",3-i,A[i]);
        i++;   
    }
    
    return 0;
}