#include <stdio.h>

int main()
{
    int i , *iptr ;     
    double y , *yptr ; 
    iptr = &i ; 
    printf("iptr gösterdigi adress : %d\n",iptr) ; 
    iptr ++ ; 
    printf("iptr gösterdigi adres : %d \n\n",iptr) ; 

    yptr = &y ; 
    printf("yptr gösterdigi adress : %d\n",yptr);
    yptr ++ ; 
    printf("yptr gösterdigi adress : %d",yptr);
    return 0 ;
}