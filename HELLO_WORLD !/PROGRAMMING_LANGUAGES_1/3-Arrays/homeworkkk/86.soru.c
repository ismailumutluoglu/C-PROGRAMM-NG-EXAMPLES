#include <stdio.h>
int main()
{
    int A[]={5,9,8,18,25,69,85,99,100,156,186,196,358};
    int i,k,temp;

    for(i=0;i<13;i++)
    {
        temp=A[i];
        k=0;
        while(A[i]>0)
        {
            A[i]=A[i]/10;
            k++;
        }
        printf("%d sayisi %d basamaklidir\n",temp,k);
    }
    return 0;
}