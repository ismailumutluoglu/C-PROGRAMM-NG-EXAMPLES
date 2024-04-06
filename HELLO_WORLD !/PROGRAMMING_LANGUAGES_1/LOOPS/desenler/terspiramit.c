#include <stdio.h>
int main()
{
    int rows2,i,j,space,rows,k,n,m; //k=row n=bosluk m=yildiz
    printf("satir sayisini giriniz");
    scanf("%d",&rows);
    rows2=rows;
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
     

    for(i=1;i<=rows2-1;i++)
    {
        for(space=1;space<=i;space++)
        {
            printf(" ");
        }
        for(j=rows2-1;j>=i;j--)
        {
            printf("* ");
        } 
        printf("\n");
    }
      
      
    return 0;
}