#include <stdio.h>
int main()
{
    int i,j,rows,k;

    printf("satir sayisini giriniz ");
    scanf("%d",&rows);

    for(i=0;i<rows;i++)
    {
      for(k=1;k<=rows-i;k++)
      {
        printf(" ");
      }
      for(j=1;j<=2*i+1;j++)
      {
        printf("*");
      }
      printf("\n");
    }
    return 0;
}