#include <stdio.h>
#include <stdlib.h>
void find_largest_element(int *arr,int N);
int main()
{
    int *arr,N;
    printf("dizi boyutunu gir : ");
    scanf("%d",&N);
    arr = (int*)calloc(N,sizeof(int));
    for(int i = 0 ; i < N ; i++)
    {
        printf("%d. elemani giriniz : ",i+1);
        scanf("%d",(arr+i));
    }
    find_largest_element(arr,N);
}
void find_largest_element(int *arr,int N)
{
    int i ; 
    for(i=0;i<N;i++)
    {
        if(*arr < *(arr + i))
        {
            *arr=*(arr+i);
        }
    }
    printf("%d",*arr);
}