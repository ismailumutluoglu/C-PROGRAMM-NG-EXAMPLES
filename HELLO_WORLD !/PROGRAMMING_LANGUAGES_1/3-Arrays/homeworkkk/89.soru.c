/* 
[2x2] tipindeki bir kare matrisin transpozesini veren algoritma ve
akış diyagramını çiziniz.
*/

#include <stdio.h>
int main()
{
    int A[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]\n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
            
        }
        printf("\n");  
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            A[j][i]=A[j][i];
            printf("%d\t",A[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}