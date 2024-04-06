//Girilen Sayının Rakamlarını Toplayan Program
#include <stdio.h>
int main(){
    
    int num;
    printf("enter a number");
    scanf("%d",&num);
    long int sum;
    sum=0;
    while (num>0)
    {
        int a ;
        a=num%10;
        num=num/10;
        sum=sum+a;
    }
  printf("%ld",sum);

    return 0;
}