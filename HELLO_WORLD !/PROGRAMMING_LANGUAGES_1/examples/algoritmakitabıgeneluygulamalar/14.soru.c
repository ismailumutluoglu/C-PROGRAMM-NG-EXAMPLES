#include <stdio.h>
int main()
{
    int n,max,num,i;

    i=1;
    max=-1;

    printf("n sayisini giriniz");
    scanf("%d",&n);

    do{
        printf("bir sayi giriniz");
        scanf("%d",&num);
        if(num%2==0)
        {
          if(num>max)
          {
            max=num;
          }
        }
        i++;
    }while(i<=n);

    printf("girilen sayilar arasindan en buyuk cift olani = %d",max);

    return 0;
}