#include <stdio.h>

int x = 5 ; 
void fonk(void);
int main()
{
    x++; // global x = 6 ; 
    printf("x = %d\n",x); // 6
    fonk();
    int x = 10 , y = 20 ;
    {
        printf("x = %d , y = %d\n",x,y);  // 10 20 

        {
            
            int y = 30 , x = 45;
            
            x++;  // 46
            y++; //31

            printf("x = %d , y = %d\n",x,y); //46 31
        }

            printf("x = %d , y = %d\n",x,y); //10 20
    }

        printf("x = %d",x); //10
    return 0 ; 
}
void fonk(void)
{
    printf("x = %d\n",x); //6
    x++; // global x = 7 oldu 
    printf("x = %d\n",x); // 7
}