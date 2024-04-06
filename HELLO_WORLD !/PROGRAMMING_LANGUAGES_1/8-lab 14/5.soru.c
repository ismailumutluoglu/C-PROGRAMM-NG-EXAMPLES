#include <stdio.h>

void controlAsalSayi(int x );

int main()
{
    int x ; 

    printf("enter a number");
    scanf("%d",&x);

    controlAsalSayi(x);

    return 0 ; 
}

void controlAsalSayi(int x)
{
    int i , k = 0 ; 

    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            k++;
        }
    }

    if(k==2)
    {
        printf("%d sayisi asal sayi",x);
    }
    else
    {
        printf("%d sayisi asal sayi degil",x);
    }
}