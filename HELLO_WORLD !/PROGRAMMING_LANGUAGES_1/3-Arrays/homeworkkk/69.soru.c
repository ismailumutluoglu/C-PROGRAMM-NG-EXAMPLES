#include <stdio.h>

int main()
{
    int n2,N,i;
    printf("n sayisini giriniz");
    scanf("%d",&N);
    n2=N;
    int A[N];

    for(i=0;i<N;i++)
    {
        printf("%d. sayiyi giriniz",i+1);
        scanf("%d",&A[i]);
        if((N-1)!= i)
        {
            printf("%d. sayiyi giriniz",N-1);
            scanf("%d",&A[N-1]);
             N--;
        }
    }
    N=n2;
    for(i=0;i<N;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
} 


