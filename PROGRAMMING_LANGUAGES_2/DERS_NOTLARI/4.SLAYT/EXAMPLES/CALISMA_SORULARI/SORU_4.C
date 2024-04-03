#include <stdio.h>
#include <math.h>
double varyans_hesaplama(int *array_func,int size,double x);
double ort_hesapla(int *array_func , int size);
int main()
{
    int N ; 
    printf("dizinin kac elemandan olusacagini giriniz : ");
    scanf("%d",&N);
    int array[N]; 

    for(int i = 0 ; i < N ; i++)
    {
        printf("dizinin %d. elemanini giriniz : ",i+1);
        scanf("%d",&array[i]); 
    }

    double x = ort_hesapla(array,N)/N ; 

    printf("girilen dizinin varyansi = %.2lf",varyans_hesaplama(array,N,x)/N);
    return 0 ; 
}

double varyans_hesaplama(int *array_func , int size,double x)
{
    if(size - 1 >= 0)
    {
        return (x - *array_func)*(x - *array_func)  + varyans_hesaplama(array_func + 1 , size -1,x);
    }
    else
        return 0 ; 
}

double ort_hesapla(int *array_func,int size)
{
    static int sum = 0;
    double ort  ;
    if(size -1 >= 0)
    {
        sum += *array_func;
        return ort_hesapla(array_func+1,size-1);
    } 
    return sum ; 
}
