#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int binary_2,binary,decimal,remainder,i;
    int sum,count;
    sum=0;
    count=0;
    
    printf("enter a binary number");
    scanf("%d",&binary);
    binary_2=binary;
     
    while(binary>0)
    {
        remainder=binary%10;
        count++;
    }
    for(i=0;i<count;i++)
    {
       while(binary_2>0)
       {
        remainder=binary_2%10;
        sum+=pow(remainder,i);
        binary_2/=binary_2;
       }
    }
      return 0;
}