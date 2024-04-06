#include <stdio.h>
int main()
{
    int A[]={18,12,33,4,55};

    int enb1,enb2,i;
    
    if(A[0]>A[1])
    {
        enb1=A[0];
        enb2=A[1];
    }
    else
    {
        enb1=A[1];
        enb2=A[0];
    }

    for(i=2;i<5;i++)
    {
        if(A[i]>enb2)
        {
            if(A[i]>enb1)
            {
                enb2=enb1;
                enb1=A[i];
            }
            else
            {
                enb2=A[i];
            }
        }
    }
    printf("en buyuk sayi = %d",enb1);
    printf("en buyuk ikinci sayi = %d",enb2);
    return 0;
}