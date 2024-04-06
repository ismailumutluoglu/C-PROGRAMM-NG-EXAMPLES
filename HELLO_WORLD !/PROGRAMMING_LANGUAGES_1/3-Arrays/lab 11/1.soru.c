#include <stdio.h>
int main()
{
    // n(3n-1)/2
    int A[100];

    for(int i=0;i<100;i++)
    {
        A[i]=(i*(3*i-1))/2;
    }
    for(int i=0;i<100;i++)
    {
        printf("%d\n",A[i]);
    }

    return 0;
}