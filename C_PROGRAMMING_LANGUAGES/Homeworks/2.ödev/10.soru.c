#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i3,i2,n,sum,i,j,remainder,count;

    printf("n sayisini giriniz");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        i3=i2=i;
        sum=0;
        count=0;
        while(i2>0)
        {
            i2=i2/10;
            count++;
        }
      while(i3>0)
      {
        remainder=i3%10;           
                                              
        i3=i3/10;
      }
      if(sum==i)
      {
        printf("%d\n",i);
      }
    }
     return 0 ; 
}