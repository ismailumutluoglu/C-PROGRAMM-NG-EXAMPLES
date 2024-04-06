// 2. Klavyeden girilen iki sayı arasında rastgele sayı üretecek bir fonksiyon yazınız. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(int x , int y);

int main()
{
    int number1 , number2 ;

    printf("rastgele iki sayi üretilecek araliği giriniz : ");
    scanf("%d%d",&number1,&number2);

    printf("%d-%d arasinda uretilen rastgele sayi = %d",number1,number2,randomNumber(number1,number2));
    return 0 ; 
}
int randomNumber(int x , int y)
{
    int sayi ; 
    srand(time(NULL));
    sayi = rand() % x + (y-x) ;

    return sayi ; 
}