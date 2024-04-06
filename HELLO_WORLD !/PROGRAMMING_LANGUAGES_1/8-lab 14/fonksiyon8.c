#include <stdio.h>

int main()
{
    int dizi[10] = {1,2,1,2,4,5,7,8,9,10};

    int i ,j ;

    int count ;
    
    for( i = 0 ; i < 10 ; i++)
    {
        count = 0 ; 
        if( i != j)
        {
            for( j = 0 ; j < 10 ;j++)
            {
                if(dizi[i] == dizi[j])
                {
                    count++;
                }
            }
            printf("%d sayisi %d kez tekrar etmektedir .\n",dizi[i],count) ;
        }
        
    }
    return 0 ; 
}