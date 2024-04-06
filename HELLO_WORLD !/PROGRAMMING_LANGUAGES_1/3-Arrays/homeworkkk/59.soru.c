#include <stdio.h>

int main()
{
    float sum;
    int i,N,j;

    printf("N adim sayisini giriniz ");
    scanf("%d",&N);
    sum=0;
    j=1;
    for(i=0;i<N;i++)
    {
        if(i%2==0)
        {
            sum+=(float)1/(j);
        }
        else{
            sum-=(float)1/(j);
        }
        j+=2;
    }

    printf("%.2f",sum);
    return 0;
}