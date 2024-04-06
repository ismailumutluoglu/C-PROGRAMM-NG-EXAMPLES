// SINAVDA  ÇIKACAK OLAN KISIM BURASI BAYA ÖNEMLİ 
#include <stdio.h>

int main()
{
    char name = 'P' ;
    int x = 7 ; 
    double y = 10 ; 
    char* nameptr = &name ;
    int* xptr = &x ; 
    double* yptr = &y ;

    printf("name in ilk adresi = %p , ilk degeri = %c\n",nameptr,*nameptr);
    printf("x in ilk adresi = %p , ilk degeri = %d\n",xptr,*xptr);
    printf("y nin ilk adresi = %p , ilk degeri = %lf\n\n",yptr,*yptr);
    nameptr++;
    xptr++;
    yptr++;
    printf("name in son adresi = %p , son degeri = %c\n",nameptr,name);
    printf("x in son adresi = %p , son degeri = %d\n",xptr,x);
    printf("y nin son adresi = %p , son degeri = %lf\n\n",yptr,y );

    return 0 ; 
}