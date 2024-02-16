#include <stdio.h>

int main()
{
    int number,i,j,k,sum,digit,x;
    sum=j=k=0;

    printf("enter your student number");
    scanf("%d",&number);

    while(number>0)
    {
        digit = number % 10;
        sum+=digit;
        number = number / 10;
    }

    int arr[sum];

    for(i=0;i<sum;i++)
    {
        printf("enter a number");
        scanf("%d",&x);

        if(x % 3 ==0)
        {
            arr[k] = x ;
            k++;
        }
        else
        {
            arr[sum-1-j] = x;
            j++;
        }
    }

    for(i = 0; i < sum; i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
    }
