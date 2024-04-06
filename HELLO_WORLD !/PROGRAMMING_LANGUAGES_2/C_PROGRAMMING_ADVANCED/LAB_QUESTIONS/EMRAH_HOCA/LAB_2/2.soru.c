#include <stdio.h>

int main()
{
    int arr[4] = {1,2,3,4};
    int *p = arr + 2 ; // *p = array[2] 
    printf("%d %d\n",p[-2] , arr[*p]) ; // p[-2] = p -2 ;
    return 0 ; 
}