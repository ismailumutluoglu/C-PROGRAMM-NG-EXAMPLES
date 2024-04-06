#include <stdio.h>
void calling(int array[][3],int size);
int main()
{
    int matris[2][3] = {1,2,3,4,5,6} ;

    calling(matris,2);

    return 0 ;
}

void calling(int array[][3],int size)
{
    for(int i = 0 ; i <  size ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}