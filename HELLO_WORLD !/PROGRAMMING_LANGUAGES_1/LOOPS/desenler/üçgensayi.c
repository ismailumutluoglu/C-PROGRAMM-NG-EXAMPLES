#include <stdio.h>
int main()
{
    int i,j,rows;

    printf("satir sayisini giriniz");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}