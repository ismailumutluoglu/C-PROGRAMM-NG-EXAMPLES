#include <stdio.h>
#include <math.h>
int main()
{
    int F,i,n,x,j;
    double sum=0;

    printf("x sayisini giriniz");
    scanf("%d",&x);

    printf("adim sayisini giriniz");
    scanf("%d",&n);
     
    for(i=0;i<n;i++)
    {
      F=1;
      for(j=1;j<=2*i;j++)
      {
        F*=j;
      }
      if(i%2==0)
      {
        sum+=pow(x,2*i)/F;
      }
      else{
        sum-=pow(x,2*i)/F;
      }
        
    }
          printf("%lf",sum);
    return 0;
}