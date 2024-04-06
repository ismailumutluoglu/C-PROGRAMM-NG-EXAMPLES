#include <stdio.h>
int main()
{
    int number,i,sum;
    sum=0;
    printf("sayi giriniz");
    scanf("%d",&number);
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
        sum+=i;
        }
    }
    if(sum==number)
    {
        printf("perfecttir");
    }
    else{
        printf("perfect degildir");
    }
    return 0;
}