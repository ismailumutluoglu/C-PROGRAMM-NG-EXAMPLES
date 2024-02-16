#include <stdio.h>

void LargestNumber(int A,int B,int C)
{
    if(A>B && A>C)
    {
        printf("%d is largest",A);
    }
    else if(B>A && B>C)
    {
        printf("%d is largest",B);
    }
    else
    {
        printf("%d is largest",C);
    }
}

int main()
{
    int X,Y,Z;
    printf("3 adet sayi giriniz");
    scanf("%d%d%d",&X,&Y,&Z);
    LargestNumber(X,Y,Z);
    return 0;
}