#include <stdio.h>
int main()
{
    int a,number,remainder,sum;
      printf("bir sayi giriniz");
      scanf("%d",&number);
      a=number;
      sum=0;
      while(number>0)
      {
      remainder=number%10;
      sum=sum*10+remainder;
      number=number/10;
      }
      if(sum==a){
        printf("polindrom");
      }
      else{
        printf("polindrom degil");
      }
    return 0;
}