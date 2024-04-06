#include <stdio.h>
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};
    int i,j,temp;

    for(i=0;i<10;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i]>A[j])
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("en buyuk ikinci eleman : %d",A[1]);
}