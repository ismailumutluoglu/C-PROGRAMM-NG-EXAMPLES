#include <stdio.h>
void PrimeNumber(int x );

int main()
{
    int i ; 

    for(i=1;i<100;i++)
    {
        PrimeNumber(i);
    }

    return 0 ; 
}

void PrimeNumber(int x)
{
    int i , k ;

    k = 0 ; 

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            k++;
        } 
    }
    if(k==2)
    {
        printf("%d ",x);
    }
}