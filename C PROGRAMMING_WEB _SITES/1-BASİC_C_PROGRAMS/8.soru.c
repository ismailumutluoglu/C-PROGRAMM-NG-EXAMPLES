#include <stdio.h>
void SwapNumbers(int A,int B)
{
    int temp;
    temp=A;
    A=B;
    B=temp;
    printf("A = %d \n",A);
    printf("B = %d \n",B);
}
int main()
{
    int A,B;
    A=5;
    B=7;
    swapNumbers();
    return 0;
}
