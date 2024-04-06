#include <stdio.h>

int yazdirma(int dizi[],int size);

int main()
{
    int dizi[5] = {1,2,3,4,5};

    yazdirma(dizi,5);

    return 0 ; 
}
int yazdirma(int dizi[],int size)
{
    if(size > 0)
    {
        yazdirma(dizi,size-1) ;
        printf("%d ",dizi[size-1]);
    }

    return 0 ; 
}