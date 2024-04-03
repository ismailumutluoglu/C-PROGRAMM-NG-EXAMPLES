#include <stdio.h>

int numbers( int a );

int main()
{
    int x ; 

    printf("bir x sayisi giriniz : ");
    scanf("%d",&x);
    
    numbers(x);
    return 0 ; 
}
int numbers( int a )
{
    if(a > 0)
    {
        numbers(a-1); 
        printf("%d\n",a);
    }

    return 0 ; 
}