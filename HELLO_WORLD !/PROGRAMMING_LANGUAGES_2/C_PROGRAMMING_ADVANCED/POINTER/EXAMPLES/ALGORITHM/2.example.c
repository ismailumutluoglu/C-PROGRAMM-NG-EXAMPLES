// add two numbers with pointers 
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&num1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&num2);
    int* p1 = &num1 ; 
    int* p2 = &num2;
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d + %d = %d\n",*p1,*p2,*p1+*p2); 
    return 0 ; 
}