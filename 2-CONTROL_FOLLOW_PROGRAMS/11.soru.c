#include <stdio.h>

void Fibonacci(int N)
{
    int A,B ;
    int sum = 0;
    A = 1;
    B= 1;
    for(int i = 1;i<=N;i++)
    {
        if(i==1 || i==2)
        {
            printf("%d\t",A);
        }
        if(i>2)
        {
            sum = A + B ;
            A = B;
            B = sum;
            printf("%d\t",sum);
        }
    }
}
int main()
{
    int N = 8;
    Fibonacci(N);
    return 0;
}