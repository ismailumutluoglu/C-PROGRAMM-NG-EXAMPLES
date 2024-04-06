//int** ve int* önemli ;
#include <stdio.h>

int main()
{
    int A[10] = {2,2,1,0,2,0,5,0,1,8};
    int *m,**k;
    m = A ; 
    printf("%d\n",*(m+1));
    *(m+2) += 3 ; 
    m += 4 ; 
    printf("%d\n",(m+1));
    m = &A[1];
    k =  &m ; 
    printf("%d\n",*(*(k)+1)); // bu ifade kafa karıştırabilir ama basit (*k m yi **k A yı işaret ediyor !!!) . 
    printf("%d\n",*k);
    m = m - 1 ; 
    printf("%d",*k);
    return 0 ; 
}