// BUBBLE SORTTAKİ TEMEL MANTIK EN BÜYÜK OLANI EN SONA ATIYOR küçükten büyüğe sıralayacak isek . . .
// büyüktek küçüğe sıralayacak isek en küçüğü en sola atar
#include <stdio.h>
void BubbleSort(int dizi[],int N);
int main()
{
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    int i ;
    printf("Siralanmadan önce\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("%d ",array[i]);
    }
    BubbleSort(array,size);
    printf("\nSiralandiktan sonra\n");
    for(i = 0;i < size; i++)
    {
        printf("%d ",array[i]);
    }
    return 0 ; 
}
void BubbleSort(int dizi[],int N)
{
    int i,j;
    int temp ; 
    for(i = 0 ; i < N - 1 ; i++) // N - 1 olma sebebi zaten amacımız en küçük yada en büyüğü son indekse atmak . 
    {
        for(j = 0 ; j < N - 1 - i ; j++) // N - 1 - i olma sebebi ise gayet açık . . . 
        {
            if (dizi[j] < dizi[j+1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp ; 
            }
        }
    }
}
