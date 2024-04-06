#include <stdio.h>

int main()
{
    int arr1[4][4],arr2[4][4];
    int i,j,flag;

    flag = 0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {   
            printf("arr1[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr1[i][j]==arr2[i][j])
            {
                flag = 1;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;
}