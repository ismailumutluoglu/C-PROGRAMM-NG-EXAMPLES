#include <stdio.h>

int Faktoriyel(int x ) ; 

int main()
{
    for(int i = 1 ; i < 10 ; i++)
    {
        printf("%d\n",Faktoriyel(i) ) ; 
    }
    return 0 ; 
}
int Faktoriyel(int x)
{
    if(x == 0)
    return 1 ; 
    
    return x * Faktoriyel(x-1) ; 
}