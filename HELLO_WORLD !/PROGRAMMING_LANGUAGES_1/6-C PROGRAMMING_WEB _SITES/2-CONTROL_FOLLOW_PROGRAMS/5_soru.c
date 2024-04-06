/* WHİLE LOOP SOLİTİON
#include <stdio.h>
#define N 10

int main()
{
    int i = 0 ;
    int sum = 0;

    while(i <= N)
    {
        sum+=i;
        i++;
    }

    printf("%d",sum);
    return 0;
} */
/* FOR LOOP
#include <stdio.h>
#define N 10 

int main()
{
    int i; 
    int sum = 0;

    for(i=0;i<=N;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}*/
/*  FUNCTİON
#include <stdio.h>
#define N 10 
int SumNaturalNumbers();
int main()
{
    printf("%d",SumNaturalNumbers());
    return 0;
}

int SumNaturalNumbers()
{
    int sum = 0;

    for(int i=0;i<=N;i++)
    {
        sum+=i;
    }
    return sum ;
} */
/*  RECURSİON FUNCTİON
#include <stdio.h>

int SumAllNaturalNumbers(int N)
{
    if(N!=0)
    {
        return N + SumAllNaturalNumbers(N-1);
    }
    else
    {
        return N;
    }       
}

int main()
{
    int A = 5;
    printf("%d",SumAllNaturalNumbers(A));
    return 0;
} */