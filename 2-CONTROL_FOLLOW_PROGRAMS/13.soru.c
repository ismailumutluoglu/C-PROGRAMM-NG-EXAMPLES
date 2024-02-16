// C Program to Check Armstrong Number 

#include <stdio.h>
#include <math.h>

int main()
{
    int number,copy_number,copy_number2,sum,i,digit,j;

    sum=0;

    printf("enter a number : ");
    scanf("%d",&number);

    copy_number2=copy_number=number;

    j=0;
    while(number > 0)
    {
        number/=10;
        j++;
    }

    while(copy_number > 0)
    {
        digit = copy_number % 10 ;
        sum += pow(digit,j);
        copy_number/=10;
    }
    
    if(sum == copy_number2)
    {
        printf("%d is a Armstrong Number",copy_number2);
    }
    else
    {
        printf("%d is not a Armstrong Number",copy_number2);
    }

    return 0;
}