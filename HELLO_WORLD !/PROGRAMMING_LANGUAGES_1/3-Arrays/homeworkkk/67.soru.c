// bir decimal sayiyi binary sayiya çeviren program
#include <stdio.h>
#include <math.h>
int main()
{
    int number,i,sum;
   
    printf("bir sayi giriniz");
    scanf("%d",&number);

    sum=0;
    i=0;

    while(number>0)
    {
        sum=sum+(number%2)*pow(10,i);
        number=number/2;
        i++;
    }
     
    printf("%d",sum);
    return 0;
    }