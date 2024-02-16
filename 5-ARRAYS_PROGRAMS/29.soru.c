#include <stdio.h>

int main()
{
    int mat[3][3] = { { 2, 4, 6 }, { 8, 2, 3 }, { 1, 9, 4 } };
    int i ,j,temp;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3/2;j++) // ÖNEMLİ /2 OLMASI ÇÜNKÜ J LER DEĞİŞİYOR
        {
            temp = mat[i][j] ;
            mat[i][j] = mat[i][2-j];
            mat[i][2-j] = temp ; 
           
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}