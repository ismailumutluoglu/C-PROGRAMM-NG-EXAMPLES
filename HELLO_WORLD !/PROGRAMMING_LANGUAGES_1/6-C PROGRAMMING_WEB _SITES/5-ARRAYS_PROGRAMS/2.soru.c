#include <stdio.h>

int main()
{
    int Array[5] ;
    int max,i;
    
    for( i = 0; i < 3;i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",&Array[i]);
    }

    max = Array[0] ;

    for( i = 1;i <3;i++)
    {
        if(Array[i] > max)
        {
            max = Array[i] ; 
        }
    }

    printf("max value is : %d",max);
    return 0;
}