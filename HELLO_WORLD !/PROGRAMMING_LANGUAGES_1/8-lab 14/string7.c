#include <stdio.h>

int main()
{
    char str[] = "This is text string" ;
    char str2[50] ;
    int x, y ;

    printf("baslangic sayini gir");
    scanf("%d",&x) ;

    printf("bitis sayini gir");
    scanf("%d",&y) ;

    int i = 0 ; 

    for(int j = x-1 ; j <=x-1+y ; j++)
    {
        str2[i] = str[j] ;
        i++;
    }   

    printf("%s",str2) ;
    
    return 0 ; 
}