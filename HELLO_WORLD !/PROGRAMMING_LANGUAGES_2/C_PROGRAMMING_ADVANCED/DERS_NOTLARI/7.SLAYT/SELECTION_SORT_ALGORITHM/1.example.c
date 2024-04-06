// bir degeri en küçük değer yapıp onun üzerinden karşılaştırma yapıyor . 
#include <stdio.h>
void selectionSort(int arr[],int size);
int main()
{
    int dizi[] = {4,7,5,1,3,9};
    int size = sizeof(dizi)/sizeof(dizi[0]);
    printf("Before selectino sort\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",dizi[i]);
    }
    selectionSort(dizi,size);
    printf("\nAfter selection sort\n");
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",dizi[i]);
    }
    return 0 ; 
}
void selectionSort(int arr[],int size)
{
    int i,j,min_index; 
    for(i  = 0 ; i < size -1 ; i++) // size-1 son index oluyor karşılaştıracak eleman kalmıyor.
    {
        min_index = i ; // aslında dizinin her bir elemanını en  küçük olarak kabul ediyoruz
        for(j = i  ; j < size   ; j++)
        {
            if(arr[j] > arr[min_index])
            {
                min_index = j ; 
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp ; 
    }
}
