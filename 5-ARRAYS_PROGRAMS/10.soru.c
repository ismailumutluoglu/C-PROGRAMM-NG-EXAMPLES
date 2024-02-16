#include <stdio.h>

void desc_order(int Array[],int N)
{
    int i,j,temp;

    for(i = 0; i < N ; i++)
    {
        for(j = i+1 ; j < N ; j++)
        {
            if(Array[i]<Array[j])
            {
                temp  = Array[i];
                Array[i] = Array[j];
                Array[j] = temp ;
            }
        }
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d  ",Array[i]);
    }
}

int main()
{
    int  Array[5] = {8,9,10,11,12} ;
    int i,j,N;
    N = 5;

    desc_order(Array,N);

    return 0;
}