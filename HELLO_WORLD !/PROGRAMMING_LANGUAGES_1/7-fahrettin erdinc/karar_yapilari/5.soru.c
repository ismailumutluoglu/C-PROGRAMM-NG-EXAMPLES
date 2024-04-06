#include <stdio.h>

int main()
{
    int n ,number, toplam = 0  ;
    float ort = 0.0 ; 

    printf("enter n ");
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++)
    {
        printf("enter a number : ");
        scanf("%d",&number);
        toplam += number;
    }
    ort = toplam / n ; 
    printf("%.2f",ort);
    return 0 ; 
}