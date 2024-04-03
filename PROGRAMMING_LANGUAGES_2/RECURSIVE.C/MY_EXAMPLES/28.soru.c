#include <stdio.h>
#include <math.h>
int reverse_number(int number , int size) ; 
int main()
{
    int number ; 

    printf("bir sayi giriniz : ") ;
    scanf("%d",&number) ;
    int copy_number  = number ; 
    int i = 0 ; 
    while(number > 0)
    {
        i++;
        number=number/10;
    }
    printf("%d",reverse_number(copy_number,i-1));


    return 0 ; 
}
int reverse_number(int copy_number , int size)
{   
    if(copy_number > 0)
        return (copy_number%10)* pow(10,size) + reverse_number(copy_number/10,size-1);
    else
        return 0 ;  
}