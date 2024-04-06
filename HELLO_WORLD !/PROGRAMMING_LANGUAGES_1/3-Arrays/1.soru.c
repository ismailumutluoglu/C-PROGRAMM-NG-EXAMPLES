#include <stdio.h>
int main()
{
    int i;
    float A[8],sum,ort;
    sum=0.0;

    for(i=1;i<=8;i++)
    {
        printf("dizinin %d. elemanini giriniz",i);
        scanf("%f",&A[i-1]);
        sum+=A[i-1];
    }

    ort=sum/8;
    printf("%.2f",sum);
    
    return 0;
}