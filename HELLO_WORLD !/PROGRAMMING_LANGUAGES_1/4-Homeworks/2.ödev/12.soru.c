#include <stdio.h>
int main()
{
    int sum2,sum,i,j,n;
    printf("n sayisini giriniz");
    scanf("%d",&n);
    sum2=0;
    for(i=1;i<=n;i++)
    {
         sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            {
               sum+=j;
            }
        }
        if(sum==i)
        {
          sum2+=i;
        }
    }
    printf("%d",&sum2);
    return 0;
}