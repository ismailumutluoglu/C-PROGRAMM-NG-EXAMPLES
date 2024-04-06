// 5. Write a program in C to count the digits of a given number using recursion. >
// Test Data :
// Input a number : 50
// Expected Output :

// The number of digits in the number is :  2

#include <stdio.h>
int digit_number(int number);
int main()
{
    int number ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&number);
    printf("%d",digit_number(number));
    return 0 ; 
}
int digit_number(int number)
{
    static int i = 0 ; 
    while(number > 0 )
    {
        i++;
        return digit_number(number/10) ; 
    }
    return i ; 
}