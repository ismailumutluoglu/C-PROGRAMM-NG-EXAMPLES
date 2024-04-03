// iki sayının en küçük ortak katını bulan recursive program

int ekok_func(int num1 , int num2);

int main()
{
    int number1,number2 ; 
    printf("birinci sayiyi giriniz : ");
    scanf("%d",&number1);
    printf("ikinci sayiyi giriniz : ");
    scanf("%d",&number2);

    printf("%d",ekok_func(number1,number2));
    return 0 ; 
}

int ekok_func(int num1 , int num2)
{

}