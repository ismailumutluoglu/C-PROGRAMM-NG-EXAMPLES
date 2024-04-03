#include <stdio.h>
int Fibonacci(int n);

int main()
{
    int n = 5 ;
    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d ",Fibonacci(i)) ;
    }   
    return 0 ; 
}

int Fibonacci(int n)
{
    if(n == 0)
    return 0 ; 
    if(n == 1)
    return 1 ; 

    else
    {
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
    
}