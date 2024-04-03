#include <stdio.h>
int carpim_sayilar(int num1 , int num2);
int main()
{
    int number1,number2 ; 
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&number1);

    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&number2);

    printf("%d x %d = %d",number1,number2,carpim_sayilar(number1,number2));
    return 0 ; 
}
int carpim_sayilar(int num1 , int num2)
{
    if(num2 >= 1)
    {
        return num1 + carpim_sayilar(num1,--num2);
    }
    return 0 ; 
}