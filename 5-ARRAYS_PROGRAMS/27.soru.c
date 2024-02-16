#include <stdio.h>

int main()
{
    
    int matrix[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } }; 
    int i,j,sum1,sum2;

    sum1 = sum2 = 0 ; 

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum1+=matrix[i][j];
            }
            if( (i+j) == 2)
            {
                sum2+=matrix[i][j];
            }
        }
    }
    printf("%d\n",sum1);
    printf("%d",sum2);
    return 0 ; 
}