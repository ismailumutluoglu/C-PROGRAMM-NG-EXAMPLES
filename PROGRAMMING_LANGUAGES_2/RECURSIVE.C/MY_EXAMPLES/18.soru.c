#include <stdio.h>
int us_alma(int a , int b);
int main()
{
    int us,taban ; 

    printf("taban degerini girinizi : ");
    scanf("%d",&taban);

    printf("us degerini giriniz : ");
    scanf("%d",&us);

    printf("%d",us_alma(taban,us));
    return 0 ; 
}
int us_alma(int a , int b)
{
    if( b > 0)
    {
        return a * us_alma(a,b-1) ;
    }
    else
        return 1 ; 
}