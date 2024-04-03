#include <stdio.h>

int carpim(int x , int i);

int main()
{
    int x = 1 , i = 1  ; 
    carpim(x,i);
    return 0 ; 
}
int carpim(int x, int i)
{
    if(x<=10)
    {
        if(i < 11 )
        {
            printf("%d ",x*i) ;
            return carpim(x,i+1);
        }
        printf("\n");
        i = 1 ; 
        return carpim(x+1,i);
    }
}