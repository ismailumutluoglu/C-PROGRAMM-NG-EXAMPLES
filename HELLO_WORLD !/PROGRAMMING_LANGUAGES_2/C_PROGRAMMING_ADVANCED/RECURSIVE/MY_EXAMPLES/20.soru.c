// check polindrom number
#include <stdio.h>
int reverse_number(int num , int sum);
int main()
{
    int number ; 
    int sum = 0 ; 
    printf("sayi giriniz : ");
    scanf("%d",&number);
    if(reverse_number(number,sum)==number)
    {
        printf("polindrom");
    }
    else
    {
        printf("polindrom degil");
    }
    return 0 ; 
}
int reverse_number(int num, int sum)
{
    if( num != 0)
    {
        sum = sum * 10 + num % 10 ;
        return reverse_number(num / 10,sum) ;
    }
    return sum ; 
}