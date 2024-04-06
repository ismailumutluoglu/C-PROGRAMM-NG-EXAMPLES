#include <stdio.h>
int main()
{
    int number1,number2,i,sonuc;

    printf("number 1 : ");
    scanf("%d",&number1);

    printf("number 2 : ");
    scanf("%d",&number2);

    for(i=1;i<=number1;i++)
    {
        if(number1%i==0 && number2%i==0)
        {
            sonuc=i;
        }
    }
    printf("%d",sonuc);
    return 0 ;
}