#include <stdio.h>

int desc_order(int Array[],int N)
{
    int i,j,temp;

    for(i = 0; i < N; i++)
    {
        for(j = i+1; j < N; j++)
        {
            if(Array[i]>Array[j])
            {
                temp = Array[i];
                Array[i] = Array[j];
                Array[j] = temp ; 
            }
        }
    }

    for(i = 0; i < N ; i++)
    {
        printf("%d ",Array[i]);
    }
    return 0;
}

int main()
{
    int Array[5] = {9,8,7,6,5};
    int N = 5;

    desc_order(Array,N);
    return 0;
}