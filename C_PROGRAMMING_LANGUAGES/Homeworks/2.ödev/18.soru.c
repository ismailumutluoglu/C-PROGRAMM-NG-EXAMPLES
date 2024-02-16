#include <stdio.h>
int main()
{
    int a,i,j,k,n;

    printf("terim sayisini giriniz");
    scanf("%d",&n);

   
    for(i=1;i<=n;i++)
    {
        a=i;
       for(j=1;j<=i;j++)
       {
           if(a%2==0)
           {
            printf("0");
           }
           else{
            printf("1");
           }
           a++;
       }
       printf("\n"); 
    }
    return 0;
}