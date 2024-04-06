// binary to decimal
#include <stdio.h>
#include <math.h>
int main()
{
    int copy_number,number,i,sum,kalan;
    
    printf("sayi giriniz");
    scanf("%d",&number);
    copy_number=number;

    i=0;
    sum=0;

    while(number>0)
    {
        kalan=number%10;
        sum+=kalan*pow(2,i);
        number/=10;
        i++;
    }
    printf("%d sayisinin onluk sistemdeki gösterimi : %d",copy_number,sum);
    return 0;
}