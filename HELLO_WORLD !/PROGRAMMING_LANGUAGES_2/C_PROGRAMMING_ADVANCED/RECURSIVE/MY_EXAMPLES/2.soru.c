// recursive fonksiyon aracılığı ilen girilen sayının kuvvetini bulduran program
#include <stdio.h>

int UsAlma(int x , int y, int i, int pow);

int main()
{
    int a , b , i = 1 , pow = 1; 
    printf("taban ve us degerlerini giriniz : ");
    scanf("%d%d",&a,&b);

    printf("%d",UsAlma(a,b,i,pow));
    return 0 ; 
}

int UsAlma(int x , int y, int i ,int pow )
{
    if(i <= y)
    {
        pow = pow * x ; 
        return  UsAlma(x,y,i+1,pow);
    }

    return pow ; 
}
