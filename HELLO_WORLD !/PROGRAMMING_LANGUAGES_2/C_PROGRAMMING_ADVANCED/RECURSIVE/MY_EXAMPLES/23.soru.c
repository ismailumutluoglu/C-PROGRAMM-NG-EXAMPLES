#include <stdio.h>
int ekok(int num1 , int num2);
int main()
{
    int number1 , number2 ; 
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&number1);

    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&number2);

    printf("%d",ekok(number1,number2));
    return 0 ; 
}
int ekok(int num1 , int num2)
{
    static int i = 1 ; 

    if(i % num1 == 0 && i % num2 == 0)
    {
        return i ; 
    }
    else
    {
        i++;
        return ekok(num1,num2);
    }
}