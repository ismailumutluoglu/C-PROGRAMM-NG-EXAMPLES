#include <stdio.h>
#include <math.h>

float* adres_gonderme(float *ptr);
int main()
{
    float number ;
    float *ptr ; 

    printf("bir sayi giriniz : ");
    scanf("%f",&number);
    
    ptr = adres_gonderme(&number);

    printf("%f",*ptr);
    return 0 ; 
}
float* adres_gonderme(float *ptr)
{
    *ptr = sqrt(*ptr);
    return ptr ; 
}