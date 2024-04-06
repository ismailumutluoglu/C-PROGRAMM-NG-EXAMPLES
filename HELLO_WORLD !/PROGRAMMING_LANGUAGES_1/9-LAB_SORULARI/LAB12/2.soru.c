// Aynı satır ve sütun sayısına sahip iki matrisi toplayan C kodunu yazınız. Matris değerleri 
// klavyeden girilecek. 

#include <stdio.h>

int main()
{
    int A[3][4] ;
    int B[3][4] ;

    int i , j , toplam = 0 ; 

    for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("A[%d][%d]'yi giriniz : ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

     for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            printf("B[%d][%d]'yi giriniz : ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    
     for(i = 0 ; i < 3 ; i++)
    {
        for(j = 0 ; j < 4 ; j++)
        {
            toplam+=A[i][j]+B[i][j] ; 
        }
    }

    printf("%d",toplam);
    return 0 ; 
}