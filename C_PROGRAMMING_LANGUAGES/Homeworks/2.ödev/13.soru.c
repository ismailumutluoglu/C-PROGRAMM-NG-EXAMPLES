#include <stdio.h>
int main()
{
    int number2,number,F,i,sum,remainder,j; 
    sum=0;
   
    printf("bir sayi giriniz");
    scanf("%d",&number);
    number2=number;
    while(number>0)
    {
       remainder=number%10;
        F=1;
       for(j=1;j<=remainder;j++)
       {
        F=F*j;
       }
       sum+=F;
       number=number/10;
    }
    if(sum==number2)
    {
        printf("bu sayi strong numberdir");
    }
    else{
        printf("strong number degildir");
    }
    return 0;
}