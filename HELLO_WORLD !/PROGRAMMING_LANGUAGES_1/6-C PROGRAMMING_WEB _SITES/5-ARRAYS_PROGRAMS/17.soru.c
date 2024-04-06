#include <stdio.h>

int main()
{
    int Array[7]={1,2,3,4,5,6,7};
    int d,i,n;
    d = 2;
    int temp[d];
    n = 7;

    for(i=0;i<d;i++)
    {
        temp[i] = Array[i];
    }

    for(i=d;i<n;i++)
    {
        Array[i-d] = Array[i] ;
    }

    for(i=0;i<d;i++)
    {
        Array[n-d+i] = temp[i];
    }

    for(i = 0; i < 7;i++)
    {
        printf("%d ",Array[i]);
    }
    return 0;
}