#include <stdio.h>

int main()
{
    int arr[5] = {1,2,1,3,1};
    int size ,value;
    size = 5 ;
    value = 1;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
            continue ;
        }
        else
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}