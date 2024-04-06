/*  20 kişilik bir sınıfta öğrencilerin bir dersten aldığı notlar klavyeden girilecektir. Notlar 
girildikten sonra, sınıfın ortalamasını, sınıftaki en yüksek ve en düşük notu bulan ve ekranda 
gösteren programın kodunu C diliyle yazınız */

#include <stdio.h>
int main()
{
    int i,not,sum,max,min;
    float ort=0.0;
    
    sum=0;
    max=-1;
    min=101;
    
    for(i=1;i<=20;i++)
    {
      printf("%d. ogrencinin notunu giriniz\n",i);
      scanf("%d",&not);
       if(not>max)
        max=not;

       if(not<min)
         min=not;
         sum+=not;
    }
    ort=(float)sum/(i-1);
    
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    printf("%.2f",ort);
    return 0;

}