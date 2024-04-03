#include <stdio.h>
void fun(int n);
int main()
{
    fun(7);
    return 0 ;
}
void fun(int n)
{
    if(n==0)
    {
        return ;
    }
    printf("%d",n);
    fun(n-1);
}