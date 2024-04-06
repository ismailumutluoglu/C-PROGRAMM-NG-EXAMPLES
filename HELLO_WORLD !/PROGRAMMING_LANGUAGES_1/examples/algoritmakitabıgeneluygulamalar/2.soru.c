// rakamlari farkli 3 basamakli sayilari yazan program
#include <stdio.h>
int main()
{
    int number,yuzler,onlar,birler,count,i;
    count=0;
    printf("enter a number");
    scanf("%d",&number);
    yuzler=number/100;
    onlar=(number-number%10)%10;
    birler=number%10;

    for(i=100;i<=999;i++)
    {
     yuzler=i/100;
     onlar=(i%100)/10;
     birler=i%10;

     if(yuzler!=onlar && onlar!=birler)
     {
        printf("%d\n",i);
        count++;
     }
    }
    printf("%d kadar sayi vardir",count);
    return 0;
    
    
}