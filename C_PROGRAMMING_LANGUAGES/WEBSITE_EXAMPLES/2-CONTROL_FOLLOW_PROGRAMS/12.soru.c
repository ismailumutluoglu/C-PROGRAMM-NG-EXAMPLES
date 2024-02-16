// C Program to Find LCM of Two Numbers 

#include <stdio.h>

int main()
{
    int number1,number2,LCM,i,HCF;

    printf("enter first number : ");
    scanf("%d",&number1);

    printf("enter second number : ");
    scanf("%d",&number2);

    for(i = 1; i <= number1; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            HCF=i;
        }
    }
    
    LCM = (number1 * number2) / HCF;

    printf("LCM of entered two number is %d",LCM);
    return 0;
}