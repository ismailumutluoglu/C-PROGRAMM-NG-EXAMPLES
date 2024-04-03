#include <stdio.h>

int main()
{
    int var = 10 ; 
    int *p = &var ; 
    printf("Adress of var is : %d",&var); // adress of var
    printf("\nAdress of var is : %d",p); //  adress of var

    printf("\nValue of var is : %d",var); // 10
    printf("\nValue of var is : %d",*p);  // 10  
    printf("\nValue of var is : %d",*(&var));  //10

    printf("\nValue of pointer p is : %d",p); //adress of var
    printf("\nAdress of pointer p is : %d",&p); // pointarın adresi

    return 0 ; 
}