// matrisin çarpımıx    
#include <stdio.h>

int main()
{
    int a[4][4];
    int b[4][4];
    int c[4][4];

    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)   
        {
           c[i][j] = 0 ;

           c[i][j] += a[i][]*b[][] ;
        }
    }
        return 0 ; 
}

// a[0][0]*b[0][0]+a[0][1]*b[1][0]    a[0][0]*b[0][1]+a[0][1]*b[1][1]

// a[1][0]*b[0][0]+a[1][1]*b[1][0]    a[1][0]*b[0][1]+a[1][1]*b[1][1]