/*
İki boyutlu olarak oluşturulan matrise matris[i,j] dışarıdan değer
girilen programın algoritma ve akış diyagramı çiziniz.
*/
#include <stdio.h>

int main()
{
    int i,j;
    printf("i ve j sayilarini giriniz : ");
    scanf("%d%d",&i,&j);
    int A[i][j];

    for(int k=0;k<i;k++)
    {
        for(int m=0;m<j;m++)
        {
            printf("%d. satirin %d.sutununu giriniz ",k+1,m+1);
            scanf("%d",&A[k][m]);
        }
    }
    for(int k=0;k<i;k++)
    {
        for(int m=0;m<j;m++)
        {
            printf("%d\t",A[k][m]);
        }
        printf("\n");
    }
    return 0;
}

