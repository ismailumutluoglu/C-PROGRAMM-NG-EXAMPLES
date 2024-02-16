#include <stdio.h>

int main()
{
    int arr[] = {1,1,2,2,3,3,1,4,4,5,5} ;
    
    int i = 0;

    for(i=0;i<11;i++)
    {
        if(arr[i] != arr[i+1])
        {
            printf("%d ",arr[i]);
        }
    }

    return 0 ; 
}