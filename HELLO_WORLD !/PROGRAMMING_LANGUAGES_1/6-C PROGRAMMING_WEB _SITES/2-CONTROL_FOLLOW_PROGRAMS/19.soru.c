// C Program to Display Prime Numbers Between Intervals
#include <stdio.h>

int main()
{
    int number1,number2,flag,i,j;

    printf("enter number1");
    scanf("%d",&number1);

    printf("enter number2");
    scanf("%d",&number2);

    for(i=number1;i<=number2;i++)
    {
        flag = 1;

        for(j=2;j<=number1/2;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        
        if(flag==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}