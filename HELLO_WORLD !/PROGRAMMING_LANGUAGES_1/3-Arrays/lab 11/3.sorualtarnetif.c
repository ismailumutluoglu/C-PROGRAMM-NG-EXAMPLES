#include <stdio.h>
int main()
{
    int A[2][5];
    int i,j;
    float sum1=0.0,sum2=0.0;

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
           if(i==1)
           {
            printf("%d. ogrencinin boyunu giriniz\n",j+1);
            scanf("%d",&A[0][j]);
            sum1+=A[0][j];
           }
           else
           {   
            printf("%d. ogrencinin kilosunu giriniz\n",j+1);
            scanf("%d",&A[1][j]);
           }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t",A[i][j]);
        }
        if(i==0)
        {
             printf(" %.2f\n",sum1/5);
        }
        else
        {
            printf(" %.2f\n",sum2/5);
        }
         printf("\n");
    }
    
        return 0;
}