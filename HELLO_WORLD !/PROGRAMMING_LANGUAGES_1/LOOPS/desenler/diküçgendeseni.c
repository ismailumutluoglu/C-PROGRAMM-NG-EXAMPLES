#include <stdio.h>
int main()
{
    int i,j,rows;
    
    printf("satir sayisini giriniz");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}