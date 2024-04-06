#include <stdio.h>
void decimal_to_binary(int *num);
void decimal_to_octal(int *num);
void decimal_to_hexadecimal(int *num);  
int main()
{
    int number ;
    printf("bir sayi giriniz : ");
    scanf("%d",&number);
    int choise ; 
    printf("1-) Decimal to binary\n2-)Decimal to Octal\n3-)Decimal to Hexadecimal\n");
    printf("Hangisini yapmak istersinizi seciniz : ");
    scanf("%d",&choise);
    
    switch (choise)
    {
    case 1 :
        decimal_to_binary(&number);
        break;
    case 2 : decimal_to_octal(&number);
        break ; 
    case 3 : decimal_to_hexadecimal(&number);
        break ; 
    }
    return 0 ; 
}
void decimal_to_binary(int *num)
{
    int  x  = *num ; 
    if(*num > 0)
    {
        *num = *num / 2 ;
        decimal_to_binary(num);
        printf("%d",x % 2);
    }
}
void decimal_to_octal(int *num)
{
    int  x  = *num ; 
    if(*num > 0)
    {
        *num = *num / 8 ;
        decimal_to_octal(num);
        printf("%d",x % 8);
    }
}
void decimal_to_hexadecimal(int *num)
{
    int x = *num ; 
    if(*num > 0)
    {
        *num = *num / 16 ; 
        decimal_to_hexadecimal(num);
        int remainder = x % 16 ; 
        if(remainder < 10 )
        {
            printf("%d",remainder);
        }
        else
        {
            switch (remainder)
            {
            case 10 :
                printf("%c",'A');
                break;
            case 11 : 
                printf("%c",'B');
                break;
            case 12 :
                printf("%c",'C');
                break;
            case 13 : 
                printf("%c",'D');
                break;
            case 14 : 
                printf("%c",'E');
                break;
            case 15 :
                printf("%c",'F');
                break;
            }
        }
    }
}
