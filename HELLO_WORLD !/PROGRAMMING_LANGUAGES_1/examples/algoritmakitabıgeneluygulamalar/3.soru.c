// while döngüsü ile faktöriyel hesabı

#include <stdio.h>
int main()
{
    int number,F,i;
    i=1;
    F=1;
    printf("enter a number");
    scanf("%d",&number);
    while(i<=number)
    {
        F*=i;
        i++;
    }
    return 0;
}