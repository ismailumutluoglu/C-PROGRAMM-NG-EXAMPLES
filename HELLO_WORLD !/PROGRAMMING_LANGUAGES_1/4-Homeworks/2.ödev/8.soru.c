#include <stdio.h>
int main()
{
    int i,j,k,n,sum;
    sum=0;
    printf("n sayisini giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }
        }
        if(k==2)
        {
            sum+=i;
        }
    }
    printf("%d",sum);
    return 0;
}