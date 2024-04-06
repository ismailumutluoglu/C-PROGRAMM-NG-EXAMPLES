//klavyeden girilen bir a tam sayisinin tam bölenlerini hesaplayan program
#include <stdio.h>
int main()
{
    int a,i;
    printf("bir sayi giriniz");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}