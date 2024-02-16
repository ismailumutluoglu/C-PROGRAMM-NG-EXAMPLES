// C Program to Check Whether a Number is a Palindrome or Not 
#include <stdio.h>

int main()
{
    int CopyNumber,number,sum,digit;

    sum=0;
    
    printf("enter a number");
    scanf("%d",&number);
    
    CopyNumber=number;

    while(number>0)
    {
        digit=number%10;
        sum=sum*10+digit;
        number/=10;
    }

    if(sum == CopyNumber)
    {
        printf("%d is a polindrom number",CopyNumber);
    }
    else
    {
        printf("%d is not a polindrom number",CopyNumber);
    }
    return 0;
}