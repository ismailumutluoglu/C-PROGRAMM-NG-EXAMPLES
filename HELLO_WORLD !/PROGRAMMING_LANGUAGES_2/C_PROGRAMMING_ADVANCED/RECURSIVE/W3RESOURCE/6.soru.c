// 6. Write a program in C to find the sum of digits of a number using recursion. >
// Test Data :
// Input any number to find sum of digits: 25
// Expected Output:

// The Sum of digits of 25 = 7 

#include <stdio.h>
int sum_digit_number(int number);
int main()
{
    int number ; 

    printf("bir sayi giriniz : ");
    scanf("%d",&number);

    printf("%d",sum_digit_number(number));
    return 0 ; 
}
int sum_digit_number(int number)
{
    if(number > 0)
    {
        return number % 10 + sum_digit_number(number/10) ;
    }
    else
    return 0 ; 
}