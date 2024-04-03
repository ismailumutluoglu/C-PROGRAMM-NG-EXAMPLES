#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N,i,*ptr; 
    printf("eleman sayisini giriniz : ");
    scanf("%d",&N);
    ptr = (int*)calloc(N,sizeof(int));
    
    if(ptr==NULL)
    {
        printf("yeterli alan yoktur : ");
        return 0 ; 
    }
    for(i=0;i<N;i++)
    {
        printf("%d.elemani giriniz : ",i+1);
        scanf("%d",ptr+i);
    }
    int max=*ptr;
    for(i=0;i<N;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }
    printf("girilene max deger = %d",max);
    return 0 ; 
}