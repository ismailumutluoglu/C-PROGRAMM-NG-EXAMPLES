#include <stdio.h>
int main()
{
    int A[10]={5,3,7,8,9,1,23,5,65,32};
    int i,max,min,x,y;

    max=A[0];
    min=A[0];
    for(i=1;i<10;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
            x=i+1;
        }
        if(A[i]<min)
        {
            min=A[i];
            y=i+1;
        }
    }
    printf("en buyuk sayi = %d dir ve %d. dizi elemanidir\n",max,x);
    printf("en kucuk sayi = %d dir ve %d. dizi elemanidir\n",min,y);
}