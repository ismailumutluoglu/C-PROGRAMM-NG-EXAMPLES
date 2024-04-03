#include <stdio.h>

int multiply( int a , int b );

int main()
{
    int x = 18 , y = 5 ; 

    printf("%d",multiply(x,y));

    return 0 ; 
}

int multiply( int a , int b )
{
    if( b > 0 )
    {
        return a + multiply(a,b-1);
    }
    
    else
        return 0 ; 
}