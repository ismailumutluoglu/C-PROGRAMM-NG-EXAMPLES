#include <stdio.h>

int max_value(int dizi[],int size,int max);

int main()
{
    int dizi[5] = {8,7,56,54,12} ;
    int max = dizi[0] ;
    printf("Dizinin en buyuk elemani : %d",max_value(dizi,5,max)) ;
    return 0 ; 
}

int max_value(int dizi[],int size,int max)
{ 
    
    if(size-1 > 0)
    {
        if(dizi[size] > max )
        {
            max = dizi[size] ;
        }
        return max_value(dizi,size-1,max) ;
    }
        return max ; 
}
