#include <stdio.h>
int main()
{
    int a,b,c;
    printf("a,b,c kenarlarini giriniz");
    scanf("%d %d %d",&a,&b,&c);

    if(a!=b && b!=c && a!=c)
    printf("cesitkenar");
    else if (a==b && b==c)
    printf("eskenarkenar");
    else
    printf("ikizkenar");
    
    return 0;
}