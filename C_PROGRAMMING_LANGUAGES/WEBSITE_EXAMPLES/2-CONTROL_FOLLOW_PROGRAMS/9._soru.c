#include <stdio.h>

int main()
{
    char operator;
    float x,y;

    printf("bir hesaplama operatoru seciniz\n 1-)+\n2-)-\n3-)*\n4-)/\n");
    scanf("%c",&operator);

    printf("iki adet sayi giriniz");
    scanf("%f%f",&x,&y);

    switch(operator)
    {
        case '+' : printf("%.2f + %.2f = %.2f",x,y,x+y);
        break;

        case '-' : printf("%.2f - %.2f = %.2f",x,y,x-y);
        break;

        case '*' : printf("%.2f * %.2f = %.2f",x,y,x*y);
        break;

        case '/' : printf("%.2f / %.2f = %.2f",x,y,x/y);
        break;
    }
    return 0;
}