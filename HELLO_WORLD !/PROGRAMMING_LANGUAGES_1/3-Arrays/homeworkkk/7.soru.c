/* Bölme işlemini çıkarma kullanarak yapan programın algoritma ve akış
diyagramını çiziniz. */
#include <stdio.h>

int main()
{
    int num1,num2,i;
    
    printf("boluneni giriniz ");
    scanf("%d",&num1);

    printf("boleni giriniz ");
    scanf("%d",&num2);

    i=0;

    while(num1>=num2)
    {
        num1-=num2;
        i++;
    }

    printf("%d",i);

    return 0;
}