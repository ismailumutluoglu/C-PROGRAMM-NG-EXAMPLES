// sum of elements in array with pointer
#include <stdio.h>
int sumArrayElements(int* ptr,int i);
int main()
{
    int dizi[5] = {1,2,3,4,5};
    int size = sizeof(dizi)/sizeof(dizi[0]);
    printf("girilen dizideki elemanlarin toplami = %d",sumArrayElements(dizi,size)); 
}
int sumArrayElements(int* ptr,int i)
{
    if(i>0)
        return *(ptr+i-1) + sumArrayElements(ptr,--i);
    else
        return 0;
}
