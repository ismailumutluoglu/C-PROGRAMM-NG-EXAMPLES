// C Programlama Dili Recursive Faktöriyel Örneği
#include <stdio.h>
int Faktoriyel(int x);
int main()
{
    int x = 7 ; 

    printf("%d",Faktoriyel(x));
    return 0 ; 
}

int Faktoriyel(int x)
{
    if(x > 1)
    {
       return x * Faktoriyel(x-1) ;  
    }

    if(x == 0 || x == 1)
    {
        return 1 ; 
    }
}