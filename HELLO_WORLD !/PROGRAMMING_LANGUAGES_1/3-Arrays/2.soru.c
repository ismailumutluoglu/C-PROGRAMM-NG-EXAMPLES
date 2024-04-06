#include <stdio.h>
int main()
{
    int A[10],i,j;

    i=0;

    do{
        printf(" %d. sayiyi giriniz",i+1);
        scanf("%d",&A[i]);
        i++;
    }while(A[i-1]!=-1);
    
        for(j=0;j<i;j++)
    {   
        if(A[j]==-1)
            continue; 
        printf("A[%d] = %d\n",j,A[j]*A[j]);
    }
    
    return 0;
}