#include <stdio.h>
int main()
{
    float A[10],sum=0,max,min;
    int i=0;
    
    for(i=0;i<10;i++)
    {
        printf("%d. sayiyi giriniz\n",i+1);
        scanf("%f",&A[i]);
        sum+=A[i];
    }
    max=A[0];
    min=A[0];

    for(i=1;i<10;i++)
    {
        if(A[i]>max)
        max=A[i];
        if(A[i]<min)
        min=A[i];
    }

    printf("10 sayinin ortalamasi = %d\n",sum/10);
    printf("max = %.2f ve min = %.2f ve (max+min)/2 = %.2f ",max,min,(max+min)/2);
    return 0;
}