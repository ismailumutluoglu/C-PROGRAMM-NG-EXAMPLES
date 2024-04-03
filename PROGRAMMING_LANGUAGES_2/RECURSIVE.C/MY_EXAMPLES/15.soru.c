#include <stdio.h>
int check_prime_number(int,int);

int main()
{
    int number ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&number);

    int check = check_prime_number(number,number/2);

    if(check == 0)
    {
        printf("%d sayisi asal degildir",number);
    }
    else
    {
        printf("%d sayisi asaldir.",number);
    }
    return 0 ; 
}

int check_prime_number( int num, int i)
{
    if( i >= 1)
    {
        if( num % i == 0)
        {
            return 0 ; 
        }
           return check_prime_number(num,--i);
    }
        return 1 ;   
}