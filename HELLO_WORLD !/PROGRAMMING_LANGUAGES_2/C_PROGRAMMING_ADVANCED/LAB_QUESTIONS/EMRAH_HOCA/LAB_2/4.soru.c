#include <stdio.h>
//myArray adresi = 012FFA78 ---  
int main()
{
    double *m , **k , myArray[5] = {1.0,2.0,3.0,4.0,5.0};
    printf("%p\n",&myArray[0]);
    m = myArray; 
    printf("%.1f\n",*(m+1)); // 2 olacak
    printf("%.f\n",*(m+3));
    *(m+3) += 3.86 ; 
    m += 2 ;
    printf("%.1f\n",*(m+1)); // 7.86 olacak
    m = &myArray[3] ; 
    k = &m ; 
    printf("%.1f\n",*(*(k)-1)) ; // myArray[2] ' yi bastır . //3 
    printf("%p\n",*k) ; //myArray[3] adresini istiyor . 012FFA78 + 24 bayt = 61fdf0 
    m = m - 1 ; m = &myArray[2] ; 
    printf("%p\n",m) ; // myArray[2] nin  adresini istiyor . 012FFA78 + 16 bayt 61fde8
    printf("%p",&myArray[1]) ; 
    return 0 ; 
}