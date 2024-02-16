// C Program to Display Armstrong Number Between Two Intervals 
#include <stdio.h>
#include <math.h>

int main()
{
    int copy_number2,copy_number,number1,number2,digit,sum,j,i;

    printf("enter number 1 ");
    scanf("%d",&number1);

    printf("enter number 2 ");
    scanf("%d",&number2);

    for(i = number1;i <= number2;i++)
    {
        sum = 0;
        copy_number=i;
        copy_number2 = copy_number;
        j=0;
        while(copy_number>0)
        {
            copy_number/=10;
            j++;
        }
        while(copy_number2>0)
        {
            digit=copy_number2%10;
            sum += pow(digit,j);
            copy_number2 /=10;
        }

        if(sum==i)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}