//çarpma operatörü kullanmadan çarpma yapma

#include <stdio.h>
int main()
{
   int a,b,sum,i;
   sum=0;
   printf("birinci sayiyi giriniz");
   scanf("%d",&a);
   printf("ikinci sayiyi giriniz");
   scanf("%d",&b);
   for(i=0;i<b;i++)
   {
    sum+=a;
   }
   printf("%d",sum);
    return 0;
}