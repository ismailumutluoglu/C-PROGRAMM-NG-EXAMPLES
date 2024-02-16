#include <stdio.h>
int AddNumbers(int A,int B);
int main()
{
    int A = 5 ;
    int B = 8 ; 

    printf("%d",AddNumbers( A, B));
    return 0;
}

int AddNumbers(int A,int B)
{
    return A+B;
}