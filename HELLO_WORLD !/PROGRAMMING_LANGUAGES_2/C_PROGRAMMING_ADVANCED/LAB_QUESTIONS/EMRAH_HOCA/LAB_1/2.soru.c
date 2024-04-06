#include <stdio.h>

int ort_number(int array[] , int size);
int main()
{
    int dizi[6];  
    float ort = 0.0 ;
    for(int i = 0 ; i < 6 ; i++) 
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",&dizi[i]);
    }
    printf("girilen dizideki sayilarin ortalamasi = %.2f",ort_number(dizi,6)/6.0);
    return 0 ; 
}

int ort_number(int array[] , int size )
{
    if(size - 1 >= 0)
    {
        return array[size-1] + ort_number(array,size-1);
    }
    else
        return 0 ; 
}