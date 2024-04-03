#include <stdio.h>

void pointer_cagirma(int *ptr);

int main()
{
    int number ; 
    int *ptr ; 
    printf("bir sayi giriniz : ");
    scanf("%d",&number);
    ptr = &number  ;

    printf("numberin degeri = %d\n",*ptr);
    printf("numberin adresi = %p\n\n",ptr);

    pointer_cagirma(&number) ; 
    return 0 ; 
}
void pointer_cagirma(int *ptr)
{
    printf("numberin degeri = %d\n",*ptr);
    printf("numberin adresi = %p",ptr);
}