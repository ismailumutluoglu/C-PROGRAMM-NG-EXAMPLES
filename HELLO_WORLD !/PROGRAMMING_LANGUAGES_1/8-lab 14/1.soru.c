// 1+2+3+.....(x-1)+(x)

#include <stdio.h>
int toplama(int number );
int main()
{
    int x ; 

    printf("bir x sayisi giriniz : ");
    scanf("%d",&x);

    printf("%d  e kadar girilen sayilarin toplami = %d",x,toplama(x));
    return 0 ; 
}

int toplama(int number)
{
    int i = 0;
    int sum = 0 ; 

    for(i = 1 ; i <= number ; i++ )
    {
        sum += i ;
    }
    return sum ;
}