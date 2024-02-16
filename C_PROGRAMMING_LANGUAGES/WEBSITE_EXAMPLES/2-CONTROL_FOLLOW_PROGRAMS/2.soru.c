#include <stdio.h>

void CheckNumber(int A)
{
    if(A%2==0)
    {
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main()
{
    int N ;

    printf("enter N value ");
    scanf("%d",&N);

    CheckNumber(N);
    return 0;
}