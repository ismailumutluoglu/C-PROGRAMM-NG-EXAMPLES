// binary to decimal
#include <stdio.h>

int binary_to_decimal( int num, int i);

int main()
{
    int number ; 
    int i = 0 ; 
    printf("ikilik tabanda bir sayi giriniz : ") ; 
    scanf("%d",&number);

    printf("decimal = %d",binary_to_decimal(number,i));
    return 0 ;

}
int binary_to_decimal( int num , int i)
{
     if( num > 0 )
        return (num%10) * us_alma(i) + binary_to_decimal(num/10,++i) ;
    else
        return 0 ; 
}
int us_alma(int i )
{
    if()
}

// 1010 0 * 2^0 + 1 * 2 ^ 1 + 0 * 2 ^ 2 + 1 * 2 ^ 3 
