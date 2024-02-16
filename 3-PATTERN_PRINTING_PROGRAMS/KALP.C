#include <stdio.h>

int main()
{
    int i , j , k ;
    for(i = 0 ; i < 6 ; i++)
    {
        for(k = 0 ; k < 5-i ; k++)
        {
            printf("  ");
        }
        for(j = 0 ; j < (2*(i+3)-1);j++)
        {
            printf("♥ ");
        }
        
        for(k = 0 ; k < 5-i ; k++)
        {
            printf("    ");
        }
        for(j = 0 ; j < (2*(i+3)-1);j++)
        {
            printf("♥ ");
        }
        printf("\n");
    }


     for(i = 0 ; i < 30 ; i++)
     {
         printf("♥ ");
     }
    printf("\n");

    for( i = 15 ; i >0 ; i--)
    {
        for(k = 0 ; k < 15-i ;k++)
        {
            printf("  ");
        }

        for( j = 0 ;  j < 2*i-1 ; j++)
        {
            printf("♥ ");
        }
        printf("\n");
    }
    return 0 ; 
}