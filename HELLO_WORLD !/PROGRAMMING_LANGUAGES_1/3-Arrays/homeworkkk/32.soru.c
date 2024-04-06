#include <stdio.h>
int main()
{
    int A,B,C,D;

    printf("A,B,C,D kenar uzunkluklarini giriniz"); 
    scanf("%d%d%d%d",&A,&B,&C,&D);

    if(A==B && B==C && C==D)
    printf("YES");
    else
    printf("NO");
    return 0;
}