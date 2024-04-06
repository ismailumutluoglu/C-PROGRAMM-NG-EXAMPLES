/* Furkan, bir romanın her gün bir önceki gün okuduğu sayfadan 5 sayfa fazlasını 
okumaktadır. İlk gün 10 sayfa okuyarak başlayan Furkan' ın 1.000 sayfalık bir romanı kaç 
günde bitireceğini bulan programı C dilinde kodlayınız. */

#include <stdio.h>
int main()
{
    int sum,i,sayfa;
    i=0;
    sum=0;
    sayfa=10;
    while(sum<=1000)
    {
      sum+=sayfa;
      sayfa+=5;
      i++;
    }
    printf("%d",i-1);
    return 0;
}