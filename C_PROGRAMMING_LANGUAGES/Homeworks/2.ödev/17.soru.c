#include <stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("n sayisini giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=(float)1/i;
    }
    printf("%f",sum);
    return 0 ; 
}