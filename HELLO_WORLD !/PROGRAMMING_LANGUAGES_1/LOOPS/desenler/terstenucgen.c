#include <stdio.h>
int main()
{
     int i,j,k,row;
     printf("satir sayisini giriniz");
     scanf("%d",&row);

     for(i=0;i<row;i++)
     {
        for(k=0;k<i+1;k++)
        {
            printf(" ");
        }
        for(j=row;j>i;j--)
        {
            printf("* ");
        } 
        printf("\n");
     }

    return 0;
}