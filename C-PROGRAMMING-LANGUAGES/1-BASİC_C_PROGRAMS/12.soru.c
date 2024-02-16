#include <stdio.h>

void AsalSayilar(int N)
{
    int k ;
    for(int i = 1;i<=N;i++)
    {
        k = 0;
        for(int j = 1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int N=100;

    AsalSayilar(N);
    return 0;
}