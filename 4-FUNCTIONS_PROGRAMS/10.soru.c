#include <stdio.h>
void print(int matris[][3],int row,int array[],int size);

int main()
{
    int matris[2][3]={1,2,3,4,5,6};
    int array[6];
    
    print(matris,2,array,6);
    return 0 ;
}

void print(int matris[][3],int row,int array[],int size)
{
    int i , j , k;
    k = 0 ; 

    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
           array[k] = matris[i][j];
           k++;
        }
    }   

    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}