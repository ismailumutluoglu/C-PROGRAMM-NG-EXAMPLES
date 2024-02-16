#include <stdio.h>

int main()
{
    int m[3][3] = {{6, 3, 1}, 
                   {4, 5, 2}, 
                   {2, 4, 9}};

    int i,j,temp;

    for(i=0;i<3/2;i++) // ÖNEMLİ /2 OLMASI ÇÜNKÜ İ LER DEĞİŞİYOR
    {
        for(j=0;j<3;j++)
        {
            temp = m[i][j] ;
            m[i][j] = m[2-i][j];
            m[2-i][j] = temp ;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}