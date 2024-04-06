#include <stdio.h>
void findElemenets(int dizi[],int size);
int main()
{
    int array[5] = {1,2,3,4,5};
    findElemenets(array,5);
    return 0 ; 
}

void findElemenets(int dizi[],int size)
{
    int max1 ;
    int max2 ;
    int temp ;
    if(dizi[1] > dizi[0])
    {
        max1 = dizi[1];
        max2 = dizi[0];
    }
    else
    {
        max1 = dizi[0] ; 
        max2 = dizi[1] ;
    }

    for(int i = 0 ; i < size ; i++)
    {
        if(dizi[i] > max1)
        {
            temp = max1;
            max1 = dizi[i] ;
            max2 = temp; 
        }
        else
        {
            if(dizi[i] > max2 )
            {
                max2 = dizi[i];
            }
        }
    }
    printf("%d\n",max1);
    printf("%d",max2);
}