#include <stdio.h>
int main()
{
    int i,j,k,n;
    
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
            printf("%d\n",i);
        }
    }
    return 0;
}