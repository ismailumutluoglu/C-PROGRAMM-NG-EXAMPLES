/* 
10 elemanlı bir sayı dizisinin ortalaması tam sayı ise bu
sayıdan dizide kaç tane olduğunu veren programın algoritma
ve akış diyagramını çiziniz.
*/
#include <stdio.h>
int main()
{
    int A[10],i,ort,sum,k;

    sum=0;
    k=0;
    printf("elemanlari giriniz");

    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    ort=sum/10;
    if(sum%10==0)
    {
      for(i=0;i<10;i++)
    {
        if(A[i]==ort)
        k++;
    }  
    }
    

    printf(" ortalam %d tane vardir",k);
    return 0;
}