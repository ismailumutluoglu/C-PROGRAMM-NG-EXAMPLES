#include <stdio.h>
float Carpim(float A,float B);
int main()
{
    float A,B;
    
    printf("A sayisini giriniz : ");
    scanf("%f",&A);

    printf("B sayisini giriniz : ");
    scanf("%f",&B);

    printf("%f * %f = %.2f",A,B,Carpim(A,B));
    return 0;
}
float Carpim(float A,float B)
{
    return A*B;
}