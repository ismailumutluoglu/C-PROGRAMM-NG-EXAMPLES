#include <stdio.h>
int random_func(int a);
int main()
{
    int num ; 
    printf("sayi giriniz : ");
    scanf("%d",&num);

    printf("%d",random_func(num));

    return 0 ; 
}
int random_func(int a)
{
    if( a > 0 )
    {
        return a % 3 + random_func(a/3) ; 
    }
    return 0 ; 
}