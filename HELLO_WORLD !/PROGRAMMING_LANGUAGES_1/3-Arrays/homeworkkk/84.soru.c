/*   
Eleman değerleri verilmiş 7 elemanlı bir sayı dizisinde
tekrarlanan sayıların ilk yazılanı dışında kalanları kaldırarak
başa doğru öteleyen programın algoritma ve akış diyagramını
çiziniz.
*/
#include <stdio.h>
int main()
{
    int A[7]={1,1,2,2,3,4,5},i,j,count;

    for(i=0;i<7;i++)
    {
        count=0;
        for(j=0;j<7;j++)
        {  
            if(A[i]==A[j])
            {
                count++;
            }
        }
        if(count>=2)
        {
            continue;
        }
        else
        {
            printf("%d\t",A[i]);
        }
    }
    return 0;
}