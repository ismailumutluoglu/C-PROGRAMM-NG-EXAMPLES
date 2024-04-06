// ebob bulan program

#include <stdio.h> 

int fonk(int A , int B, int i );

int main()
{
    int X , Y  ; 
    int i = 1 ; 
    printf("X sayisini giriniz : ");
    scanf("%d",&X);

    printf("Y sayisini giriniz : ");
    scanf("%d",&Y);

    printf("%d",fonk(X,Y,i));
    return 0 ; 
}
int fonk(int A , int B , int i )
{
    static int ebob = 1 ;

    if(i <= B )
    {
        if(A%i == 0 && B%i == 0)
        {
            ebob = i ;
        }
        return fonk(A,B,++i);
    }
        return ebob ; 
    
}