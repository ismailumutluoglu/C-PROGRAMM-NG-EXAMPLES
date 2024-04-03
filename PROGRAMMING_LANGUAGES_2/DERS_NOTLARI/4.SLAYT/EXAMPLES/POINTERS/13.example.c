#include <stdio.h>
int main()
{
    int x = 10 ; 
    int* p1 ;
    int* p2;
    p1 = &x ;
    p2 = &x ; 

    printf("x in degeri = %d\n",x);
    printf("x in pointer ile deger gösterimi = %d\n",*p1); //5
    printf("x in pointer ile deger gösterimi = %d\n",*p2); //5

    *p2 = 10 ; 

    printf("%d\n",*p1); //10
    printf("%d",*p2) ; //10

    return 0 ; 
}