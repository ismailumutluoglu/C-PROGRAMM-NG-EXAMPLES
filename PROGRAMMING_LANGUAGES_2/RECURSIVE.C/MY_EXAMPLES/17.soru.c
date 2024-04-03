#include <stdio.h>
int fibonacci(int x);
int main()
{
    int n ; 
    printf("adim sayisini giriniz : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= n ; i++)
    {
        printf("%d ",fibonacci(i));
    }
    return 0 ; 
}
int fibonacci(int x)
{
    if( x == 0 || x == 1)
        return x ; 
    else
        return fibonacci(x-2) + fibonacci(x-1);
}