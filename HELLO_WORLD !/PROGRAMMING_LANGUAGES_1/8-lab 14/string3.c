#include <stdio.h>

void matris(int A[][3],int size);

int main()
{
    int array[2][3] = {1,2,3,4,5,6};

    matris(array,2);

    return 0 ; 
}
void matris(int A[][3],int size)
{
    for(int i = 0 ; i < size ;i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

