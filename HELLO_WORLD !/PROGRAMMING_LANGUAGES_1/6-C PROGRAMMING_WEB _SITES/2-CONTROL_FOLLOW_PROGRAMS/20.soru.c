// C Program to Check whether the input number is a Neon Number
#include <stdio.h>
#include <math.h>

int main()
{
    int number,digit,sum,result;

    sum=0;

    printf("enter a number: ");
    scanf("%d",&number);

    result=sqrt(number);
    
    while(number>0)
    {   
        digit=number%10;
        sum+=digit;
        number/=10;
    }

    if(result==sum)
    {
        printf("is a neon number");
    }
    else
    {
        printf("is not a neon number");
    }
    return 0;
}