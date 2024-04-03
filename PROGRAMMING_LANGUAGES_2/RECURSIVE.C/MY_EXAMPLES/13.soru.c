#include <stdio.h>

int show_numbers(int number);

int main()
{
    int number ; 

    printf("istediginiz bir sayiyi giriniz : ") ;
    scanf("%d",&number) ;

    show_numbers(number);

    return 0 ; 
}

int show_numbers(int number)
{
    if(number > 0)
    {
        show_numbers(number-1) ; 
        printf("%d\n", number) ;
    }

    return 0 ; 
}