#include <stdio.h>

int main()
{
    int row , column ; 
    printf("matrisin boyutlarini  giriniz : "); // ikiside ayni olmak zorunda yoksa kare olamaz
    scanf("%d %d",&row,&column);

    int matris[row][column] ;

    if(row%2 !=0) // tek ise hem i hemde j satır veya sutunun yarisinda  oldugunda olur
    {
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < column ; j++)
            {
                if(i==row/2 || j == column/2)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }
    }
    else // çift ise hem i hemde j satır veya sutunun yarisinda ve 1  fazlasinda oldugunda olur
    {
      for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < column ; j++)
            {
                if(i == (row/2)-1 || i == (row/2) || j==(column/2 )-1 || j==(column/2))
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
            }
            printf("\n");
        }  
    }
    return 0 ; 
}