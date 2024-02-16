//C Program to Reverse a Number
#include <stdio.h>

int main()
{
    int number,sum,digit;

    sum=0;

    printf("enter a number");
    scanf("%d",&number);

    while(number>0)
    {
        digit=number%10;
        sum=sum*10+digit;
        number/=10;
    }   
    
    printf("reverse number is %d",sum);
    return 0;
}