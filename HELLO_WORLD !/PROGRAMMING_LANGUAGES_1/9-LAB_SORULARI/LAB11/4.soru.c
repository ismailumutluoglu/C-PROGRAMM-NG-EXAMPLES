// 10 elemanlı diziyi klavyeden alan ve tersten ekrana yazan programı yazınız.

#include <stdio.h>

int main()
{
    int array[10] ;    
    int i ; 
    int gecici ;
    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d . elemani giriniz : ",i+1);
        scanf("%d",&array[i]);
    }

    for(i = 9 ; i >=0 ; i--)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    for(i = 0 ; i < 5 ; i++)
    {   
        gecici  = array[i];
        array[i] = array[9-i];
        array[9-i] = gecici ;
    }
    for(i = 0 ; i < 10 ; i++)
    {   
        printf("%d ",array[i]);
    }

    return 0 ; 
}