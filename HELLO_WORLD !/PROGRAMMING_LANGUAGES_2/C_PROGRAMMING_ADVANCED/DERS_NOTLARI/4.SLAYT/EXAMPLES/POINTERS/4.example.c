#include <stdio.h>

int main()
{
    int x , y , z  ; 
    int *int_addr ; 
    x = 41 ; 
    y = 12 ; 

    int_addr = &x ; // x in adresini belirtiyor
    z = *int_addr ; // z = int addr ın içeriğini yani x i gösterir 

    printf("z : %d\n",z); // 41 ; 
    int_addr = &y ; // y nin adresi atandı 
    z = *int_addr ;  // z = y 
    printf("z : %d\n",z) ; // z = 12 ; 
    return 0 ; 
}