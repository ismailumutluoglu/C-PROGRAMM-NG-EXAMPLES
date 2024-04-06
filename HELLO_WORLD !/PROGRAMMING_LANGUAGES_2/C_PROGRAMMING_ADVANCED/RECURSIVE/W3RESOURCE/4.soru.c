// 4. Write a program in C to print the array elements using recursion. >
// Test Data :
// Input the number of elements to be stored in the array :6
// Input 6 elements in the array :
// element - 0 : 2
// element - 1 : 4
// element - 2 : 6
// element - 3 : 8
// element - 4 : 10
// element - 5 : 12
// Expected Output :

// The elements in the array are : 2  4  6  8  10  12 

#include <stdio.h>
int elements(int dizi[],int size);
int main()
{
    int dizi[6] = {2,4,6,8,10,12} ;
    elements(dizi,6);
    return 0 ; 
}
int elements(int dizi[],int size)
{
    static int i = 0 ; 

    if(i < size)
    {
        printf("%d\n",dizi[i]);
        return elements(dizi,size);
    }
    return 0 ; 
}
