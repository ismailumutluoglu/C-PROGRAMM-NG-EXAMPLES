#include <stdio.h>
int main()
{
    int A[3][4],B[3][4],C[3][4],i,j;

 

    // A için;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    //B için;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
    }

    // toplamları;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }


    return 0;

}