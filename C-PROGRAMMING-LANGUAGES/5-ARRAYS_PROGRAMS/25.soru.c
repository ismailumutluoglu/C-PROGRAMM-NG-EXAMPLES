#include <stdio.h>

int main()
{
    int mat[4][4] = { { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 },
                      { 1, 2, 3, 4 } };
    
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0 || i == 3 || j == 0 || j == 3)
            {
                printf("%d",mat[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}