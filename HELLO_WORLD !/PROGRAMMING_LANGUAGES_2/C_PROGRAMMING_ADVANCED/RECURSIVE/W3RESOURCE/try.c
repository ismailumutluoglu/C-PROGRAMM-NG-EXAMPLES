#include <stdio.h>
int max_numbers( int dizi[] , int size , int max);
int main()
{
    int dizi[6] = {8,78,5161,6213,56332,76236} ;
    int max = 0 ; 

    printf("the max value is : %d",max_numbers(dizi,6,max));
    return 0 ; 

}

int max_numbers(int dizi[],int size , int max)
{
    if(size-1 >= 0)
    {
        if(dizi[size - 1] % 2 == 0)
        {
            if(dizi[size-1] > max)
            {
                max = dizi[size - 1 ] ;
            }
        }
        return max_numbers(dizi,size - 1 , max) ; 
    }
    return max ; 
}