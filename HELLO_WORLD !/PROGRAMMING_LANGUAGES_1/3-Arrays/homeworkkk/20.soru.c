/*1.1-100 arasındaki çift sayıların toplamının mükemmel sayı olup
olmadığını bulan programın algoritma ve akış diyagramını çiziniz.
*/
#include <stdio.h>
int main()
{
    int i,sum1,sum2,j;

    sum1=0;
    sum2=0;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            sum1+=i;
            for(j=1;j<i;j++)
            {
                if(i%j==0)
                {
                    sum2+=i;
                }
            }
        }
    }

    if(sum1==sum2)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
    
    return 0;
}