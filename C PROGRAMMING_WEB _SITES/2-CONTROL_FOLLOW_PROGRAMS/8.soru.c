#include <stdio.h>

int Fac(int N)
{
    if(N>0)
    {
        return N*Fac(N-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int N ; 
    printf("faktoriyeli alinacak sayiyi giriniz");
    scanf("%d",&N);

    printf("%d",Fac(N));
    return 0;
}
