#include <stdio.h>
#include <math.h>
int main()
{
    int num3,num2,num,count,remainder,sum,i;
    printf("bir sayi giriniz");
    scanf("%d",&num);
    count =0;
    num2=num;
    num3=num2;
    while(num>0)
    {
        remainder=num%10;
        num=num/10;
        count++;
    }
    sum=0;
    while(num2>0)
    {
        remainder=num2%10;
        num2=num2/10;
        sum+=pow(remainder,count);
    }
    if(sum==num3)
    {
        printf("armstrong");
    }
    else
    {
        printf("armstrong degil");
    }
    return 0;
}