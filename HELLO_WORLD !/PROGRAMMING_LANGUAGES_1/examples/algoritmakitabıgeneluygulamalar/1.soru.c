//MÜKEMMEL SAYİ 
#include <stdio.h>

int main()
{
    int number,i,sum;
    sum=0;
    printf("enter a number");
    scanf("%d",&number);

    for(i=1;i<number;i++)
    {
      if(number%i==0)
      sum+=i;
    }
    if(sum==number)
    printf("girilen sayi mükemmel sayidir");
    else
    printf("girilen sayi mükemmel sayi degildir");
    return 0;
}