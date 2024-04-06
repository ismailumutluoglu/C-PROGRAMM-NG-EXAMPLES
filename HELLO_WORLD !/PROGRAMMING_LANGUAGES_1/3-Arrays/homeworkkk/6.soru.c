/*Çarpma işlemini toplama kullanarak bulan programın algoritma*/
#include <stdio.h>
int main()
{
    int a,b,i,sum;

    sum=0;

    printf("iki sayi giriniz");
    scanf("%d%d",&a,&b);

    for(i=0;i<b;i++)
    {
        sum+=a;
    }
    printf("%d X %d = %d",a,b,sum);
    return 0;
}
