#include <stdio.h>

 int AsalSayiyiBul();

int main()
{
    int sayi;
    printf("sayi giriniz");
    scanf("%d",&sayi);

    printf("%d",AsalSayiyiBul);

    return 0;
}
int AsalSayiyiBul(int N)
{
    int j,k;
 
    k=0;
    for(j=1;j<=N;j++)
    {
       if(N%j==0)
        {
            k++;
        }
    }

    if(k==2)
    {
        printf("evet asal sayidir");
    }
    else{
        printf("asal degildir");
    }
}
