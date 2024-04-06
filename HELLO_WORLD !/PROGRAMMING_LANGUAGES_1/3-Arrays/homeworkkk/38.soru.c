#include <stdio.h>,

int main()
{
    int i,number,tahmin;

    printf("sayiyi giriniz");
    scanf("%d",&number);

    i=1;
    
    while(i<=10)
    {
        printf("%d.tahmin",i);
        scanf("%d",&tahmin);
    if(tahmin==number)
    {
        printf("tebrikler %d. tahminde buldunuz",i);
        break;
    }
    else if (tahmin > number && i!=10)
    {
        printf("in assa\n");
    }
    else if (tahmin<number && i!=10)
    {
        printf("yukari\n");
    }
    else 
    {
        printf("basaramadik abiiiii");
    }
    i++;
    }
    return 0;
}