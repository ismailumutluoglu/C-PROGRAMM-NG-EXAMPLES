#include <stdio.h>
int main()
{
    int i,j,k,row;

    printf("satir sayisini giriniz");
    scanf("%d",&row);

    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==(row-1) || i==0 || j==0 || j==i*2+1)
            {
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     return 0;
}