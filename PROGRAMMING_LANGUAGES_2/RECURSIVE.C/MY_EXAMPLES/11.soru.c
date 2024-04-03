#include <stdio.h>

int sum(int x);

int main()
{
    int x = 3; 
    printf("%d",sum(x)/x);
    return 0 ; 
}
int sum(int x)
{
    if(x > 0)
    {
        return x + sum(x-1);
    }
    
    return 0 ; 
}