#include <stdio.h>

int main()
{
    int arr1[5]={2,3,4,5,1};
    int arr2[7]={1,3,4,5,6,7,8,9};

    int i,j;
    
    
    for(i = 0;i < sizeof(arr1)/sizeof(arr1[0]);i++)
    {
        for(j = 0;j <sizeof(arr2)/sizeof(arr2[0]);j++)
        {
            if(arr1[i]==arr2[j])
            {   
                printf("%d ",arr1[i]);
            }
            
        }
    }

    return 0;

}