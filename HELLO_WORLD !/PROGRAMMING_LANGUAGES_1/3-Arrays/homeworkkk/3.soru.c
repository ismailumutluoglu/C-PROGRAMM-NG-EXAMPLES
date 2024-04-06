//1'den 100'e kadar olan sayılarının küplerinin toplamını bulan programın 
#include <stdio.h>
int main()
{
    int i,sum;
    sum=0;
    
    for(i = 1 ; i < 100;i++)
    {
        sum+=i*i*i;
        printf("%d*%d*%d = %d\n",i,i,i,i*i*i);
    }
     printf("%d",sum);
    return 0;
}