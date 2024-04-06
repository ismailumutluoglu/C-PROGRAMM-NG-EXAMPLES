#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,sum,n;
    printf("adim sayisini giriniz");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
     for(j=0;j<=i;j++)
     {
        sum+=pow(10,j);
     }
    }
    printf("%d",sum);
    return 0;
}