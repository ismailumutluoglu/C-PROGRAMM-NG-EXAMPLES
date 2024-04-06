#include <stdio.h>

int main()
{
    int A[] = {5,4,6,8,2,1,9,8,7,3};
    int i,j,temp;

    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i] > A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }

    return 0;
}