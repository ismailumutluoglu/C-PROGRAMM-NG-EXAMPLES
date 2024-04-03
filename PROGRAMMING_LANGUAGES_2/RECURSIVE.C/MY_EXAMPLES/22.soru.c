#include <stdio.h>
void decimal_to_binary(int num);
int main()
{
    int number ; 

    printf("bir sayi giriniz : ");
    scanf("%d",&number);

    decimal_to_binary(number);
    return 0 ;
}
void decimal_to_binary(int num)
{
    if( num > 0 )
    {
        decimal_to_binary(num/2);
        printf("%d",num % 2);
    }
}