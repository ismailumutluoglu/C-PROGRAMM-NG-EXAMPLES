#include <stdio.h>
void sort_an_array(int *dizi,int size);
int main()
{
    int dizi[5]={4,3,8};
    sort_an_array(dizi,3);
    return 0 ; 
}
void sort_an_array(int *dizi,int size)
{
    int temp,i,j; 
    for( i = 0 ; i < size ; i++)
    {
        for(j = 0 ; j < size ; j++)
        {
            if(*(dizi+i)<*(dizi+j))
            {
                    temp = *(dizi+j);
                    *(dizi+j)=*(dizi+i);
                    *(dizi+i)=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",*(dizi+i));
    }
}