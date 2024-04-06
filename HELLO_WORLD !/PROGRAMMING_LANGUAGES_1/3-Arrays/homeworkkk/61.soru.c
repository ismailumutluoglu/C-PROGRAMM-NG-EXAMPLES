#include <stdio.h>
int main()
{
    int i,N,F,j,F_2;;
    float sum;
    sum=0;

    printf("adim sayisini giriniz");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        F=1;
        for(j=1;j<=i;j++)
        {
            F=F*j;
        }
        F_2=1;
        for( j=1;j<=N-i;j++)
        {
            sum+=(1/F)+i/F_2;
        }
    }

    printf("%.2f",sum);
    return 0;
}