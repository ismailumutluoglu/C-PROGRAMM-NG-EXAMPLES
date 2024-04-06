#include <stdio.h>
int main()
{
    int A[10],i,a;

    for(i=0;i<10;i++)
    {
        printf("%d. elemani giriniz",i+1);
        scanf("%d",&A[i]);
    }

    for(i=0;i<5;i++)
    {
        a=A[i];
        A[i]=A[9-i];
        A[9-i]=a;
    }

    for(i=0 ; i<10 ; i++)
        printf("A[%d] = %d\n",i,A[i]);


     return 0;
}