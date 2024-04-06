#include <stdio.h>
int fun1(int x, int y) 
{ 
    if (x == 0) 
        return y; 
    else
        return fun1(x - 1, x + y); 
}
int main()
{
    int x = 4 , y = 5 ; 
    printf("%d",fun1(x,y));
    return 0 ; 
}