#include <stdio.h>

int digit(int number,int x);

int main()
{
    int number , x = 0 ; 

    printf("sayi giriniz : ") ; 
    scanf("%d",&number) ;

    printf("%d",digit(number,x));
    return 0 ; 
}

int digit(int number,int x)
{
    if(number > 0)
    {
        x++;
        return digit(number/10,x) ;
    }
    
    else
        return x ; 
}