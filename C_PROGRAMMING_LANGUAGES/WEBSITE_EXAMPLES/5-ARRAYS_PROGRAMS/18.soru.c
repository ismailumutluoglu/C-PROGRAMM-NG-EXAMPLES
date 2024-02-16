#include <stdio.h>

int main()
{
    int arr[4][4];
    int i,j,temp;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
         
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4/2;j++)
        {
            temp = arr[i][j];
            arr[i][j]=arr[i][3-j];
            arr[i][3-j]=temp;
        }
          
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr[i][j]);
        }
          printf("\n");
    }

    return 0;
}

