#include <stdio.h>
int main()
{
    int a,n,i,result;
    result=1;
    printf("tabani giriniz");
    scanf("%d",&a);
    printf("us degerini giriniz");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result*=i;
    }
    printf("%d",result);
    return 0;
}