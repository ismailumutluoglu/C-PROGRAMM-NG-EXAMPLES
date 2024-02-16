// C Program to Check Whether a Number is Prime or Not
#include <stdio.h>

int main()
{
    int number,i,k;

    printf("enter a number");
    scanf("%d",&number);

    k=0;

    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            k++;
        }
    }

    if(k==2)
    {
        printf("asal sayidir");
    }
    else
    {
        printf("asal degildir");
    }
    
    return 0;
}