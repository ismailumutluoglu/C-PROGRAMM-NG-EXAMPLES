#include <stdio.h>

void FindPrimeNumber(int N)
{
    int flag = 1 ;

    for(int i=2;i<=N/2;i++)
    {
        if(N%i==0)
        {
            flag = 0;
            break ;
        }
    }

    if(flag==1)
    {
        printf("prime number"); 
    }
    else{
        printf("not a prime number");
    }
    
}

int main()
{   
    int A;
    printf("Enter A ");
    scanf("%d",&A);
    FindPrimeNumber(A);
    return 0;
}