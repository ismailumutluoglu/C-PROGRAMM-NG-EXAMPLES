// C Program to Display Armstrong Numbers Between 1 to 1000 

#include <stdio.h>
#include <math.h>

int main()
{
    int copy_number,copy_number2,sum,i,digit,j;


    for(i = 1; i<=1000; i++)
    {
        sum=0;
        copy_number=i;
        copy_number2=copy_number;

        j = 0;
        while(copy_number > 0)
        {
            copy_number /=10;
            j++;
        }

        while(copy_number2 > 0)
        {
            digit = copy_number2%10 ;
            sum += pow(digit,j);
            copy_number2 /=10;
        }
    
        if(sum == i)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}
