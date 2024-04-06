#include <stdio.h>
int main()
{
    float A[50],B[25];
    int i;

   

    for(i=0;i<50;i++)
    {
        printf("%d.elemani giriniz: ",i+1);
        scanf("%d",&A[i]);
    }

    for(i=0;i<25;i++)
    {
        
        printf("B[%d] = %d\n",i,(A[i*2]+A[i*2+1])/2.0);
    }

    return 0;
}