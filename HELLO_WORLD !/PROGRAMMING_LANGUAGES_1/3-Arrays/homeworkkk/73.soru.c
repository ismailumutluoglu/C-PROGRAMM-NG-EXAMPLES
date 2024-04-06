#include <stdio.h>

int main()
{
    int N,i,negatif,pozitif;
    negatif=pozitif=0;

    printf("dizi kac elemanli olacak giriniz");
    scanf("%d",&N);

    int A[N];

    for(i=0;i<N;i++)
    {
        printf("A[%d] ",i);
        scanf("%d",&A[i]);

        if(A[i]<0)
        {
            negatif++;
        }
        else{
            pozitif++;
        }
    }

    printf("%d tane negatif %d tane pozitif sayi vardir",negatif,pozitif);
    return 0;
}