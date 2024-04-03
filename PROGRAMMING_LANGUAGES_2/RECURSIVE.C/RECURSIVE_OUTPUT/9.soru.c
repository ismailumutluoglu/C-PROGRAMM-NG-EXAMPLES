#include <stdio.h>
void fun(int n);
int main()
{
    fun(25);
    return 0 ;
}
void fun(int n)
{
    if(n==0)
    {
        return ;
    }
    printf("%d ",n);
    fun(n/2);
    printf("%d ",n%2);
}