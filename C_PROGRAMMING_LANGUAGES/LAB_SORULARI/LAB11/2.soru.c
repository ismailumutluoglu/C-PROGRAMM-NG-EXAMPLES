// Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini 
// ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.) ,

#include <stdio.h>

int main()
{
    int array[10] ;
    int i ,j; 
    
    for(i = 0  ; i < 10 ; i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d ",&array[i]);

        if(array[i] == -1)
        {
            break;
        }
    }

    for(j = 0 ; j < i ; j++)
    {
        printf("%d ",array[j]*array[j]);
    }
    return 0 ; 
}