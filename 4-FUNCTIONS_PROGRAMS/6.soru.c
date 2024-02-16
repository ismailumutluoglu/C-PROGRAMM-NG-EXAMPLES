#include <stdio.h>
void myArray(int array[],int size) ;
int main()
{
    int array[10] ;

    myArray(array,10);

    return 0 ; 
}

void myArray(int array[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d.elemani giriniz\n",i+1);
        scanf("%d",&array[i]);
    }
    
    for(int i = 0 ; i < size ; i++)
    {
        printf("%d ",array[i]);
    }
}