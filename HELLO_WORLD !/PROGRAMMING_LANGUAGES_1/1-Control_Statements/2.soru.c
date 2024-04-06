#include <stdio.h>
int main()
{
    int A,B,C;
    printf("A sayisini giriniz");
    scanf("%d",&A);
    printf("B sayisini giriniz");
    scanf("%d",&B);
    C=A;
    A=B;
    B=C;
    printf("A nin yeni degeri %d dir\n",A);
    printf("B nin yeni degeri %d dir",B);

    return 0;
}