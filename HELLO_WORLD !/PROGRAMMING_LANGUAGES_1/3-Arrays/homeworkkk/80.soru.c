#include <stdio.h>
int main()
{
    int A[5]={1,2,3,4,5};
    int i;

    for(i=4;i>=0;i--)
    {
        printf("%d ",A[i]);
    }

    return 0;
}