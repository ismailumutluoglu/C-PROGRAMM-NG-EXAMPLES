#include <stdio.h>
int max_value( int dizi[] , int size , int max);
int main()
{
    int dizi[8] = {7,9,2,45,8,2,3,5};
    int min = dizi[0] ; 
    printf("min value is : %d",max_value(dizi,8,min));
    return 0 ; 
}
int max_value( int dizi[] , int size , int min)
{
    if( size - 1 > 0 )
    {
        if(dizi[size-1] < min)
        {
            min = dizi[size-1];
        }
        return max_value(dizi,size-1,min);
    }
    else
    {
        return min ;
    }
}