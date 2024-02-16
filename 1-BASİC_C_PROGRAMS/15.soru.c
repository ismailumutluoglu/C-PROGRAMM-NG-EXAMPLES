#include <stdio.h>
int DikdortgeninAlani(int A,int B);
int main()
{
    int A = 10 ; 
    int B = 20 ; 
    printf("dikdortgenin alani : %d",DikdortgeninAlani( A, B));
    return 0;
}
int DikdortgeninAlani(int A,int B)
{
    return A*B;
}