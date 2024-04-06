#include <stdio.h>
int main()
{
    int i,num,n,kalan,sum;

    printf("n sayisini giriniz");
    scanf("%d",&n);

    sum=0;
    
    for(i=0;i<n;i++)
    {
        printf("sayi giriniz");
        scanf("%d",&num);

        kalan=num%10;
        sum+=kalan;
    }
    
    printf("%d",sum);
    return 0;
}