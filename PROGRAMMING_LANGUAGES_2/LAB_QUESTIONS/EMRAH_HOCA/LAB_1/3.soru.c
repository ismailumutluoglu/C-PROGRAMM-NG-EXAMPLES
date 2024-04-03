#include <stdio.h>
void Decimal_to_Binary(int x);

int main()
{
    int number ; 

    printf("sayi giriniz : ");
    scanf("%d",&number);
    
    Decimal_to_Binary(number);
    return 0 ; 
}

void Decimal_to_Binary(int x)
{
    if(x > 0 )
    {
        Decimal_to_Binary(x/2);
        printf("%d",x%2); 
    }
}