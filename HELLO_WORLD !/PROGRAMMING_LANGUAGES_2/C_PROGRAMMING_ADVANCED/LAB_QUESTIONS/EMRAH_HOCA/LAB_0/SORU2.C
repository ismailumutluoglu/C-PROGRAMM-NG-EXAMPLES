#include <stdio.h>

int sum(int dizi[],int size);

int main()
{
    int N ; 
    printf("N sayisini giriniz : ");
    scanf("%d",&N);

    int dizi[N] ; 
    
    for(int i = 0 ; i < N ; i++)
    {
        printf("A[%d] ' yi giriniz : ",i);
        scanf("%d",&dizi[i]);
    }

    printf("%d",sum(dizi,N));
    return 0 ; 
}

int sum(int array[],int size)
{
    
    if(size > 0 )
    {
        return array[size-1] + sum(array,size-1) ; 
    }
    else
        return 0 ; 
}
