// C Program to Find All Factors of a Natural Number

#include <stdio.h>

int main()
{   
    int i,A,B,C,sum;

    sum=0;

    A=0;
    B=1;

    for(i=2;i<=10;i++)
    {
        C=A+B;
        A=B;
        B=C;
        if(i%2==0)
        {
            sum+=C;
        }
    }
    
    printf("%d",sum);
    return 0;
}