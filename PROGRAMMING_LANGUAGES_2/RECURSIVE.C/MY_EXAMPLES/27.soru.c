#include <stdio.h>
int func(int n);
int main()
{
    int x ; 

    x = func(3) ; 
    printf("%d",x);
    return 0 ; 
}
int func(int n)
{
    if( n > 0)
    {
        return (n-1)*(n+1) + func(n-1) ;
    }
    else
        return 1 ; 
}