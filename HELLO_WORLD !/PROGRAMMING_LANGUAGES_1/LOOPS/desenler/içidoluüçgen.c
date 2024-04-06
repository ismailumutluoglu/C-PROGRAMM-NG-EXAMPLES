#include <stdio.h>
int main()
{
    int i,space,rows,j;
    
    printf("satir sayisini giriniz");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}