#include <stdio.h>
int main()
{
     int i,rows,j,space,number=1;;
     
     printf("satir sayisini giriniz");
     scanf("%d",&rows);
     
     for(i=0;i<rows;i++)
     {
        for(space=1;space<=rows-i;space++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
          if(j==0 || i==0)
          {
            number=1;
          }
          else{
            number=number*(i-j+1)/j;
          }
          printf("%4d",number);
        }
        printf("\n");
     }
    return 0;
}