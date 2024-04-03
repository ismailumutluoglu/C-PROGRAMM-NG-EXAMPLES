#include <stdio.h>

int fun(int dizi[],int size);
int main()
{
    int dizi[7] = {1,2,3,4,5,6,7};
    printf("%d",fun(dizi,7));
    return 0 ; 
}

int fun(int dizi[],int size)
{
    if(size -1 >= 0)
    {
        if(dizi[size-1] % 2 != 0)
        {
            return 1 + fun(dizi,size-1);
        }
        else
        {
            return fun(dizi,size-1);
        }
    }
}