#include <stdio.h>
int main()
{
    int array1[2][2] = {{0,4},{1,3}};
    int array2[2][2] = {{3,2},{5,1}};
    int array3[2][2];

    int i,j;
 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            array3[i][j] = array1[i][j]+array2[i][j] ;
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",array3[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}