#include <stdio.h>
int x = 5 ; //7
void fonk(void);
int main()
{
    x++; 
    printf("x = %d\n",x); //6
    fonk(); //6,7
    int x = 10 , y = 20 ;
    {
        printf("x = %d , y = %d\n",x,y);  //10,20
        {
            int y = 30;
            
            x++;  
            y++; 

            printf("x = %d , y = %d\n",x,y);  //11,31
        }

            printf("x = %d , y = %d\n",x,y); //11,20
    }
        printf("x = %d",x); //11 // buradaki ifade önemli !! buradaki x maindaki x i ifade ediyor
    return 0 ; 
}
void fonk(void)
{
    printf("x = %d\n",x); //6
    x++;
    printf("x = %d\n",x); //7
}