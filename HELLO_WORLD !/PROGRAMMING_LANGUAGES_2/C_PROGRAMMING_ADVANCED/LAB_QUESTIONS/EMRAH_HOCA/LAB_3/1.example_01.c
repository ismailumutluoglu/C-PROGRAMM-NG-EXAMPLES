#include <stdio.h>
int x = 50 ;
int main()
{
    printf("%d\n",x);
    int x = 10 , y = 20 ; 
    {
        printf("x = %d , y = %d\n",x,y) ; 
        {
            
            int y = 30 ;
            x++;
            y++;  
            printf("x = %d , y = %d\n",x,y); 
        }
            printf("x = %d , y = %d\n",x,y);
    }

    printf("x = %d",x);
    return 0 ; 
}

