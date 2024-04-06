#include <stdio.h>

int main()
{
    int number , i ;
    i = 0  ;
    do
    {
        printf("enter a number : "); 
        scanf("%d",&number);
        i++;
    }while(number != 5);
    
    printf("%d",i-1);

    return 0 ; 
}