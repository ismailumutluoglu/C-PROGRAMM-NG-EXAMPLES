#include <stdio.h>
#include <stdlib.h>
int *dizileri_birlestir(int array1[],int size1,int array2[],int size2);
int main()
{
    int dizi_1[5] = {1,2,3,4,5};
    int dizi_2[5] = {6,7,8,9,10};
    int size1 = sizeof(dizi_1)/sizeof(dizi_1[0]);
    int size2 = sizeof(dizi_2)/sizeof(dizi_2[0]);
    int *ptr;
    ptr = dizileri_birlestir(dizi_1,size1,dizi_2,size2); // ptr = result=&dizi_1[0]
    for(int i=0;i<size1+size2;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0 ; 
}
int *dizileri_birlestir(int array1[],int size1,int array2[],int size2)
{
    int i,j;
    int *result = (int*)malloc((size1+size2)*sizeof(int));
    if(result==NULL)
        return 0 ; 
    else
    {
        for(i=0;i<size1;i++)
            *(result+i)=array1[i];

        for(j=0;j<size2;j++,i++)
            *(result+i)=array2[j];

        return result;
    }   
    
}