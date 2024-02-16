#include <stdio.h>

const int M = 3;
const int N = 3;

void print(int Array[M][N])
{
    for(int i = 0; i < M ; ++i)
    {
        for(int j = 0; j < N; ++j)
        {
            printf("A[%d][%d] = %d",i,j,Array[i,j]);
            scanf("%d",&Array[i][j]);
        }
    }
    
    for(int i = 0; i < M;++i)
    {
        for(int j = 0; j < N; ++j)
        {
            printf("%d",Array[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    
    int Array ;  
    printf(Array);
    return 0;
}
