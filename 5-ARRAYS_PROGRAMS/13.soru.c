#include <stdio.h>

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr1size=sizeof(arr1)/sizeof(arr1[0]);

    int arr2[5] = {6,7,8,9,10};
    int arr2size=sizeof(arr2)/sizeof(arr2[0]);

    int arr3size=arr1size+arr2size;
    int arr3[arr3size];
    


    for(int i=0;i<arr1size;i++)
    {
        arr3[i]=arr1[i];
    }
    
    for(int i=arr2size;i<arr3size;i++)
    {
        arr3[i]=arr2[i-arr2size];
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ",arr3[i]);
    }

    return 0;
}