#include <stdio.h>

void  reverseArray(int myArray[],int size);

int main()
{
    int myArray[5] = {1,2,3,4,5} ;

        reverseArray(myArray,5)

    return 0 ; 
}
void reverseArray(int myArray[],int size)
{
    int i = 0,tmp;

    for(i = 0 ; i<size/2;i++)
    {
        tmp = myArray[i] ;
        myArray[i] = myArray[size-i-1] ;
        myArray[size-i-1] = tmp;
    }

    for(i = 0 ; i < size ; i++)
    {
        printf("%d ",myArray[i] ) ; 
    }
}